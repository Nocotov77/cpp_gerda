#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string res;
    for (char c : s) {
        if (!res.empty() && res.back() == c) {
            res.pop_back();
        } else {
            res.push_back(c);
        }
    }
    cout << res << endl;
    return 0;
}