#include <iostream>

class Human{
public:
    Human(){
        std::cout << "Human constructor " << this << std::endl;
    }
    ~Human(){
        std::cout << "Human destructor " << this << std::endl;
    }
    Human(const std::string& n, int a) : name(n), age(a){}

    void printInfo() const{
        std::cout << "My name is " << name << std::endl;
        std::cout << "I am " << age << " years old" << std::endl;
    }

    std::string name;
    int age;
};

class Student : public Human{
public:
    Student(){
        std::cout << "Student constructor " << this << std::endl;
    }
    ~Student(){
        std::cout << "Student destructor " << this << std::endl;
    }
    Student(const std::string &n, int a, double g) : Human(n, a) {
        gpa = g;
    }

    // Redefine the base class method
    void printInfo() const{
        Human::printInfo(); // Call the method of the base class
        std::cout << "I am a student and my GPA is " << gpa << std::endl;
    }


    double gpa;
};

int main(void){
    Human person;
    person.name = "John";
    person.age = 25;

    person.printInfo();

    Student stu("Stu", 20, 3.4);
    stu.printInfo();

    return 0;
}