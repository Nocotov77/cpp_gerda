# Степени

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 96.0 Мб

**Ввод:** input.cpp

**Вывод:** стандартный вывод или output.txt

Вам необходимо разработать классы `Square`, `Cube` и `Power4` с методами `getValue` для выполнения операций возведения целого числа в квадрат, куб и в четвертую степень соответственно, с использованием наследования и делегирования.

Реализуйте классы `Square`, `Cube` и `Power4` со следующими характеристиками:

*   Класс `Square` содержит виртуальный метод `getValue`, который принимает целое число и возвращает его квадрат.
*   Класс `Cube` наследуется от класса `Square` и переопределяет метод `getValue`, чтобы возвращать куб переданного числа.
*   Класс `Power4` также наследуется от класса `Square` и переопределяет метод `getValue`, чтобы возвращать число, возведенное в четвертую степень.

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не выводит ничего на экран. Необходимо реализовать классы по условию с указанным функционалом.

## Пример 1

**Ввод**

```
#include <assert.h>
#include <iostream>
#include <string>
#include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    Square *base1 = new Cube();
    Square *base2 = new Power4();

    Cube *cube = dynamic_cast<Cube*>(base1);
    Power4 *power = dynamic_cast<Power4*>(base2);

    if (cube && power) {
        std::cout << "Cube и Power4 наследованы от Square." << std::endl;
    }

    assert(power->getValue(5) == 625);
    assert(power->getValue(25) == 390625);

    assert(cube->getValue(2) == 8);
    assert(cube->getValue(-17) == -4913);

    return EXIT_SUCCESS;
}
```

**Вывод**

```
Cube и Power4 наследованы от Square.
```

## Пример 2

**Ввод**

```
#include <assert.h>
#include <iostream>
#include <string>
#include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    Square sq;
    Cube cb;
    Power4 pw;

    assert(sq.getValue(4) == pw.getValue(2));
    assert(cb.getValue(4) == sq.getValue(8));
    assert(pw.getValue(16) == sq.getValue(16) * sq.getValue(16));

    std::cout << sq.getValue(4) << std::endl;
    std::cout << sq.getValue(8) * sq.getValue(8) << std::endl;
    std::cout << cb.getValue(3) << std::endl;
    std::cout << pw.getValue(16) << std::endl;

    return EXIT_SUCCESS;
}
```

**Вывод**

```
16
4096
27
65536
```

## Примечания

В тестирующую систему необходимо сдать только определение классов `Square`, `Cube` и `Power4`.