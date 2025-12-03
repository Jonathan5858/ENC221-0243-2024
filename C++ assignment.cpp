#include <iostream>
#include <string>

class Roommate {
private:
    std::string name;
    int age;
    bool cleansDishes;
    std::string favoriteHobby;

public:
    Roommate(std::string name, int age, bool cleansDishes, std::string hobby)
        : name(name), age(age), cleansDishes(cleansDishes), favoriteHobby(hobby) {}

    void introduce() const {
        std::cout << "My roommate's name is " << name 
                  << ".He is " << age 
                  << " years old and his favorite hobby is " << favoriteHobby << ".\n";
    }

    void describeHabits() const {
        if (cleansDishes) {
            std::cout << name << " usually cleans the dishes after meals.\n";
        } else {
            std::cout << name << " avoids doing dishes whenever possible.\n";
        }
    }
};

int main() {
    Roommate r("Ferguson", 20, false, "playing football");
    r.introduce();
    r.describeHabits();

    return 0;
}