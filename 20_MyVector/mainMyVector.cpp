#include "MyVector.hpp"
#include <iostream>

int main(void){
    // Create MyVector object dynamically
    MyVector* mv = new MyVector(15);

    for(int i = 1; i < 30; i++){
        mv->push_back(i * i);
        std::cout << "Capacity: " << mv->getCapacity() << std::endl;
        mv->print();
    }

    mv->at(0) = 111;
    std::cout << "The first element is " << mv->at(0) << std::endl;

    while(!mv->empty()){
        std::cout<< mv->pop_back() << std::endl;
        std::cout << "Capacity: " << mv->getCapacity() << std::endl;
        mv->print();
    }

    delete mv;
    return 0;
}