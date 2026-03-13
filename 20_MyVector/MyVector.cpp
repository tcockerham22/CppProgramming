#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector(int capacity){
    size = 0;
    this->capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector(){
    delete [] elements;
}

MyVector::MyVector(const MyVector& other){
    size = other.size;
    capacity = other.capacity;
    elements = new int[capacity];
    for(int i = 0; i < size; i++){
        elements[i] = other.elements[i];
    }
}

void MyVector::print() const{
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        std::cout << elements[i] << ' ';
    }
    std::cout << "] ";
}

void MyVector::push_back(int val){
    if(full()){
        allocateMemory(capacity * 2);
    }


    elements[size] = val;
    size++;
}

bool MyVector::empty() const{
    return (size == 0);
}

bool MyVector::full() const{
    return (size == capacity);
}

int MyVector::getCapacity() const{
    return capacity;
}

void MyVector::allocateMemory(int memory_size){
    capacity = memory_size;
    // Save the old address of an array
    int* old_array = elements;
    // Allocate new memory
    elements = new int[capacity];

    // copy the values
    for(int i = 0; i < size; i++){
        elements[i] = old_array[i];
    }
    
    delete [] old_array;
}

int MyVector::pop_back(){
    if(!empty()){
        if(size < capacity / 2){
            allocateMemory(capacity / 2);
        }
        return elements[--size];
    }
    else{
        throw "Pop_back: empty vector\n";
    }
}

int& MyVector::at(int index) const{
    if(index < 0 || index >= size){
        throw "At: outside of boundaries\n";
    }
    return elements[index];
}
