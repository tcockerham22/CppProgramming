#include "Car.hpp"
int main() {
// Create Car object
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2024);
    ferrari.setMPG(14.2);
    ferrari.print_info();
return 0;
}