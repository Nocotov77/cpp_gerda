#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n = 0, number = 0;
	cin >> n;
	vector<int> vNum;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		vNum.push_back(number);
	}
	reverse(vNum.begin(), vNum.end());
	for (int i = 0; i < vNum.size(); i++)
	{
		cout << vNum[i] << " ";
	}
	return 0;
}