#include <iostream>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;

    while (a.size() > 1 && a[0] == '0') {
        a.erase(0, 1);
    }

    if (b == 0) {
        cout << 0;
        return 0;
    }

    int len = a.length();
    int num[210] = {};
    int result[215] = {};

    for (int i = 0; i < len; i++) {
        num[i] = a[len - 1 - i] - '0';
    }

    int carry = 0;
    for (int i = 0; i < len; i++) {
        int temp = num[i] * b + carry;
        result[i] = temp % 10;
        carry = temp / 10;
    }

    int res_len = len;
    while (carry > 0) {
        result[res_len] = carry % 10;
        carry /= 10;
        res_len++;
    }

    for (int i = res_len - 1; i >= 0; i--) {
        cout << result[i];
    }

    return 0;
}