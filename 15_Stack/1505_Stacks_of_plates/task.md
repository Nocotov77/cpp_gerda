# Стопки тарелок

**Ограничение времени:** 3 секунды

**Ограничение памяти:** 64Mb

**Ввод:** стандартный ввод или `input.txt`

**Вывод:** стандартный вывод или `output.txt`

На кухне ресторана хранится *n* видов различных тарелок. На столе, где они расставлены хватает места, чтобы разместить ровно *n* стопок тарелок. В дневной спешке в каждой из стопок могут оказаться тарелки любого вида (стопка даже может быть изначально пустой). В конце рабочего дня, когда кухню приводят в порядок, один из официантов решил расставить все тарелки первого вида в первую стопку, второго – во вторую, и так далее. При этом он может брать только верхнюю тарелку из любой стопки и поставить ее сверху в любую другую стопку. Программа должна вывести последовательность действий официанта, либо сообщение о том, что такими манипуляциями не получится расставить тарелки и задача не имеет решения.

## Формат ввода

Программа получает на вход целое неотрицательное число *n*. Далее вводятся *n* строк с описанием стопок тарелок: сначала записано число *ki* – количество тарелок в стопке, а затем *ki* чисел – виды тарелок в данной стопке, снизу вверх.

## Формат вывода

Программа должна вывести описание действий официанта: для каждого действия напечатать два числа – из какой стопки брать тарелку и в какую стопку класть. Минимизировать количество действий официанта не требуется. Если задача не имеет решения, необходимо вывести одно число 0. Если тарелки изначально правильно размещены по стопкам, то ничего выводить не нужно.

## Пример

**Ввод**
```
3
4 1 2 3 2
0
0
```

**Вывод**
```
1 2
1 3
1 2