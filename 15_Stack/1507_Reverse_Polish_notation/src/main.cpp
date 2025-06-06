#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string input;
    getline(cin, input);
    istringstream iss(input);
    stack<int> s;
    string token;
    
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            if (token == "+") s.push(b + a);
            else if (token == "-") s.push(b - a);
            else if (token == "*") s.push(b * a);
            else if (token == "/") s.push(b / a);
        } else {
            s.push(stoi(token));
        }
    }
    
    cout << s.top() << endl;
    return 0;
}