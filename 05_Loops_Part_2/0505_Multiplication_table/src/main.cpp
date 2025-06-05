#include <iostream>
using namespace std;

int main() {
    int m1, m2, n1, n2;
    cin >> m1 >> m2 >> n1 >> n2;

    for (int m = m1; m <= m2; ++m) {
        for (int n = n1; n <= n2; ++n) {
            cout << m << " x " << n << " = " << m * n << endl;
        }
        if (m != m2) {
            cout << endl;
        }
    }

    return 0;
}