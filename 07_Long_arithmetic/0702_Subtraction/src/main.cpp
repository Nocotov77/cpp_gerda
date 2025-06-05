#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    bool negative = false;

    if (a.length() < b.length()) {
        negative = true;
        swap(a, b);
    }
    else if (a.length() == b.length()) {
        if (a < b) {
            negative = true;
            swap(a, b);
        }
        else if (a == b) {
            cout << "0";
            return 0;
        }
    }

    int longInt1[250] = {};
    int longInt2[250] = {};
    int result[250] = {};

    int len1 = a.length();
    for (int i = 0; i < len1; i++) {
        longInt1[i] = a[len1 - 1 - i] - '0';
    }

    int len2 = b.length();
    for (int i = 0; i < len2; i++) {
        longInt2[i] = b[len2 - 1 - i] - '0';
    }

    int maxLen = max(len1, len2);
    int borrow = 0;

    for (int i = 0; i < maxLen; i++) {
        int sub = longInt1[i] - longInt2[i] - borrow;
        if (sub < 0) {
            sub += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }
        result[i] = sub;
    }

    int startIdx = maxLen - 1;
    while (startIdx >= 0 && result[startIdx] == 0) {
        startIdx--;
    }

    if (startIdx == -1) {
        cout << "0";
    }
    else {
        if (negative) {
            cout << "-";
        }
        for (int i = startIdx; i >= 0; i--) {
            cout << result[i];
        }
    }

    return 0;
}