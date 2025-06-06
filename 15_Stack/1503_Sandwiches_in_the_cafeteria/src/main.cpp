#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    queue<int> students;
    for (int i = 0; i < n; ++i) {
        int pref;
        cin >> pref;
        students.push(pref);
    }
    
    vector<int> sw;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sw.push_back(x);
    }
    reverse(sw.begin(), sw.end());
    stack<int> sandwiches;
    for (int x : sw) sandwiches.push(x);
    
    while (!students.empty() && !sandwiches.empty()) {
        int topSandwich = sandwiches.top();
        int initialSize = students.size();
        int attempts = 0;
        bool found = false;
        
        while (attempts < initialSize) {
            int current = students.front();
            students.pop();
            
            if (current == topSandwich) {
                sandwiches.pop();
                found = true;
                break;
            } else {
                students.push(current);
                attempts++;
            }
        }
        
        if (!found) break;
    }
    
    cout << students.size() << endl;
    return 0;
}