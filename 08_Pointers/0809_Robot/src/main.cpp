#include <iostream>
#include <string>

using namespace std;

int main() {
    long long k;
    string s;
    cin >> k >> s;

    long long ex = 0, res = 0;
    long long n = s.size();

    for (int i = n - k - 1; i >= 0; --i) {
        if (s[i] == s[i + k]) {
            ex++;
        }
        else {
            ex = 0;
        }
        res += ex;
    }

    cout << res << endl;
    return 0;
}