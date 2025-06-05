#include <iostream> 

using namespace std;

int main() {
	int m, n, k;
	cin >> m >> n >> k;

	if ((k < m*n) && (k%m == 0 || k%n == 0))
	{
		cout << "YES";
		return 0;
	}
	else
	{
		cout << "NO";
		return 0;
	}
}