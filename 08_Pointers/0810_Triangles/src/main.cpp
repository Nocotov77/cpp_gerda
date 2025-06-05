#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

struct HashPair {
    size_t operator()(const pair<int, int>& p) const {
        return (static_cast<size_t>(p.first) << 32) | p.second;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Point> points;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }

    long long total = 0;

    for (int i = 0; i < n; ++i) {
        const Point& A = points[i];
        unordered_map<long long, unordered_map<pair<int, int>, int, HashPair>> dist_map;

        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            const Point& P = points[j];
            long long dx = P.x - A.x;
            long long dy = P.y - A.y;
            long long dist_sq = dx * dx + dy * dy;
            dist_map[dist_sq][{P.x, P.y}]++;
        }

        for (auto& [d, group] : dist_map) {
            int m = group.size();
            total += m * (m - 1) / 2;

            vector<pair<int, int>> coords;
            coords.reserve(m);
            for (auto& [coord, cnt] : group) {
                coords.emplace_back(coord);
            }

            for (int j = 0; j < coords.size(); ++j) {
                for (int k = j + 1; k < coords.size(); ++k) {
                    const auto& [x1, y1] = coords[j];
                    const auto& [x2, y2] = coords[k];
                    long long cross = (x1 - A.x) * (y2 - A.y) - (y1 - A.y) * (x2 - A.x);
                    if (cross == 0) {
                        total--;
                    }
                }
            }
        }
    }

    cout << total << endl;
    return 0;
}