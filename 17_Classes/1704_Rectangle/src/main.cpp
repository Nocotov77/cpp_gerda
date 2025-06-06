class Rectangle {
private:
    Point topLeft;
    Point bottomRight;

public:
    Rectangle(Point top_left, Point bottom_right) 
        : topLeft(top_left), bottomRight(bottom_right) {}

    int area() {
        int width = bottomRight.getX() - topLeft.getX();
        int height = topLeft.getY() - bottomRight.getY();
        return abs(width * height);
    }

    int perimeter() {
        int width = bottomRight.getX() - topLeft.getX();
        int height = topLeft.getY() - bottomRight.getY();
        return 2 * (abs(width) + abs(height));
    }

    void print() {
        std::cout << "Rectangle with top left corner at " << topLeft.toString()
                  << " and bottom right corner at " << bottomRight.toString() << std::endl;
    }
};