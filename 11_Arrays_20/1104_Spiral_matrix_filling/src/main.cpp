#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a1, d;
    cin >> N >> a1 >> d;

   
    vector<pair<int, int>> positions;
    for (int s = 0; s <= 2 * (N - 1); ++s) {
        if (s % 2 == 0) { 
            int start = max(0, s - N + 1);
            int end = min(s, N - 1);
            for (int i = start; i <= end; ++i) {
                int j = s - i;
                positions.push_back({i, j});
            }
        } else { 
            int start = min(s, N - 1);
            int end = max(0, s - N + 1);
            for (int i = start; i >= end; --i) {
                int j = s - i;
                positions.push_back({i, j});
            }
        }
    }

   
    vector<vector<int>> matrix(N, vector<int>(N, 0));
    int current = a1;
    for (const auto& pos : positions) {
        matrix[pos.first][pos.second] = current;
        current += d;
    }

  
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if ((i < j && i + j < N - 1) || (i > j && i + j > N - 1)) {
                sum += matrix[i][j];
            }
        }
    }

   
    cout << sum << endl;
    if (N <= 20) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << matrix[i][j];
                if (j < N - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}