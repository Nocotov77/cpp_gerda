# Балл строки

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** стандартный ввод или `input.txt`

**Вывод:** стандартный вывод или `output.txt`

Вам дана строка `s`, состоящая только из строчных букв английского алфавита. Балл строки определяется как сумма модулей разностей между ASCII значениями смежных символов.

Верните балл строки `s`.

## Формат ввода

Вводится строка длины не больше 10<sup>6</sup>, состоящая из маленьких букв английского алфавита.

## Формат вывода

Выведите одно число - балл строки по условию задачи.

## Пример 1

**Ввод:**

```
hello
```

**Вывод:**

```
13
```

## Пример 2

**Ввод:**

```
zaz
```

**Вывод:**

```
50
```

## Примечания

Пояснение к первому примеру: ASCII значения символов в строке s: 'h' = 104, 'e' = 101, 'l' = 108, 'l' = 108, 'o' = 111. Таким образом, балл строки будет |104−101| + |101−108| + |108−108| + |108−111| = 3 + 7 + 0 + 3 = 13.