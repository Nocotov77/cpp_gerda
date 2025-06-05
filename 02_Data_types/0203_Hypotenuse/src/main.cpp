#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << setprecision(6) << fixed << sqrt(pow(a,2) + pow(b,2));

    return 0;
}