# Доступ

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 96.0 Мб

**Ввод:** input.cpp

**Вывод:** стандартный вывод или output.txt

Для управления доступом к определенным ресурсам необходимо создать два класса: `User` и `Access`.

## Класс User

*   Приватные константные поля `name` и `role` типа `string`.
*   Конструктор, принимающий параметры `p_name` и `p_role` и инициализирующий поля класса.
*   Методы `getName` и `getRole`, возвращающие соответственно имя и роль пользователя.

## Класс Access

*   Приватное поле `__access_list` типа вектор с хранением строк.
*   Метод `addRole`, добавляющий новую роль в список доступов.
*   Метод `printRoles`, выводящий список ролей доступа в формате:

    `Access("<role1>", "<role2>", ...)`

    и

    `Access()`

    если список пуст.

*   Метод `getAccess`, принимающий объект пользователя `User` и второй аргумент флаг: `false` - не выводит информацию и `true` - выводить. Метод проверяет доступ по роли (возвращает `true` или `false`), выводя:

    `User {name}: success`

    (где `name` имя пользователя) если у пользователя есть доступ, и:

    `AccessDenied`

    иначе. Вывод происходит относительно второго булева параметра.

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не выводит ничего на экран. Необходимо реализовать классы `User` и `Access` с соответсвующим функционалом.

## Пример 1

**Ввод**

```cpp
#include <iostream>
#include <string>
#include <vector>
#include "solution.cpp"  // Ваши классы

using namespace std;

int main() {
    Access access;

    access.printRoles();
    access.addRole("admin");
    access.addRole("user");
    access.printRoles();

    User user1("batya234", "admin");
    User user2("Son2009", "user");
    User user3("Sanya", "employee");

    access.getAccess(user1);
    if (access.getAccess(user2, false)) {
        std::cout << user2.getName() << " with " << user2.getRole() << " Done!" << std::endl;
    }
    access.getAccess(user3);

    return EXIT_SUCCESS;
}
```

**Вывод**

```
Access()
Access("admin", "user")
User batya234: success
Son2009 with user Done!
AccessDenied
```

## Пример 2

**Ввод**

```cpp
#include <iostream>
#include <string>
#include <vector>

#include "solution.cpp"  // Ваши классы

using namespace std;

int main() {
    Access access;

    access.printRoles();
    access.addRole("developer");
    access.printRoles();
    access.addRole("lead");
    access.addRole("plumber");
    access.printRoles();

    User user1("Ivan", "plumber");
    User user2("Andrey", "user");
    User user3("Sanya", "developer");
    User user4("Mitya", "user");

    std::cout << "user1: " << user1.getName() << " - " << user1.getRole() << std::endl;
    std::cout << "user2: " << user2.getName() << " - " << user2.getRole() << std::endl;
    std::cout << "user3: " << user3.getName() << " - " << user3.getRole() << std::endl;
    std::cout << "user4: " << user4.getName() << " - " << user4.getRole() << std::endl;

    std::cout << access.getAccess(user1, false) << std::endl;
    std::cout << access.getAccess(user2, false) << std::endl;
    std::cout << access.getAccess(user3, false) << std::endl;
    std::cout << access.getAccess(user4, false) << std::endl;

    access.getAccess(user1);
    access.getAccess(user2);
    access.getAccess(user3);
    access.getAccess(user4);

    return EXIT_SUCCESS;
}
```

**Вывод**

```
Access()
Access("developer")
Access("developer", "lead", "plumber")
user1: Ivan - plumber
user2: Andrey - user
user3: Sanya - developer
user4: Mitya - user
1
0
1
0
User Ivan: success
AccessDenied
User Sanya: success
AccessDenied
```

## Примечания

В тестирующую систему необходимо сдать только определение классов `User` и `Access`.