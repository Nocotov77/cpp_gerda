#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> fib = { 0, 1 };
    int i = 2;
    int A;

    cin >> A;

    if (A == fib[0])
    {
        cout << "0";
        return 0;
    }
    if (A == fib[1])
    {
        cout << "1";
        return 0;
    }

    while (true)
    {
        fib.push_back(fib[i-1]+fib[i-2]);

        if (fib[i] == A)
        {
            cout << i;
            break;
        }
        i++;

        if (i == 1000)
        {
            cout << "-1";
            break;
        }
    }

    return 0;
}