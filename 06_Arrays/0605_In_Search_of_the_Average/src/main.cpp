#include<iostream>

using namespace std;

int main()
{
	int n = 0, number = 0, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		sum += number;
	}
	cout << double(sum) / double(n);
	return 0;
}