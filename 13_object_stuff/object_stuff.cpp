#include <iostream>
#include <string>
#include <vector>

void printLecture(const std::string& title, int duration){
    ///
}

void printCourse(const std::vector<std::string>& titles, const std::vector<int>& durations){
    ///
}

struct Lecture {
    std::string title;
    int duration;
};

void print(const struct Lecture& lecture){
    std::cout << lecture.duration << std::endl;
    std::cout << lecture.title << std::endl;
}