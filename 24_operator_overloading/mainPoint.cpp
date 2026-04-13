#include "Point.hpp"
#include <iostream>

int main(void) {
    Point p1(3, 4, "my point");

    Point p2(p1);
    Point p3;

    Point p4(1, 1, "p4");

    p3 = p1 = p4;

    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;
    std::cout << p3.toString() << std::endl;
    std::cout << p4.toString() << std::endl;
    
    std::cout << "---" << p1 << std::endl;

    std::cin >> p4;
    std::cout << p4;

    return 0;
}