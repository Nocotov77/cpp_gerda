#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    map<int, int> freq;
    for (int num : nums) freq[num]++;
    vector<pair<int, int>> vec;
    for (auto& p : freq) vec.emplace_back(p.first, p.second);
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second != b.second ? a.second < b.second : a.first < b.first;
    });
    vector<int> res;
    for (auto& p : vec) for (int i = 0; i < p.second; ++i) res.push_back(p.first);
    for (size_t i = 0; i < res.size(); ++i) cout << (i ? " " : "") << res[i];
    return 0;
}