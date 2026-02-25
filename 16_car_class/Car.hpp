#include <string>
#include <iostream>

/*
TODO
1. Implement get methods
2. Create a constructor with arguments
3. Add mileage property (odometer value)
4. Add fuel capacity property (tank capacity)
5. Add fuel level property (current fuel level)
6. void refuel(double gallons);
7. void drive(double distance);
*/

#ifndef CAR_HPP
#define CAR_HPP

class Car {
public:
    // No-arg constructor
    Car();

    // Constructor qith arguments
    Car(const std::string& make, const std::string& model, int year, double mpg);

    // Get methods
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    // Set methods
    void setMake(const std::string& new_make);
    void setModel(const std::string& new_model);
    void setYear(int new_year);
    void setMPG(double new_mpg);
    // Class methods
    void print_info() const;

    private:
    std::string make;
    std::string model;
    int year;
    double mpg;
};

#endif