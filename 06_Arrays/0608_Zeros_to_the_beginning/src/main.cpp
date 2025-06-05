#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n = 0, number = 0;
	cin >> n;
	vector<int> vNum;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number == 0)
		{
			vNum.insert(vNum.begin(), number);
		}
		else
		{
			vNum.push_back(number);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << vNum[i] << " ";
	}
	return 0;
}