#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, K, P, total = 0, totalK, totalR;
    cin >> R;
    cin >> K;
    cin >> P;
    
    total = total + (R + K/100);
    total = total + total/100 * P;
    totalK = modf(total, &totalR);
    
    cout << (int)totalR << ' ' << floor(totalK*100+0.000000001);
    return 0;
}