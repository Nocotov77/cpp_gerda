#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<long long> heights(n);
    for (int i = 0; i < n; ++i) cin >> heights[i];
    
    vector<int> left(n), right(n);
    stack<int> st;
    
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && heights[st.top()] >= heights[i]) st.pop();
        left[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    
    st = stack<int>();
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && heights[st.top()] >= heights[i]) st.pop();
        right[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    
    long long max_area = 0;
    for (int i = 0; i < n; ++i) {
        long long width = right[i] - left[i] - 1;
        max_area = max(max_area, heights[i] * width);
    }
    
    cout << max_area << endl;
    return 0;
}