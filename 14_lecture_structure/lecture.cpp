#include <iostream>
#include <string>

//Create a description of Lecture structure
typedef struct {
    std::string title;
    int duration;
}Lecture;

// Create a function which takes a Lecture structure as input

void printLecture(const Lecture& lecture){
    std::cout << "Title:\t\t" << lecture.title << std::endl;
    std::cout << "Duration:\t" << lecture.duration << std::endl;
}

int main(void){
    // Create an object of Lecture structure
    Lecture oop_lecture;

    // Access the properties (attributes, data members) of Lecture object
    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 60 * 50;

    printLecture(oop_lecture);

    return 0;
}
