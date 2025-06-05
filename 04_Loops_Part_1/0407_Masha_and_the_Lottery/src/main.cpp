#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long R, K, P, total = 0;
    int year;
    cin >> P >> R >> K >> year;

    total = R * 100 + K;

    for (int i = 1; i <= year; i++)
    {
        total += (total * P) / 100;
    }
    cout << total / 100 << " " << total % 100;
    return 0;
}