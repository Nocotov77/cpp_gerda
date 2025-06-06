#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stack<char> st;
    unordered_map<char, char> m = {{')', '('}, {']', '['}, {'}', '{'}};
    
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty() || st.top() != m[c]) {
                cout << "no";
                return 0;
            }
            st.pop();
        }
    }
    
    cout << (st.empty() ? "yes" : "no");
    return 0;
}