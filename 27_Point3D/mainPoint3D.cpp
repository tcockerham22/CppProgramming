#include "Point3D.hpp"
#include <iostream>

int main(void){
    Point3D the_best_point_ever(1,2,3, "THEE BEST");
    std::cout << the_best_point_ever;
    return 0;
}