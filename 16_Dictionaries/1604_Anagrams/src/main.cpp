#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a.size() != b.size()) {
        cout << "NO";
        return 0;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << (a == b ? "YES" : "NO");
    return 0;
}