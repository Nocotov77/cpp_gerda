#include <iostream> 
#include <iomanip>

using namespace std;

int main() {
	double n;
	double total = 0;
	double count = 0;

	do
	{
		cin >> n;
		count++;
		total += n;
	} while (n != 0);
	count--;
	cout << setprecision(5) << fixed << (total/count);
	return 0;
}