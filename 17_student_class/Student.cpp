#include <iostream>
#include <string>
#include "Student.hpp"

// Initialized static data member (required)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.5;

Student::Student(const std::string& n, double g) : name(n), gpa(g){
    total_students++;
    id = "U0000" + std::to_string(next_id);
    next_id += 5;
}

int Student::getTotalStudents(){
    return total_students;
}

static void setGraduationRequirement(double newGPA){ // newGPA [2.0; 4.0]
    if (newGPA >= 2.0 && newGPA <= 4.0){
        goodGPA = newGPA;
    }
}

bool canGraduate(double gpa, double goodGPA){
    if (gpa >= goodGPA){
       return true; 
    }
    else{
        return false;
    }
}

void Student::print() const{
    std::cout << "\n";
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Can graduate: " << (canGraduate() ? "YES" : "NO") << std::endl;
    std::cout << "\n";
    
}