#include <iostream> 

using namespace std;

int main() {
	char a;

	cin >> a;

	int ia = (int)a;

	ia = ia + 5;

	if (ia > 90)
	{
		ia = ia - 26;
	}

	char f = ia;

	cout << f;
}