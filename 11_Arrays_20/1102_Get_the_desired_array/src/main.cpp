#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int steps = 0;

    while (true) {
        bool all_zero = true;
        bool has_odd = false;

        for (int x : a) {
            if (x != 0) all_zero = false;
            if (x % 2 != 0) has_odd = true;
        }

        if (all_zero) break;

        if (has_odd) {
            int cnt_odd = 0;
            for (int& x : a) {
                if (x % 2 != 0) {
                    if (x > 0) x--;
                    else x++;
                    cnt_odd++;
                }
            }
            steps += cnt_odd;

            all_zero = true;
            for (int x : a) {
                if (x != 0) {
                    all_zero = false;
                    break;
                }
            }
            if (all_zero) break;

            for (int& x : a) x /= 2;
            steps++;
        }
        else {
            for (int& x : a) x /= 2;
            steps++;
        }
    }

    cout << steps << endl;

    return 0;
}