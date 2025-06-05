#include <iostream> 

using namespace std;

int main() {
	char a;

	cin >> a;

	int ia = (int)a;

	ia = ia - 8;

	if (ia < 65)
	{
		ia = ia + 26;
	}

	char f = ia;

	cout << f;
}