class Profile {
private:
    std::string name;
    std::string gender;
    int age;

public:
    Profile(std::string n, int a, std::string g) : name(n), gender(g), age(a) {}

    std::string toString() {
        return "Profile(Name: " + name + ", Age: " + std::to_string(age) + ", Gender: " + gender + ")";
    }

    void print() {
        std::cout << toString() << std::endl;
    }

    void happyBirthday() {
        age++;
        std::cout << "Happy Birthday! " << name << " is " << age << "!" << std::endl;
    }
};