#include <iostream> 
#include <math.h>

using namespace std;

int main() {
	int n;
	int calc = 1;

	cin >> n;

	do
	{
		if (n == 1)
		{
			cout << "YES";
			return 0;
		}
		calc *= 2;
	} while (calc < n);

	if (n % calc == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}