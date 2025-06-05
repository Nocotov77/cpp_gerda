#include <iostream>

using namespace std;

int main() {
    int n;
	int sum = 0, fac = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			fac *= j;
		}
		sum += fac;
		fac = 1;
	}

	cout << sum;

    return 0;
}