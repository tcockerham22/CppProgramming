#ifndef POINT3D_HPP
#define POINT3D_HPP
#include "Point.hpp"
#include <string>

class Point3D : public Point{
public:
    Point3D(int x = 0, int y = 0, int z, const char* new_tag = nullptr);
    friend std::ostream& operator<<(std::ostream& out, const Point3D& p);
protected:
    int z;
};

#endif