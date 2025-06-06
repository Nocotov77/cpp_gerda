# Профайл

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** input.cpp

**Вывод:** стандартный вывод или output.txt

В далеком королевстве Кодерия все жители были обладателями уникальных электронных книг. В них они могли сохранять важные моменты и создавать профили для каждого жителя, как в телефонной книге. Заварушка в компании Кодериум началась, когда юный разработчик по имени Никита решил создать свой первый профиль.

Помогите ему воплотить свою историю, реализовав класс `Profile`, который содержит:

*   Приватные поля `name`, `gender`, `age` с типами `string`, `string` и `int` соответственно.
*   Метод `toString`, который возвращает строковое представление класса в формате:

    `Profile(Name: {name}, Age: {age}, Gender: {gender})`

    где `name` - имя, `age` - возраст, `gender` - гендер.

*   Метод `print`, который ничего не возвращает, но выводит строковое представление класса на экран.
*   Метод `happyBirthday`, который ничего не возвращает, но увеличивает возраст на 1 и выводит строку на экран:

    `Happy Birthday! {name} is {age}!`

    где `name` - имя и `age` - новый возраст профиля.

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не должна ничего выводить. Вам требуется только реализовать класс `Profile` в соответствии с условием.

## Пример 1

**Ввод**
```cpp
#include <iostream>
#include <string>
#include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    Profile person1("Tom", 22, "Male");

    person1.print();
    std::cout << person1.toString() << std::endl;

    person1.happyBirthday();
    person1.print();

    if (person1.toString() == "Profile(Name: Tom, Age: 23, Gender: Male)") {
        return EXIT_SUCCESS;
    } else {
        return EXIT_FAILURE;
    }
}
```

**Вывод**
```
Profile(Name: Tom, Age: 22, Gender: Male)
Profile(Name: Tom, Age: 22, Gender: Male)
Happy Birthday! Tom is 23!
Profile(Name: Tom, Age: 23, Gender: Male)
```

## Пример 2

**Ввод**
```cpp
#include <iostream>
#include <string>
#include "solution.cpp"  // Ваш класс

int main() {
    Profile person1("Mia", 20, "Female");
    Profile person2("Jonh", 45, "Male");

    person1.happyBirthday();
    person2.happyBirthday();

    person1.print();
    person2.print();

    std::cout << person1.toString() << std::endl;
    std::cout << person2.toString() << std::endl;

    person1.happyBirthday();
    person2.happyBirthday();

    person1.print();
    person2.print();

    return EXIT_SUCCESS;
}
```

**Вывод**
```
Happy Birthday! Mia is 21!
Happy Birthday! Jonh is 46!
Profile(Name: Mia, Age: 21, Gender: Female)
Profile(Name: Jonh, Age: 46, Gender: Male)
Profile(Name: Mia, Age: 21, Gender: Female)
Profile(Name: Jonh, Age: 46, Gender: Male)
Happy Birthday! Mia is 22!
Happy Birthday! Jonh is 47!
Profile(Name: Mia, Age: 22, Gender: Female)
Profile(Name: Jonh, Age: 47, Gender: Male)
```

## Примечания

В тестирующую систему необходимо сдать только определение класса `Profile`.