#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream file("prices.txt");
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла" << endl;
        return 1;
    }

    int total = 0;
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, quantity_str, price_str;

        getline(ss, name, '\t');
        getline(ss, quantity_str, '\t');
        getline(ss, price_str, '\t');

        int quantity = stoi(quantity_str);
        int price = stoi(price_str);

        total += quantity * price;
    }

    cout << total << endl;

    return 0;
}