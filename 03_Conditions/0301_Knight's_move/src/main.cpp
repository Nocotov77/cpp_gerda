#include <iostream> 

using namespace std;

int main() {
	int x1, y1, x2, y2;
	
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);

	if (((dx == 2) && (dy == 1)) || ((dx == 1) && (dy == 2)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}