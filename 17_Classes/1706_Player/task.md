# Игрок

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** input.cpp

**Вывод:** стандартный вывод или output.txt

Чтобы улучшить работу с шахматистами, необходимо реализовать класс `ChessPlayer`, позволяющий сравнивать игроков по их рейтингу.

Класс `ChessPlayer` должен обладать следующим функционалом:

*   **Публичные поля** `name`, `surname` типа `string` и `rating` типа `int`, представляющие имя, фамилию и рейтинг шахматиста соответственно.
*   **Конструктор**, принимающий параметры `p_name`, `p_surname` и `p_rating` и инициализирующий соответствующие поля класса.
*   **Метод** `statistics`, который выводит информацию о шахматисте в формате:

    `Full name: N S Rating: R`

    где N - имя, S - фамилия, R - рейтинг.
*   **Перегрузки операторов** сравнения `>`, `<`, `==`, `!=` как для сравнения с другим экземпляром класса `ChessPlayer`, так и с числом типа `int` на основе рейтинга игрока.

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не выводит ничего на экран. Необходимо реализовать класс `ChessPlayer` с указанным функционалом.

## Пример

**Ввод**

```cpp
#include <iostream>
#include <string>
#include "solution.cpp"  // Ваш класс

int main() {
    ChessPlayer tom("Tom", "Nepomniachtchi", 2489);
    ChessPlayer jonh("Jonh", "Magnus", 2359);

    jonh.statistics();
    tom.statistics();

    bool res1 = tom == 4000;
    bool res2 = jonh == 2359;
    bool res3 = tom == jonh;
    bool res4 = tom > jonh;
    bool res5 = tom < jonh;
    bool res6 = tom != jonh;

    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    std::cout << res3 << std::endl;
    std::cout << res4 << std::endl;
    std::cout << res5 << std::endl;
    std::cout << res6 << std::endl;

    return EXIT_SUCCESS;
}
```

**Вывод**

```
Full name: Jonh Magnus Rating: 2359
Full name: Tom Nepomniachtchi Rating: 2489
0
1
0
1
0
1
```

## Примечания

В тестирующую систему необходимо сдать только определение класса `ChessPlayer`.