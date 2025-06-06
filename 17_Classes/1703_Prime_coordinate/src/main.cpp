class Point {
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    std::string toString() const {
        return "(" + std::to_string(x) + "; " + std::to_string(y) + ")";
    }

    void print() const {
        std::cout << "Point" << toString() << std::endl;
    }

    double distance(const Point& other) const {
        int dx = other.x - x;
        int dy = other.y - y;
        return std::sqrt(dx * dx + dy * dy);
    }

    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << p.toString();
        return os;
    }
};