#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int hamm_dist(const vector<int>& a, const vector<int>& b) {
    int dist = 0;
    for (size_t i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) ++dist;
    return dist;
}

vector<int> rotate(const vector<int>& a, int sh) {
    vector<int> res(a.size());
    for (size_t i = 0; i < a.size(); ++i)
        res[(i + sh) % a.size()] = a[i];
    return res;
}

bool all_equal(const vector<int>& v) {
    for (size_t i = 1; i < v.size(); ++i)
        if (v[i] != v[0]) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;

    if (all_equal(a)) {
        cout << "0\n";
        for (size_t i = 0; i < a.size(); ++i) {
            cout << a[i];
            if (i != a.size() - 1) cout << " ";
        }
        cout << "; 0\n";
        return 0;
    }

    int max_dist = 0;
    map<vector<int>, int> unique_rotations;
    map<int, vector<int>> output_order;

    for (int sh = 1; sh < n; ++sh) {
        auto rot = rotate(a, sh);
        int dist = hamm_dist(a, rot);

        if (dist > max_dist) {
            max_dist = dist;
            unique_rotations.clear();
            output_order.clear();
            unique_rotations[rot] = sh;
            output_order[sh] = rot;
        }
        else if (dist == max_dist) {
            if (unique_rotations.find(rot) == unique_rotations.end()) {
                unique_rotations[rot] = sh;
                output_order[sh] = rot;
            }
        }
    }

    cout << max_dist << endl;
    for (const auto& [sh, rot] : output_order) {
        for (size_t i = 0; i < rot.size(); ++i) {
            cout << rot[i];
            if (i != rot.size() - 1) cout << " ";
        }
        cout << "; " << sh << endl;
    }
}