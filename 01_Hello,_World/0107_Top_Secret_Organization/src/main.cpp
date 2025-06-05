#include <iostream> 
#include <string> 
#include <iomanip> 
#include <sstream> 

using namespace std;

int main() {
    int num;
    cin >> num;

    // Преобразуем число в строку длиной 4 символа с нулями в начале, если необходимо. 
    ostringstream oss;
    oss << setw(4) << setfill('0') << num;
    string s = oss.str();

    // Проверяем симметричность числа: цифры на местах 0 и 3, 1 и 2 должны быть равны. 
    int result = (s[0] == s[3] && s[1] == s[2]) ? 1 : 19;

    cout << result << endl;

    return 0;
}