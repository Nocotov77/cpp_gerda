#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
private:
    const string a, b;
public:
    User(string c, string d) : a(c), b(d) {}
    string getName() const { return a; }
    string getRole() const { return b; }
};

class Access {
private:
    vector<string> a;
public:
    void addRole(string b) { a.push_back(b); }
    void printRoles() {
        cout << "Access(";
        if (!a.empty()) {
            for (size_t i = 0; i < a.size(); i++) {
                cout << "\"" << a[i] << "\"";
                if (i < a.size() - 1)
                    cout << ", ";
            }
        }
        cout << ")" << endl;
    }
    bool getAccess(const User &c, bool d = true) {
        bool e = false;
        for (size_t i = 0; i < a.size(); i++) {
            if (a[i] == c.getRole()) { e = true; break; }
        }
        if (d) {
            if (e)
                cout << "User " << c.getName() << ": success" << endl;
            else
                cout << "AccessDenied" << endl;
        }
        return e;
    }
};