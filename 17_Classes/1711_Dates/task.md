# Даты

**Ограничение времени:** 10 секунд

**Ограничение памяти:** 256.0 Мб

**Ввод:** input.cpp

**Вывод:** стандартный вывод или output.txt

Ваша компания занимается разработкой программного обеспечения для учета и анализа временных данных различных форматов. Для удобства работы с данными датами требуется создать классы, которые могут предоставлять даты в форматах ISO, Европы и США.

Для оптимальной работы с датами в тестирующей системе компании необходимо разработать классы `Date`, `DateEurope` и `DateUSA` для представления дат в соответствующих форматах.

Требуется написать класс `Date`, который содержит:

*   Приватные поля `day`, `month`, `year` типа `int` для хранения дня, месяца и года соответственно.
*   Конструктор, который принимает значения дня, месяца и года и инициализирует соответствующие поля класса.
*   Методы `getDay`, `getMonth`, `getYear` для получения значения поля `day`, `month` и `year` соответственно.
*   Метод `isoformat`, возвращающий строку в формате: `<year>-<month>-<day>` (например, 2024-09-29) для представления даты в формате ISO.
*   Перегрузку оператора `<<` для вывода экземпляра класса в стандартный поток вывода в виде строки в формате ISO.

Классы `DateEurope` и `DateUSA` должны наследоваться от класса `Date` и реализовывать метод `format`, который возвращает строку в формате дат для Европы: `<day>/<month>/<year>` и США: `<month>/<day>/<year>` соответственно.

Так же для всех чисел предусмотренна фиксированная ширина: для года четыре символа, для дня и месяца два. Недостающее символы заполняются незначащими нулями.

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не выводит ничего на экран. Необходимо реализовать классы `Date`, `DateEurope` и `DateUSA` с указанным функционалом.

## Пример 1

**Ввод**

```cpp
#include <iomanip> // format
#include <iostream> // iostream
#include <ostream>  // ostream
#include <string>   // string
#include "solution.cpp"  // Ваши классы

using namespace std;

int main() {
    Date* base1 = new DateUSA(1, 1, 2000);
    Date* base2 = new DateEurope(1, 1, 1970);

    DateUSA* usa = dynamic_cast<DateUSA*>(base1);
    DateEurope* europe = dynamic_cast<DateEurope*>(base2);

    if (usa && europe) {
        std::cout << "DateUSA и DataEurope наследованы от Date." << std::endl;
    }

    DateUSA d1(24, 10, 1929);
    DateEurope d2(20, 8, 2077);

    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;

    std::cout << d1.isoformat() << std::endl;
    std::cout << d2.isoformat() << std::endl;

    std::cout << d1.format() << std::endl;
    std::cout << d2.format() << std::endl;

    std::cout << "Day d1: " << d1.getDay() << "\tDay d2: " << d2.getDay() << std::endl;
    std::cout << "Month d1: " << d1.getMonth() << "\tMonth d2: " << d2.getMonth() << std::endl;
    std::cout << "Year d1: " << d1.getYear() << "\tYear d2: " << d2.getYear() << std::endl;

    delete base1;
    delete base2;

    return EXIT_SUCCESS;
}
```

**Вывод**

```
DateUSA и DataEurope наследованы от Date.
1929-10-24
2077-08-20
1929-10-24
2077-08-20
10/24/1929
20/08/2077
Day d1: 24	Day d2: 20
Month d1: 10	Month d2: 8
Year d1: 1929	Year d2: 2077
```

## Пример 2

**Ввод**

```cpp
#include <iomanip> // format
#include <iostream> // iostream
#include <ostream>  // ostream
#include <string>   // string

#include "solution.cpp"  // Ваши классы

int main() {
    Date date1(4, 4, 2005);
    Date date2(4, 4, 2005);
    Date date3(14, 7, 964);

    DateUSA udate(9, 2, 245);
    DateEurope edate(12, 12, 2011);

    std::cout << date1 << std::endl;
    std::cout << date2 << std::endl;
    std::cout << date3 << std::endl;

    std::cout << udate.format() << std::endl;
    std::cout << edate.format() << std::endl;

    std::string iso_result1 = udate.isoformat();
    std::string iso_result2 = edate.isoformat();

    std::cout << "iso_result1 = " << iso_result1 << std::endl;
    std::cout << "iso_result2 = " << iso_result2 << std::endl;

    return EXIT_SUCCESS;
}
```

**Вывод**

```
2005-04-04
2005-04-04
0964-07-14
02/09/0245
12/12/2011
iso_result1 = 0245-02-09
iso_result2 = 2011-12-12
```

## Примечания

В тестирующую систему необходимо сдать только определение классов `Date`, `DateEurope` и `DateUSA`.

Классы `DateEurope` и `DateUSA` должны унаследовать методы и функционал основного класса `Date`.

Для форматирования дат используются основные стандарты для Европы и США.

При реализации методов `isoformat`, `format` следует следовать указанному формату даты в каждом случае. При этом не забывать про незначающии нули, например, 456 год должен в обоих случая отображаться как `0456`, а 4 число месяца как `04`.

Класс `Date` обязан иметь виртуальный дескриптор:

```cpp
class Date{
public:
  ...
  virtual ~Date() {}
};
```

Нужен он для того, чтобы соблюдались нормы полиморфизма и наследование корректно работало в тестирующей системе. Материал, для отвечающий на вопрос "зачем?". Подробнее об деструкторах.