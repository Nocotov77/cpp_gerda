#include <iostream>

void hanoi(int n, int from, int to) {
    if (n == 0) return;
    int temp = 6 - from - to;
    hanoi(n - 1, from, temp);
    std::cout << n << " " << from << " " << to << std::endl;
    hanoi(n - 1, temp, to);
}