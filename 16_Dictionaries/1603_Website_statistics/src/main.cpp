#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> m;
    string ip;
    while (n--) {
        getline(cin, ip);
        m[ip]++;
    }
    for (auto& p : m) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}