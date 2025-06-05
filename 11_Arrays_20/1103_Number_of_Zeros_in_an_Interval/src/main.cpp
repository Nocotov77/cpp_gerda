#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + (a[i - 1] == 0);
    }

    int k;
    cin >> k;

    vector<int> res;
    res.reserve(k);

    while (k--) {
        int l, r;
        cin >> l >> r;
        res.push_back(prefix[r] - prefix[l - 1]);
    }

    for (size_t i = 0; i < res.size(); ++i) {
        if (i > 0) {
            cout << ' ';
        }
        cout << res[i];
    }
    cout << '\n';

    return 0;
}