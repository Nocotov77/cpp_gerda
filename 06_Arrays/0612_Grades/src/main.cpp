#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vNum(n);
    for (int i = 0; i < n; i++) {
        cin >> vNum[i];
    }
    int total_removed = 0;
    while (true) {
        int n = vNum.size();
        int removed = 0;
        for (int i = 0; i <= n - 3; i++) {
            if (vNum[i] == vNum[i + 1] && vNum[i + 1] == vNum[i + 2]) {
                int j = i + 3;
                while (j < n && vNum[j] == vNum[i]) {
                    j++;
                }
                int len = j - i;
                vNum.erase(vNum.begin() + i, vNum.begin() + j);
                removed = len;
                break;
            }
        }
        if (removed == 0) break;
        total_removed += removed;
    }
    cout << total_removed << endl;
    return 0;
}