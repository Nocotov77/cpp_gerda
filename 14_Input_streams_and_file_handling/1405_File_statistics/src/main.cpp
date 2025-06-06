#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    string filename;
    getline(cin, filename);

    ifstream file(filename);
    if (!file) {
        cerr << "Ошибка открытия файла" << endl;
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    bool in_word = false;
    char c;

    while (file.get(c)) {
        if (isspace(static_cast<unsigned char>(c))) {
            if (c == '\n') lines++;
            if (in_word) {
                words++;
                in_word = false;
            }
        } else {
            chars++;
            in_word = true;
        }
    }

    if (in_word) words++;
    if (file.eof() && c != '\n') lines++;

    cout << "Input file contains:" <<  endl <<chars << " chars" << endl << words << " words" << endl << lines << " lines" << endl;
    return 0;
}