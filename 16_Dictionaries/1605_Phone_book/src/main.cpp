#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

struct Contact {
    string phone;
    string email;
};

int main() {
    int n;
    cin >> n;
    cin.ignore();
    map<string, Contact> contacts;
    string line;
    while (n--) {
        getline(cin, line);
        istringstream iss(line);
        string cmd, name;
        iss >> cmd >> name;
        if (cmd == "ADD") {
            string phone, email;
            iss >> phone >> email;
            contacts[name] = {phone, email};
        } else if (cmd == "DELETE") {
            contacts.erase(name);
        } else if (cmd == "FIND") {
            auto it = contacts.find(name);
            if (it != contacts.end()) {
                cout << name << ": " << it->second.phone << ", " << it->second.email << endl;
            } else {
                cout << "Not found" << endl;
            }
        }
    }
    return 0;
}