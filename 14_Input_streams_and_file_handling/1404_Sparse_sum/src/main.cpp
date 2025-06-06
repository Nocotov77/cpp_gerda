#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string filename;
    getline(cin, filename);

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        int num, sum = 0;
        while (iss >> num) {
            sum += num;
        }
        cout << sum << endl;
    }

    file.close();
    return 0;
}