#include <iostream>
#include <vector>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;

    while (a.size() > 1 && a[0] == '0') {
        a.erase(0, 1);
    }

    if (b == 0 || a == "0") {
        cout << "0";
        return 0;
    }

    vector<int> digits;
    for (char c : a) {
        digits.push_back(c - '0');
    }

    vector<int> quotient;
    int remainder = 0;

    for (int digit : digits) {
        remainder = remainder * 10 + digit;
        int q = remainder / b;

        if (!quotient.empty() || q != 0) {
            quotient.push_back(q);
        }
        remainder %= b;
    }

    if (quotient.empty()) {
        cout << "0";
    }
    else {
        for (int num : quotient) {
            cout << num;
        }
    }

    return 0;
}