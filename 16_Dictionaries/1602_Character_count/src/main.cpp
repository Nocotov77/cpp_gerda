#include <iostream>
#include <map>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    map<char, int> m;
    for (char c : s) m[c]++;
    for (auto& p : m) cout << p.first << ": " << p.second << endl;
    return 0;
}