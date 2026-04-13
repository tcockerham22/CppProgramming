#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char* new_tag = nullptr);

    // The destructor
    ~Point();

    // Copy constructor
    Point(const Point& other);


    // Relational operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // Operator []
    int& operator[](int index);

    // Arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const; // TODO
    Point operator-(const Point& other) const; // TODO

    // Arithmetic assignment operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other); // TODO
    Point& operator-=(const Point& other); // TODO

    // Preincrement
    Point operator++();
    
    // Postincrement
    Point operator++(int);

    // Assignment operator
    Point& operator=(const Point& other);

    friend std::istream& operator>>(std::istream& in, Point& p);
    std::string toString() const;
private:
    int x, y;
    char* tag;
};

std::ostream& operator<<(std::ostream& out, const Point& p);

#endif