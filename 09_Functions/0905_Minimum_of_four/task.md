# Минимум четырёх

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** test.cpp

**Вывод:** стандартный вывод или output.txt

Напишите функцию `int min_of_four (int a, int b, int c, int d)`, находящую наименьшее из четырех данных чисел.

## Пример

**Ввод**
```cpp
#include <iostream>
#include "main.cpp"

int main() {
    int a = 12, b = 7, c = 9, d = 20;

    int min_value = min_of_four(a, b, c, d);
    std::cout << "Минимальное значение из " << a << ", " << b << ", " << c << ", " << d << " равно " << min_value << std::endl;

    return 0;
}
```

**Вывод**
```
Минимальное значение из 12, 7, 9, 20 равно 7