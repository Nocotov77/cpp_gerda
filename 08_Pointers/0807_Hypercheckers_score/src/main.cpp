#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0, k = 0;

    cin >> n >> k;
    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    vector<pair<long long, int>> p;
    int pr = -1;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || x[i] != x[i + 1]) {
            p.push_back({ x[i], i - pr });
            pr = i;
        }
    }
    int m = p.size();

    long long ans1 = 0;
    for (int i = 0; i < m; i++) {
        if (p[i].second >= 3) {
            ans1++;
        }
    }
    long long ans2 = 0;
    int j = 0;
    for (int i = 0; i < m; i++) {
        while (j < i && p[j].first * k < p[i].first) {
            j++;
        }
        ans2 += 6LL * (i - j) * (i - j - 1) / 2;
    }
    long long ans3 = 0;
    j = 0;
    for (int i = 1; i < m; i++) {
        while (j < i && p[j].first * k < p[i].first) {
            j++;
        }
        if (p[i].second > 1) {
            ans3 += 3 * (i - j);
        }
    }
    j = m - 1;
    for (int i = m - 2; i >= 0; i--) {
        while (j > i && p[i].first * k < p[j].first) {
            j--;
        }
        if (p[i].second > 1) {
            ans3 += 3 * (j - i);
        }
    }

    cout << ans1 + ans2 + ans3;
    return 0;
}