#include "Car.hpp"
#include "CarDealer.hpp"

int main() {
// Create Car object
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2024);
    ferrari.setMPG(14.2);
    
    ferrari.print_info();

    Car ferrari_spider("Ferrari", "Spider", 2021, 13.5);
    Car ferrari_super("Ferrari", "Super GT", 2019, 10.5);

    ferrari_spider.print_info();
    ferrari_super.print_info();

    // Create a car dealer
    CarDealer lakeland_ferrari;

    // Add cars
    lakeland_ferrari.addCar(ferrari);
    lakeland_ferrari.addCar(ferrari_spider);
    lakeland_ferrari.addCar(ferrari_super);
    
    // Print inventory
    lakeland_ferrari.showInventory();
    
    return 0;
}