#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    getline(cin, filename);

    ifstream file(filename);
    if (file.is_open()) {
        cout << file.rdbuf();
        file.close();
    } else {
        cerr << "Ошибка при открытии файла" << endl;
        return 1;
    }

    return 0;
}