#include<iostream>
using namespace std;

void array_printer(int* array, int size)
{
    for (int i = 0; i < size; i++) {
        cout << i << " -- " << *(array + i) << endl;
    }
}