#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<long long> prefix = { 0 };
    long long sum = 0;
    int result = 0;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        sum += num;
        prefix.push_back(sum);

        long long target = sum - K;
        auto it = lower_bound(prefix.begin(), prefix.end() - 1, target);
        if (it != prefix.end() - 1 && *it == target) {
            auto upper = upper_bound(it, prefix.end() - 1, target);
            result += upper - it;
        }
    }

    cout << result << '\n';
    return 0;
}