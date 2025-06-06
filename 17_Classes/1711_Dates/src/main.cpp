#include <iostream>
#include <iomanip>
#include <sstream>

class Date {
protected:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    virtual ~Date() {}

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    virtual std::string isoformat() const {
        std::ostringstream oss;
        oss << std::setw(4) << std::setfill('0') << year << "-"
            << std::setw(2) << std::setfill('0') << month << "-"
            << std::setw(2) << std::setfill('0') << day;
        return oss.str();
    }

    friend std::ostream& operator<<(std::ostream& os, const Date& date) {
        os << date.isoformat();
        return os;
    }
};

class DateEurope : public Date {
public:
    DateEurope(int d, int m, int y) : Date(d, m, y) {}
    
    std::string format() const {
        std::ostringstream oss;
        oss << std::setw(2) << std::setfill('0') << day << "/"
            << std::setw(2) << std::setfill('0') << month << "/"
            << std::setw(4) << std::setfill('0') << year;
        return oss.str();
    }
};

class DateUSA : public Date {
public:
    DateUSA(int d, int m, int y) : Date(d, m, y) {}
    
    std::string format() const {
        std::ostringstream oss;
        oss << std::setw(2) << std::setfill('0') << month << "/"
            << std::setw(2) << std::setfill('0') << day << "/"
            << std::setw(4) << std::setfill('0') << year;
        return oss.str();
    }
};