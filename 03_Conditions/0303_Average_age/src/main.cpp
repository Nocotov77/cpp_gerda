#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
	int n[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> n[i];
	}

	int maximus = *max_element(begin(n), end(n));
	int minimus = *min_element(begin(n), end(n));

	for (int i = 0; i < 3; i++)
	{
		if (n[i] > minimus && n[i] < maximus)
		{
			cout << n[i];
		}
	}

	return 0;
}