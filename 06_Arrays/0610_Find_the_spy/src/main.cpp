#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n = 0, k = 0, number = 0;
	cin >> n >> k;
	vector<int> vNum;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number == k)
		{
			cout << i;
			return 0;
		}
		else
		{
			vNum.push_back(number);
		}
	}
	reverse(vNum.begin(), vNum.end());
	for (int i = 0; i < n; i++)
	{
		cout << vNum[i] << " ";
	}
	return 0;
}