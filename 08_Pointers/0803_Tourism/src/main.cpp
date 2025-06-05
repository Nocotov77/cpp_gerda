#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> result;

    int N;
    cin >> N;

    int* y = new int[N + 1];

    for (int i = 1; i <= N; ++i) {
        int x;
        cin >> x >> y[i];
    }

    int* forward = new int[N + 1]();
    int* backward = new int[N + 2]();

    for (int i = 2; i <= N; ++i) {
        forward[i] = forward[i - 1] + max(y[i] - y[i - 1], 0);
    }

    for (int i = N - 1; i >= 1; --i) {
        backward[i] = backward[i + 1] + max(y[i] - y[i + 1], 0);
    }

    int M;
    cin >> M;

    while (M--) {
        int s, f;
        cin >> s >> f;

        if (s == f) {
            result.push_back(0);
        }
        else if (s < f) {
            result.push_back(forward[f] - forward[s]);
        }
        else {
            result.push_back(backward[f] - backward[s]);
        }
    }

    int length = int(result.size());

    for (int i = 0; i < length; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}