#include "Point3D.hpp"
#include <iostream>

Point3D::Point3D(int x, int y, int z, const char* new_tag) : Point(x, y, new_tag){
    this->z = z;
}

std::ostream& operator<<(std::ostream& out, const Point3D& p){
    out << std::string(p.tag) << ": (" << p.x << ", " << p.y << ", " << p.z << ")";
    return out;
}