# Треугольник

**Ограничение времени:** 1 секунда
**Ограничение памяти:** 64.0 Мб
**Ввод:** test.cpp
**Вывод:** стандартный вывод или output.txt

Новая компьютерная игра для прорисовки фоновых сцен использует треугольные текстуры. Каждый треугольник задаётся координатами трёх вершин на плоскости (X; Y), и в дальнейшем будет раскрашен в свой цвет; поэтому он должен храниться в качестве отдельной структуры.

Команда разработчиков приняла решение: сделать каждую вершину треугольника отдельной структурой для хранения координат, а треугольник — структурой из трёх вершин и дополнительным параметром - цветом.

В этой задача напишите структуру `Triangle` c полями `vertex1`, `vertex2`, `vertex3` для вершин треугольника `Point` и полем для цвета `color`. Реализацию структуры `Point` возьмите из предыдущей задачи.

## Пример

**Ввод**
```cpp
#include <iostream>
#include <string>
#include "main.cpp"

// Объявите здесь структуру Point

// Объявите здесь структуру Triangle

int main() {
    Point vertex1 = {0, 0};
    Point vertex2 = {3, 0};
    Point vertex3 = {3, 4};
    Triangle triangle = {vertex1, vertex2, vertex3, "Red"};

    std::cout << "Вершина 1: (" << triangle.vertex1.x << ", " << triangle.vertex1.y << ")" << std::endl;
    std::cout << "Вершина 2: (" << triangle.vertex2.x << ", " << triangle.vertex2.y << ")" << std::endl;
    std::cout << "Вершина 3: (" << triangle.vertex3.x << ", " << triangle.vertex3.y << ")" << std::endl;
    std::cout << "Цвет: " << triangle.color << std::endl;
    return 0;
}
```

**Вывод**
```
Вершина 1: (0, 0)
Вершина 2: (3, 0)
Вершина 3: (3, 4)
Цвет: Red
```

## Примечания

В тестирующую систему необходимо сдать только определение структуры.

Для поля `color` следует использовать тип `char *`.