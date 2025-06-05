#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    if (!s.empty() && s.back() == '#') {
        s.pop_back();
    }

    int n = s.size();
    string res(n, ' ');

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            res[i / 2] = s[i];
        }
        else {
            int pos = (n - 1) - ((i - 1) / 2);
            res[pos] = s[i];
        }
    }

    cout << res << '\n';

    return 0;
}