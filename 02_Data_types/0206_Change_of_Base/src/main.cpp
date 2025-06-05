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
		switch (n % 16)
		{

			case 10:
				str = str + 'a';
				break;
			case 11:
				str = str + 'b';
				break;
			case 12:
				str = str + 'c';
				break;
			case 13:
				str = str + 'd';
				break;
			case 14:
				str = str + 'e';
				break;
			case 15:
				str = str + 'f';
				break;
			default:
				str = str + to_string(n % 16);
				break;
		}
		n = n / 16;
		
	} while (n > 0);

	reverse(str.begin(), str.end());
	cout << setw(10) << setfill(' ') << str;
	return 0;
}