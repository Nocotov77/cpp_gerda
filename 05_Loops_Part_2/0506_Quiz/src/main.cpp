#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int max_sum = INT_MIN;
    int team_number = 0;

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            sum += x;
        }
        if (sum > max_sum) {
            max_sum = sum;
            team_number = i + 1;
        }
    }

    cout << max_sum << endl << team_number << endl;

    return 0;
}