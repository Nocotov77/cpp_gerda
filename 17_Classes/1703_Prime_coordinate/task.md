# Первоклассная координата

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 96.0 Мб

**Ввод:** input.cpp

**Вывод:** стандартный вывод или output.txt

В рамках компьютерного проекта необходимо реализовать класс `Point`, который обеспечит удобную работу с координатами точек на плоскости.

Необходимо реализовать класс, который должен содержать:

*   Приватные поля c целочисленным типом `x` и `y`
*   Конструктор, принимающий соответствующие параметры и инициализирующий поля класса
*   Методы `getX` и `getY`, которые возвращают значения координат `x` и `y`
*   Метод `toString`, возвращающий строку в формате:
    `(x; y)`
*   Метод `print`, который выводит сообщение:
    `Point(x; y)`
    в стандартный поток вывода
*   Метод `distance`, принимающий другую точку в качестве аргумента и возвращающий расстояние между этими точками
*   Перегрузку оператора `<<` для вывода строкового представления точки в стандартный поток
*   Перегрузку оператора `+`, который позволяет складывать две точки и возвращает новую точку

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не выводит ничего на экран. Вам требуется реализовать класс `Point` с указанным функционалом.

## Пример 1

**Ввод**
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    Point a;
    Point b(5, 5);
    Point c(-45, 8);

    a.print();
    b.print();

    std::cout << "A: " << a.toString() << "\t";
    std::cout << "B: " << b.toString() << "\t";
    std::cout << "C: " << c.toString() << std::endl;
    std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << std::endl;

    Point P = b + c;
    std::cout << "b + c = " << P.toString() << std::endl;
    std::cout << "Distance bitween A & B: " << a.distance(b) << std::endl;
    std::cout << "P.x = " << P.getX() << std::endl;
    std::cout << "P.y = " << P.getY() << std::endl;

    return EXIT_SUCCESS;
}
```

**Вывод**
```
Point(0; 0)
Point(5; 5)
A: (0; 0)	B: (5; 5)	C: (-45; 8)
a = (0; 0)	b = (5; 5)	c = (-45; 8)
b + c = (-40; 13)
Distance bitween A & B: 7.07107
P.x = -40
P.y = 13
```

## Пример 2

**Ввод**
```cpp
#include <cmath>
#include <iostream>
#include <string>

 #include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    Point a(100, 100);
    Point b = a + a;

    a.print();
    b.print();

    std::cout << "A: " << a.toString() << "\t";
    std::cout << "B: " << b.toString() << "\t";

    Point P = a + b;
    std::cout << "b + c = " << P.toString() << std::endl;
    std::cout << "Distance bitween A & B: " << a.distance(b) << std::endl;
    std::cout << "P.x = " << P.getX() << std::endl;
    std::cout << "P.y = " << P.getY() << std::endl;

    return EXIT_SUCCESS;
}
```

**Вывод**
```
Point(100; 100)
Point(200; 200)
A: (100; 100)	B: (200; 200)	b + c = (300; 300)
Distance bitween A & B: 141.421
P.x = 300
P.y = 300
```

## Примечания

В тестирующую систему необходимо сдать только определение класса `Point`.