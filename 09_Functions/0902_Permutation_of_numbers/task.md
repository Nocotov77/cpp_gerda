# Перестановка чисел

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** `test.cpp`

**Вывод:** стандартный вывод или `output.txt`

Вам предстоит реализовать функцию `void my_swap`, которая принимает два целых числа типа `int`, и меняет их местами так, что первая переменная принимает значение второй, а вторая - значение первой.

## Пример

**Ввод**

```
#include <iostream>
#include "main.cpp"

int main() {
	int a, b;

	a = 3; b = 5;
	my_swap(a, b);
	std::cout << a << " " << b << std::endl;
	return 0;
}
```

**Вывод**

```
5 3
```