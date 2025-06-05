#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int N;
    cin >> N;
    long long max_area = 0;

    for (int i = 0; i < N; ++i) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long width = abs(x1 - x2);
        long long height = abs(y1 - y2);
        long long area = width * height;

        if (area > max_area) {
            max_area = area;
        }
    }

    cout << max_area << endl;
    return 0;
}