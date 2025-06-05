#include <iostream> 

using namespace std;

int main() {
	int n1, prev;
	int count = 0;
	
	cin >> n1;

	while (n1 != 0)
	{
		prev = n1;
		cin >> n1;
		if (n1 > prev)
		{
			count++;
		}
	}

	cout << count;
	return 0;
}