# Алгоритм Евклида

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64 Мб

**Ввод:** стандартный ввод или `input.cpp`

**Вывод:** стандартный вывод или `output.txt`

По данным натуральным числам *n* и *m* найдите их наибольший общий делитель (НОД).

В этом вам поможет алгоритм Евклида, вот его описание:

1. Большее число делим на меньшее.
2. Если делится без остатка, то меньшее число и есть НОД.
3. Если есть остаток, то большее число заменяем на остаток от деления. Переходим к пункту 1.

Вы должно реализовать рекурсивную функцию `gcd`, которая принимает два аргумента - натуральные числа и возвращает их наибольший общий делитель. Использование рекурсии в функции `gcd` обязательно.

Требуемый заголовок функции:

```cpp
int gcd(int a, int b)
```

## Формат ввода

Функция получает на вход 2 натуральных числа *m* и *n*. Числа *m* и *n* не превосходят 10<sup>9</sup>.

## Формат вывода

Функция должна вернуть наибольший общий делитель двух данных чисел.

## Пример 1

**Ввод**

```cpp
#include "solution.cpp"
#include <iostream>

int main() {
	std::cout << gcd(6, 5);
	return 0;
}
```

**Вывод**

```
1
```

## Пример 2

**Ввод**

```cpp
#include "solution.cpp"
#include <iostream>

int main() {
	std::cout << gcd(16, 24);
	return 0;
}
```

**Вывод**

```
8
```

## Пример 3

**Ввод**

```cpp
#include "solution.cpp"
#include <iostream>

int main() {
	std::cout << gcd(128307145, 947637020);
	return 0;
}
```

**Вывод**

```
5
```

## Примечания

В тестирующую систему необходимо сдать только определение функции.