# Работник

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 96.0 Мб

**Ввод:** input.cpp

**Вывод:** стандартный вывод или output.txt

Вы занимаетесь разработкой системы учета сотрудников для компании. Вам необходимо создать два класса `Person` и `Employee`, где класс `Employee` наследуется от класса `Person` и должен переопределить метод для определения статуса сотрудника.

Разработайте класс `Person` со следующей функциональностью:

*   Конструктор должен принимать имя сотрудника и сохранять его в приватное поле `name` типа `string`.
*   Метод `getName` должен возвращать имя сотрудника.
*   Метод `isEmployee` должен возвращать значение `false` для обозначения статуса сотрудника.

Создайте подкласс `Employee`, который наследуется от класса `Person`. Для класса `Employee` требуется:

*   Переопределить метод `isEmployee`, чтобы он возвращал значение `true`, указывая на статус сотрудника.

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не выводит ничего на экран. Необходимо реализовать классы `Person` и `Employee` с соответсвующим функционалом.

## Пример

**Ввод**

```
#include <iostream>
#include <string>
#include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    Person emp1("gena bukin");
    std::cout << "Name: " << emp1.getName() << ", Employee: " << std::boolalpha << emp1.isEmployee() << std::endl;

    Employee emp2("vasya");
    std::cout << "Name: " << emp2.getName() << ", Employee: " << std::boolalpha << emp2.isEmployee() << std::endl;

    std::cout << std::boolalpha << emp1.isEmployee() << " " << emp2.isEmployee() << std::endl;

    return EXIT_SUCCESS;
}
```

**Вывод**

```
Name: gena bukin, Employee: false
Name: vasya, Employee: true
false true
```

## Примечания

В тестирующую систему необходимо сдать только определение классов `Person` и `Employee`.