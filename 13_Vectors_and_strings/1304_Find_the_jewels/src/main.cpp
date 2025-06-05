#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string jewels, stones;
    cin >> jewels >> stones;
    
    unordered_set<char> jewel_set(jewels.begin(), jewels.end());
    
    int count = 0;
    for (char c : stones) {
        if (jewel_set.count(c)) {
            ++count;
        }
    }
    
    cout << count << '\n';
    return 0;
}