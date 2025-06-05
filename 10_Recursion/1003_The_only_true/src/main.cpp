#include <iostream>

int find_winner(int n, int k) {
    if (n == 1)
        return 1;
    return (find_winner(n - 1, k) + k - 1) % n + 1;
}