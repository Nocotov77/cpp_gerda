#include <iostream> 
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n = 0;
	string str;
	
	cin >> n;

	do
	{
		str = str + to_string(n % 2);
		n = n / 2;
	} while (n > 0);

	cout << str;
	return 0;
}