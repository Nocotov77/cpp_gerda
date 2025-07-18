# Обратная польская нотация

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64Mb

**Ввод:** стандартный ввод или `input.txt`

**Вывод:** стандартный вывод или `output.txt`

Обратной польской нотацией называется принцип записи арифметического выражения, указывающий на порядок выполнения арифметических операций.

По правилам обратной польской нотации сначала записываются два числа, над которыми будет выполнена операция, а затем сама операция.

Пример: `1 2 + 3 4 + *`

Сначала выполняется сложение чисел 1 и 2, затем сложение чисел 3 и 4, а потом берется произведение полученных результатов, то есть данное выражение можно записать как `(1 + 2) * (3 + 4)`.

## Формат ввода

Строка с выражением в обратной польской нотации (все числа целые положительные).

## Формат вывода

Результат выражения.

## Пример 1

**Ввод**
```
1 2 + 3 4 + *
```

**Вывод**
```
21
```

## Пример 2

**Ввод**
```
1 3 * 20 4 / 7 3 - * +
```

**Вывод**
```
23
```

## Примечания

В данной задаче выражение может содержать в себе только четыре операции: +, -, * и /.