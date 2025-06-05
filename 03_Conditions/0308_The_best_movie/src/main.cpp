#include <iostream> 

using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	if ((a <= d && b <= e) || (a <= e && b <= d))
	{
		cout << "YES";
		return 0;
	}
	if ((c <= d && b <= e) || (c <= e && b <= d))
	{
		cout << "YES";
		return 0;
	}
	if ((a <= d && c <= e) || (a <= e && c <= d))
	{
		cout << "YES";
		return 0;
	}

	cout << "NO";
	return 0;

	
}