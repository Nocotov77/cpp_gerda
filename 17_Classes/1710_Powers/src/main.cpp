#include <iostream>

class Square {
public:
    virtual int getValue(int x) {
        return x * x;
    }
    virtual ~Square() {}
};

class Cube : public Square {
public:
    int getValue(int x) override {
        return x * x * x;
    }
};

class Power4 : public Square {
public:
    int getValue(int x) override {
        int square = x * x;
        return square * square;
    }
};