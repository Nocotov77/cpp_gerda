# 1/8 финала

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64Mb

**Ввод:** стандартный ввод или `input.txt`

**Вывод:** стандартный вывод или `output.txt`

В 1/8 финала конкурса на самое красивое число участвуют максимум 10 000 чисел. Жюри решило, что в четвертьфинал пройдут все положительные числа. Кроме того, чтобы отбор был справедливым, в следующий этап также допускаются последние три неположительных числа.

Выведите общее количество участников, которые прошли дальше, а на следующей строке напечатайте последние три неположительных числа, даже если их больше трех.

## Формат ввода

Сначала задано число N — количество участников конкурса (1 ≤ N ≤ 10000). Далее через пробел записаны N чисел-участников. Все участники – целые числа.

## Формат вывода

На первой строке - количество прошедших участников. На второй последовательность трех и менее не положительных.

## Пример

**Ввод**
```
5
1 2 3 -1 -4
```

**Вывод**
```
3
-4 -1
```

## Примечания

Если количество последних участников меньше 3, то вывести сколько есть. Их не стоит включать в количество прошедших участников.