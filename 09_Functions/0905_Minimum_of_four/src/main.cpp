#include<iostream>
using namespace std;

int min_of_four(int a, int b, int c, int d)
{
    int arr[4] = { a, b, c, d };
    int min = 10000;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}