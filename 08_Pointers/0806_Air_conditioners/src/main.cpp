#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int& ai : a) {
        cin >> ai;
    }

    int m;
    cin >> m;
    vector<pair<int, int>> cond(m);
    for (auto& p : cond) {
        cin >> p.first >> p.second;
    }

    sort(cond.begin(), cond.end(), [](const auto& x, const auto& y) {
        if (x.first == y.first) return x.second < y.second;
        return x.first < y.first;
        });

    vector<int> min_cost(1001, INT_MAX);
    int current_min = INT_MAX;
    int ptr = m - 1;

    for (int x = 1000; x >= 1; --x) {
        while (ptr >= 0 && cond[ptr].first >= x) {
            current_min = min(current_min, cond[ptr].second);
            ptr--;
        }
        min_cost[x] = current_min;
    }

    long long total = 0;
    for (int ai : a) {
        total += min_cost[ai];
    }

    cout << total << endl;

    return 0;
}