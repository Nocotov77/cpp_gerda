#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int longInt1[250] = {};
    int longInt2[250] = {};
    int result[250] = {};

    for (int i = 0; i < 250; i++) {
        longInt1[i] = 0;
        longInt2[i] = 0;
        result[i] = 0;
    }

    int length1 = int(a.length()), length2 = int(b.length());
    int j = int(a.length()) - 1;

    for (int i = 0; i < length1; i++)
    {
        longInt1[i] = a[j] - '0';
        j--;
    }
    j = int(b.length()) - 1;

    for (int i = 0; i < length2; i++)
    {
        longInt2[i] = b[j] - '0';
        j--;
    }
    int maxLength = max(length1, length2), delta = 0;

    for (int i = 0; i < maxLength; i++) {
        int temp = delta + (longInt1[i] + longInt2[i]);
        result[i] = temp % 10;
        delta = temp / 10;
    }

    if (delta) {
        result[maxLength++] = delta;
        delta = 0;
    }

    for (int i = maxLength - 1; i >= 0; i--)
    {
        cout << result[i];
    }
}