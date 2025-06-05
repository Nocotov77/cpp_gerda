#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;

    int ia = (int)a;
    
    if ((ia > 64 && ia < 91) || (ia > 96 && ia < 123))
    {
        cout << "correct";
    }
    else
    {
        cout << "incorrect";
    }

}