#include <iostream> 
#include <math.h>

using namespace std;

int main() {
	int n;
	int i = 0, calc = 0;

	cin >> n;

	do
	{
		calc = pow(2, i);
		i++;
		if (calc > n)
		{
			return 0;
		}
		cout << calc << " ";
	} while (calc < n);

	return 0;
}