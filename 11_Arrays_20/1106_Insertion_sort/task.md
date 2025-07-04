# Сортировка вставками

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** стандартный ввод

**Вывод:** стандартный вывод

Вам необходимо реализовать сортировку простыми вставками по неубыванию и посчитать количество элементов, которые при добавлении к сортированной части уже находились на своём месте, то есть которые не пришлось двигать.

## Формат ввода

В первой строке - одно целое число `n` (0 ≤ n ≤ 10<sup>4</sup>) – количество чисел, которые надо отсортировать.

Во второй строке записано `n` целых положительных чисел, не превышающих 10<sup>9</sup>.

## Формат вывода

Сначала выведите отсортированный массив через пробел, а затем в новой строке одно число – количество элементов, которые уже находились на своём месте при сортировке.

## Пример 1

**Ввод**
```
5
1 2 5 3 4
```

**Вывод**
```
1 2 3 4 5
2
```

## Пример 2

**Ввод**
```
5
1 2 3 4 5
```

**Вывод**
```
1 2 3 4 5
4
```

## Примечания

Пояснение к примеру 1:

Изначально отсортированная часть состоит из одного элемента.

Шаг 1. Число 2 находится на своём месте, добавляем 1 к ответу.
```
1 2 5 3 4
```

Шаг 2. Число 5 находится на своём месте, добавляем 1 к ответу.
```
1 2 5 3 4
```

Шаг 3. Число 3 не находится на своём месте, сдвигаем его.
```
1 2 3 5 4
```

Шаг 4. Число 4 не находится на своём месте, сдвигаем его.
```
1 2 3 4 5
```
Массив отсортирован, ответ 2.

Пояснение к примеру 2:

Изначально отсортированная часть состоит из одного элемента, остальные четыре элемента уже находятся на своём месте, поэтому ответ 4.

**Не разрешается использовать стандартные функции reverse, sort, lower_bound, upper_bound, binary_search и т. п.**