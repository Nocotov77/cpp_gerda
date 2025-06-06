#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    istringstream iss(s);
    map<string, int> freq;
    string word;
    while (iss >> word) {
        freq[word]++;
    }
    int max_count = 0;
    for (const auto& p : freq) {
        if (p.second > max_count) {
            max_count = p.second;
        }
    }
    vector<string> candidates;
    for (const auto& p : freq) {
        if (p.second == max_count) {
            candidates.push_back(p.first);
        }
    }
    cout << candidates[0] << endl;
    return 0;
}