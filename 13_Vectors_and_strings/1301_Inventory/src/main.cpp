struct Point {
    int x;
    int y;
};

struct Item {
    char* name;
    float weight;
};

struct Character {
    char* name;
    int health;
    Point position;
    std::vector<Item> inventory;
};