#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, l1, l2, k;

    cin >> n;

    l1 = pow(10, n) - 1;
    k = l1;
    l2 = pow(10, n - 1) - 1;
    //cout << l1 << endl << l2;
    while (true)
    {
        if (k % 2 != 0)
        {
            cout << k << " ";
        }
        k--;
        if (k <= l2)
        {
            break;
        }
    }
    return 0;
}