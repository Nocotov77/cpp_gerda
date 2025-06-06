#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<stack<int>> stacks(n);
    
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int type;
            cin >> type;
            stacks[i].push(type);
        }
    }
    
    vector<vector<int>> moves;
    bool possible = true;
    
    for (int i = 0; i < n && possible; i++) {
        vector<int> buffer;
        while (!stacks[i].empty()) {
            int plate = stacks[i].top();
            stacks[i].pop();
            if (plate == i + 1) {
                buffer.push_back(plate);
            } else {
                if (plate > n || stacks[plate - 1].size() > n) {
                    possible = false;
                    break;
                }
                stacks[plate - 1].push(plate);
                moves.push_back({i + 1, plate});
            }
        }
        for (int plate : buffer) {
            stacks[i].push(plate);
        }
    }
    
    if (!possible) {
        cout << 0 << endl;
    } else {
        for (const auto& move : moves) {
            cout << move[0] << " " << move[1] << endl;
        }
    }
    
    return 0;
}