#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        int original_j = j;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        if (j == original_j) {
            count++;
        }
    }

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl << count << endl;

    return 0;
}