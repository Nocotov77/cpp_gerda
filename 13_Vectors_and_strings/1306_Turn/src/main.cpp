#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[20][20];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int rotated[20][20];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            rotated[i][j] = a[n - 1 - j][i];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << rotated[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}