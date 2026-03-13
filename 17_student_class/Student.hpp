#include <iostream>
#include <string>

#ifndef STUDENT_HPP
#define STUDENT_HPP

class Student{
public:
    Student(const std::string& n, double g);

    // Get function
    static int getTotalStudents();

    void print() const;
    
    void canGraduate(double gpa, double goodGPA);

    // set method
    static void setGraduationRequirement(double newGPA); // newGPA [2.0; 4.0]

private:
    std::string name;
    double gpa;
    static int total_students;
    static int next_id; // Generate unique student ID
    std::string id;
    static double goodGPA; // Graduation requirement
};



#endif