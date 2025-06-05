#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s;
    cin >> s;
    
    int sum = 0;
    int n = s.length();
    for (int i = 0; i < n - 1; ++i) {
        sum += abs(s[i] - s[i+1]);
    }
    
    cout << sum << '\n';
    return 0;
}