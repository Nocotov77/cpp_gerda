#include <iostream> 

using namespace std;

int main() {
    int S, D, N;
    int days = 0;
    int nights = 0;
    //int pass = 0;
    cin >> S;
    cin >> D;
    cin >> N;

    while (S != 0)
    {
        S -= D;
        days++;
        if (S <= 0) break;
        S += N;
    }

    cout << days << endl;
    return 0;
}