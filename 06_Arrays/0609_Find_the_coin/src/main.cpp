#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n = 0, number = 0, max = -2147483648, k = 0;
	cin >> n;
	vector<int> vNum;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		vNum.push_back(number);
		if (number > max)
		{
			max = number;
			k = i;
		}
	}
	cout << max << endl;
	for (int i = 0; i < n; i++)
	{
		if (i > k)
		{
			cout << vNum[i] << " ";
		}
	}
	return 0;
}