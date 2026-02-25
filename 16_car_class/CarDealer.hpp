#include <vector>
#include "Car.hpp"

#ifndef CARDEALER_HPP
#define CARDEALER_HPP

class CarDealer{
public:
    void addCar(const Car& car); // Add car to the inventory
    void showInventory() const; // Print all cars
private:
    std::vector<Car> inventory;
};

#endif