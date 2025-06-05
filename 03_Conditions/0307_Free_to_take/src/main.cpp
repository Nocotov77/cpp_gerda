#include <iostream>

using namespace std;

int main()
{
    int k;

    cin >> k;

	int modk = k % 3;

	if (modk == 0 || (modk == 1 && k >= 10) || (modk == 2 && k >= 5))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}