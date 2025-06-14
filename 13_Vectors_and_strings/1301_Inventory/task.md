# Инвентарь

**Ограничение времени:** 1 секунда

**Ограничение памяти:** 64.0 Мб

**Ввод:** `test.cpp`

**Вывод:** стандартный вывод или `output.txt`

Для улучшения логики боевой системы игры разработчикам потребовалось учитывать инвентарь каждого персонажа. Инвентарь включает в себя различные предметы, каждый из которых имеет название и вес.

Создайте структуру `Item` для хранения информации о предмете и обновите структуру `Character`, добавив в нее массив предметов (типа `Item`). Название должно иметь строковый тип, а вес - тип `float`.

## Пример

**Ввод**
```cpp
#include <iostream>
#include <string>
#include <vector>
#include "main.cpp"

// Объявите здесь структуру Point
// Объявите здесь структуру Item
// Объявите здесь структуру Character

int main() {
    Item sword = {"Меч", 3.5};
    Item shield = {"Щит", 5.0};

    Character hero = {"Артур", 100, {10, 20}, {sword, shield}};
    std::cout << "Персонаж: " << hero.name << ", Здоровье: " << hero.health 
              << ", Положение: (" << hero.position.x << ", " << hero.position.y << ")\n";
    std::cout << "Инвентарь:\n";
    for (const Item& item : hero.inventory) {
        std::cout << " - " << item.name << " (Вес: " << item.weight << ")\n";
    }
    return 0;
}
```

**Вывод**
```
Персонаж: Артур, Здоровье: 100, Положение: (10, 20)
Инвентарь:
 - Меч (Вес: 3.5)
 - Щит (Вес: 5)