#include <iostream>

using namespace std;

int main() {
    int n = 0, r = 0;
    long long counter = 0;
    cin >> n >> r;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int target = arr[i] + r;
        int left = i + 1;
        int right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] > target) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }
        counter += n - left;
    }

    cout << counter;

    return 0;
}