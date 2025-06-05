#include <iostream>

bool is_valid(int n) {
    if (n < 1) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n % 4 != 0) {
        return false;
    }
    return is_valid(n / 4);
}