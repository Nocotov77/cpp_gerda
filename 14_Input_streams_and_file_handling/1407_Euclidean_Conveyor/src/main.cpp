#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cin >> filename;
    
    ifstream file(filename);
    if (!file.is_open()) {
        return 1;
    }
    
    string line;
    while (getline(file, line)) {
        for (char& c : line) {
            if (c == '(' || c == ')' || c == ';') c = ' ';
        }
        
        istringstream iss(line);
        int ax, ay, bx, by;
        iss >> ax >> ay >> bx >> by;
        
        double dx = bx - ax;
        double dy = by - ay;
        double distance = sqrt(dx*dx + dy*dy);
        
        cout << fixed << setprecision(2) << distance << endl;
    }
    
    file.close();
    return 0;
}