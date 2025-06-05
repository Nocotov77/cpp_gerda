#include <iostream>
using namespace std;

int main() {
    int n, num, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (num == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}