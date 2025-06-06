#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    getline(cin, filename); // Считываем имя файла

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла" << endl;
        return 1;
    }

    string line;
    string prev_prev, prev;

    while (getline(file, line)) {
        prev_prev = prev;
        prev = line;
    }

    cout << prev_prev << endl;

    return 0;
}