#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if ((n == 1 || n % 10 == 1) && n != 11)
    {
        cout << n << " korova";
        return 0;
    }
    if ((4 < n && n < 21) || (n % 10 == 5 || n % 10 == 6 || n % 10 == 7 || n % 10 == 8 || n % 10 == 9 || n % 10 == 0))
    {
        cout << n << " korov";
        return 0;
    }
    if ((1 < n && n < 5) || (n % 10 == 2 || n % 10 == 3 || n % 10 == 4))
    {
        cout << n << " korovy";
        return 0;
    }
}