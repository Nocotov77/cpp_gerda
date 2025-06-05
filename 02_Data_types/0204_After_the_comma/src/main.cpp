#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    float total = a / b;
    int k = total;
    int itog = 10 * (total - k);
    cout << itog;

    return 0;
}