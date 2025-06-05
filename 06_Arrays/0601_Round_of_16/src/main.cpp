#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n = 0, counter = 0, number = 0, k = 0;
	cin >> n;
	vector<int> vNum;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number > 0)
		{

			counter++;
		}
		else
		{
			if (number == 0) continue;
			k++;
			vNum.push_back(number);
		}
	}

	cout << counter << endl;
	reverse(vNum.begin(), vNum.end());
	if (k < 3)
	{
		k = vNum.size();
	}
	else
	{
		k = 3;
	}
	for (int i = 0; i < k; i++)
	{
		cout << vNum[i] << " ";
	}
	return 0;
}