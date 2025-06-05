#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> original(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> original[i][j];
        }
    }
    
    vector<vector<int>> rotated(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            rotated[i][j] = original[N - 1 - j][i];
        }
    }
    
    cout << M << " " << N << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j > 0) {
                cout << " ";
            }
            cout << rotated[i][j];
        }
        cout << endl;
    }
    
    return 0;
}