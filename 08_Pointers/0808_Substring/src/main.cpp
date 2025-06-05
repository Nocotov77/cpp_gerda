#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    vector<int> cnt(26, 0);
    int max_len = 0;
    int max_left = 0;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        cnt[s[right] - 'a']++;

        while (cnt[s[right] - 'a'] > k) {
            cnt[s[left] - 'a']--;
            left++;
        }

        if (right - left + 1 > max_len) {
            max_len = right - left + 1;
            max_left = left;
        }
    }

    cout << max_len << " " << max_left + 1 << endl;

    return 0;
}