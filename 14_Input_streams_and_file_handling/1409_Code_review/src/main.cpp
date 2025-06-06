#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string extract_function_name(const string& line) {
    size_t start = 4;
    size_t end = line.find_first_of("(:");
    if (end != string::npos) {
        return line.substr(start, end - start);
    }
    return line.substr(start);
}

int main() {
    string filename;
    getline(cin, filename);
    
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    
    vector<string> lines;
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    
    vector<string> functions;
    for (size_t i = 0; i < lines.size(); ++i) {
        if (lines[i].substr(0, 4) == "def ") {
            bool has_comment = (i > 0 && !lines[i-1].empty() && lines[i-1][0] == '#');
            if (!has_comment) {
                string name = extract_function_name(lines[i]);
                functions.push_back(name);
            }
        }
    }
    
    if (functions.empty()) {
        cout << "Review Done!" << endl;
    } else {
        for (const auto& name : functions) {
            cout << name << endl;
        }
    }
    
    return 0;
}