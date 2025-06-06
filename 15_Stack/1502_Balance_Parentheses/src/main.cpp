#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

bool isValid(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) return false;
            st.pop();
        }
    }
    return st.empty();
}

string solve(const string& s) {
    string left, right;
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                char needed;
                if (c == ')') needed = '(';
                else if (c == ']') needed = '[';
                else needed = '{';
                left += needed;
                st.push(needed);
            }
            if (st.top() == (c == ')' ? '(' : c == ']' ? '[' : '{')) st.pop();
            else return "IMPOSSIBLE";
        }
    }

    while (!st.empty()) {
        char c = st.top();
        right += (c == '(' ? ')' : c == '[' ? ']' : '}');
        st.pop();
    }

    string res = left + s + right;
    return isValid(res) ? res : "IMPOSSIBLE";
}

int main() {
    string s;
    getline(cin, s);
    string ans = solve(s);
    cout << (ans != "IMPOSSIBLE" ? ans : "IMPOSSIBLE") << endl;
    return 0;
}