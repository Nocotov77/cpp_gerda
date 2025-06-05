#include <iostream>

using namespace std;

int main()
{
    int s = 0;
    int t, v, total;
    cin >> v;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        s += v;
    }
    while (s < 0)
    {
        s += 109;
    }
    while (s > 108)
    {
        s -= 109;
    }
    cout << s << endl;

    return 0;
}