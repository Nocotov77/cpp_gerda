# Файловый объект

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 96.0 Мб

**Ввод:** `input.cpp`

**Вывод:** стандартный вывод или `output.txt`

Настало время упрощать C++: для работы с файлами создадим класс, имитирующий часть функционала файлового объекта из Python. Реализуем открытие файла с различными режимами ("r", "w", "rw", "a"), а также методы `readLines()`, читающий все строки из файла, и `writeLines()`, записывающий строки в файл.

Для этого нужно реализовать класс `File`, который содержит:

*   Приватные поля `file` типа `fstream`, `mode` типа `string` и `pathToFileName` типа `string`.
*   Конструктор, принимающий два аргумента: путь к файлу и режим открытия. Открывает файл с соответствующим режимом. Если режим некорректен, выводит сообщение:
    ```
    Bad mode for file: {initmode}
    ```
    где `initmode` - переданный режим.
*   Методы `getPath` и `getMode`, возвращающие `pathToFileName` и `mode` соответственно.
*   Метод `isOpen`, который возвращает `true` или `false` в зависимости от того, открыт ли файл.
*   Метод `close`, который закрывает файл.
*   Метод `readLines`, который читает все строки из файла и возвращает вектор со всеми строками.
*   Метод `writeLines`, принимающий вектор строк и флаг (по умолчанию `false`) добавления перевода строки при записи.

## Формат ввода

На вход программе ничего не поступает.

## Формат вывода

Программа не выводит ничего на экран. Необходимо реализовать класс `File` с указанным функционалом.

## Пример 1

**Ввод**
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    File file("numbers.txt");

    if (file.isOpen()) {
        for (auto line : file.readLines()) {
            std::cout << line << std::endl;
        }
        file.close();
    }

    File file2("true.txt", "w");

    if (file2.isOpen()) {
        std::vector lines = {
            "This is really an illusion.",
            "The universe is a hologram.",
            "Buy gold.",
            "Bye!"
        };
        file2.writeLines(lines, true);
        file2.close();
    }

    std::cout << "Mode 'file': " << file.getMode() << std::endl;
    std::cout << "Path 'file2': " << file2.getPath() << std::endl;

    File check("true.txt");

    if (check.isOpen()) {
        for (auto line : check.readLines()) {
            std::cout << line << std::endl;
        }
        check.close();
    }

    return EXIT_SUCCESS;
}
```

**Вывод**
```
123
321
10943
34901
564556
655465
Mode 'file': r
Path 'file2': true.txt
This is really an illusion.
The universe is a hologram.
Buy gold.
Bye!
```

## Пример 2

**Ввод**
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "solution.cpp"  // Ваш класс

using namespace std;

int main() {
    File file1("textures", "binary");
    File file2("poems.txt", "read");
    return EXIT_SUCCESS;
}
```

**Вывод**
```
Bad mode for file: binary
Bad mode for file: read
```

## Примечания

В тестирующую систему необходимо сдать только определение класса `File`.

Файл `numbers.txt` из тестов можно скачать по [ссылке](numbers.txt).