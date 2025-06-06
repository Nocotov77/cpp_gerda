# Цензура

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** стандартный ввод или `input.txt`

**Вывод:** стандартный вывод или `output.txt`

Вам нужно создать программу, которая будет фильтровать текст, заменяя определенные последовательности символов (запрещенные слова) другими заданными последовательностями символов (заглушкой).

Вам вводятся три строки: первая с именем файла исходного текста, вторая с именем файла, содержащего "запрещенные слова", и третья - с самим словом-заглушкой, на которое нужно заменить все "запрещенные слова" в исходном тексте.

"Запрещенные слова" представлены последовательностями символов, указанными на одной строке в файле и разделенными пробелами. Они должны быть заменены на "заглушку" в исходном тексте.

Результат работы программы должен выводить содержимое исходного файла, при этом все "запрещенные слова" должны быть заменены на "заглушку".

## Формат ввода

На вход программе подается 3 строки: с именем файла с исходным текстом, с именем файла с "запрещенными словами" и слово "заглушка".

## Формат вывода

Программа должна вывести текст в соответствии с условием задачи.

## Пример

**Ввод**
```
text01.txt
bad_words01.txt
***
```

**Вывод**
```
***: An Overview *** a Powerful Programming Language

*** is a versatile programming *** that has stood the test *** time since its creation in the early 1980s by Bjarne Stroustrup. Known for its efficiency *** performance, C++ serves as a premier choice for system/software development, game programming, and applications requiring real-time processing.

One *** the distinctive features of *** is its support for both procedural *** object-oriented programming paradigms. This dual capability allows developers to choose the approach that best suits their project needs. Object-oriented features, such as classes and inheritance, promote code reusability and modular design, fostering cleaner and more maintainable codebases.

*** also grants developers fine control over system resources, enabling low-level memory manipulation through pointers *** direct interaction with hardware. This efficiency makes it a popular choice for applications in high-performance environments, such as operating systems and embedded systems.

Moreover, *** continues to evolve with the introduction *** new st***ards, like C++11, C++14, and the most recent C++20, which have brought modern features such as auto keyword, range-based loops, and enhanced type inference. These advancements ensure that C++ remains relevant and powerful in the ever-changing landscape of software development.

In conclusion, *** is a foundational *** that combines performance, flexibility, *** a rich feature set, making it an essential tool for developers across various domains.
```

## Примечания

*   Считайте, что исполняемая программа и указанные файлы находятся в одной папке.
*   Гарантируется, что "запрещенные слова" хранятся на одной строке в файле, разделенных символом пробела.
*   Регистр "запрещенных слов" важен. Например: если в исходном тексте встретилась последовательность `python` и она же присутствует в списке "запрещённых слов", то она заменится на "заглушку". При тех же условиях, если бы встретилась последовательность `Python`, то оно бы осталась в исходном тексте без изменений.
*   [Ссылка на исходный текст первого теста](https://pastebin.com/raw/9j59C90g).
*   [Ссылка на "запрещённые слова" первого теста](https://pastebin.com/raw/a84Gj5mb).