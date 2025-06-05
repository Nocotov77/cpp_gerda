#include<iostream>
using namespace std;

void my_swap(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}