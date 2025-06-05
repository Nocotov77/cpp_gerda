#include <iostream> 
#include <math.h>

using namespace std;

int main() {
	double m, n, k;
	cin >> k >> m >> n;

	double total = (m * 2) * ceil(n / k);

	cout << (int)total;
	return 0;
}