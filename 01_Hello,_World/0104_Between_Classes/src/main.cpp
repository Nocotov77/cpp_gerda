#include<iostream>

using namespace std;

int main()
{
	int num[6];
    int sec1, sec2, raz;
    cin >> num[0]; //текущие часы
    cin >> num[1]; //текущие минуты
    cin >> num[2]; //текущие секунды
    cin >> num[3]; //целевые часы
    cin >> num[4]; //целевые минуты
    cin >> num[5]; //целевые секунды
	sec1 = (num[0]*60*60)+(num[1]*60)+num[2];
    sec2 = (num[3]*60*60)+(num[4]*60)+num[5];
	raz = sec2 - sec1;
	cout << raz;
    
    return 0;
}