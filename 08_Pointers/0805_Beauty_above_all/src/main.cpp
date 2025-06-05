#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    int count = 0;
    int min_len = N + 1;
    int result_left = 0, result_right = 0;
    int left = 0;

    for (int right = 0; right < N; ++right) {
        int color = arr[right];
        if (freq[color] == 0) {
            count++;
        }
        freq[color]++;

        while (count == K) {
            int current_len = right - left + 1;
            if (current_len < min_len) {
                min_len = current_len;
                result_left = left;
                result_right = right;
            }
            int left_color = arr[left];
            freq[left_color]--;
            if (freq[left_color] == 0) {
                count--;
            }
            left++;
        }
    }

    cout << result_left + 1 << " " << result_right + 1 << endl;

    return 0;
}