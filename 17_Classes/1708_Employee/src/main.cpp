class Person {
private:
    std::string name;
public:
    Person(const std::string& n) : name(n) {}
    std::string getName() const { return name; }
    virtual bool isEmployee() const { return false; }
};

class Employee : public Person {
public:
    Employee(const std::string& n) : Person(n) {}
    bool isEmployee() const override { return true; }
};