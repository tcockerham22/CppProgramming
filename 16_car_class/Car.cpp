#include "Car.hpp"

void Car::setMake(const std::string& new_make) {
    if (!new_make.empty()) {
    make = new_make;
    }
}

void Car::setModel(const std::string& new_model) {
    if (!new_model.empty()) {
    model = new_model;
    }
}

void Car::setYear(int new_year) {
    if (new_year > 1900 && new_year <= 2026) {
    year = new_year;
    }
    else if (new_year > 2026) {
    year = 2026;
    }
    else {
    year = 1900;
    }
}

void Car::setMPG(double new_mpg) {
    mpg = (new_mpg >= 0) ? new_mpg : 0;
}

Car::Car() {
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);
}

Car::Car(const std::string& make, const std::string& model, int year, double mpg){
    setMake(make);
    setModel(model);
    setYear(year);
    setMPG(mpg);
}

void Car::print_info() const{
    std::cout << make << std::endl;
    std::cout << model << std::endl;
    std::cout << year << std::endl;
    std::cout << mpg << std::endl;
}

std::string Car::getMake() const{return make;}
std::string Car::getModel() const {return model;}
int Car::getYear() const {return year;}
double Car::getMPG() const {return mpg;}