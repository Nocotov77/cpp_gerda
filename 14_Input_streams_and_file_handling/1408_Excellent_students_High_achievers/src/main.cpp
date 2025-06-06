#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        return 1;
    }

    vector<string> students;
    string line;

    while (getline(file, line)) {
        istringstream iss(line);
        string name;
        int s1, s2, s3;

        if (iss >> name >> s1 >> s2 >> s3) {
            if (s1 > 70 && s2 > 70 && s3 > 70) {
                ostringstream formatted;
                formatted << "Name: " << name << ", Scores: " << s1 << " " << s2 << " " << s3;
                students.push_back(formatted.str());
            }
        }
    }

    for (auto it = students.rbegin(); it != students.rend(); ++it) {
        cout << *it << endl;
    }

    file.close();
    return 0;
}