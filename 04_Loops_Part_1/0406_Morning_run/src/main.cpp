#include <iostream> 

using namespace std;

int main() {
	int count = 1;
	double x, y;
	cin >> x >> y;

	while (x < y)
	{
		x += (x / 100) * 10;
		count++;
	}
	cout << count;

	return 0;
}