#include <iostream>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    while (N > M)
    {
        if (N - 1 == M && N / 2 != M)
        {
            N -= 1;
            cout << "-1" << endl;
            break;
        }

        if (N % 2 == 0 && !(N / 2 < M))
        {
            N /= 2;
            cout << ":2" << endl;

        }
        else
        {
            N -= 1;
            cout << "-1" << endl;
        }
    }

    return 0;
}