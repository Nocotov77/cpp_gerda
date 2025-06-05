#include <iostream>
using namespace std;

int main() {
    int prev, curr;
    int max_len = 1;
    int temp_inc = 1;
    int temp_dec = 1;

    cin >> curr;
    if (curr == 0) {
        cout << 0;
        return 0;
    }

    while (true) {
        prev = curr;
        cin >> curr;
        if (curr == 0) break;

        if (curr > prev) {
            temp_inc++;
            temp_dec = 1;
        } else if (curr < prev) {
            temp_dec++;
            temp_inc = 1;
        } else {  
            temp_inc = 1;
            temp_dec = 1;
        }
        max_len = max(max_len, max(temp_inc, temp_dec));
    }

    cout << max_len;
    return 0;
}