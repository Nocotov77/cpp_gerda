#include<iostream>

using namespace std;

int main()
{
	int n = 0, number = 0, min = 1000000, max = -1000000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number > max) max = number;
		if (number < min) min = number;
	}
	cout << max + min;
	return 0;
}