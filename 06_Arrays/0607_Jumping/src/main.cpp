#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n = 0, number = 0;
	bool check = false;
	cin >> n;
	vector<int> vNum;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		vNum.push_back(number);
	}
	int i = 0 , j = 0;
	while (true)
	{
		if (i >= vNum.size() - 1)
		{
			check = true;
			break;
		}
		if (j > vNum.size() - 1)
		{
			break;
		}
		i += vNum[i];
		j++;
	}
	if (check)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	return 0;
}