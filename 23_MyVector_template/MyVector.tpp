#include "MyVector.hpp"
#include <iostream>

template<typename T>
MyVector<T>::MyVector(int capacity){
    size = 0;
    this->capacity = capacity;
    elements = new T[capacity];
}

template<typename T>
MyVector<T>::~MyVector(){
    delete [] elements;
}

// MyVector::MyVector(const MyVector& other){
//     size = other.size;
//     capacity = other.capacity;
//     elements = new int[capacity];
//     for(int i = 0; i < size; i++){
//         elements[i] = other.elements[i];
//     }
// }
template<typename T>
void MyVector<T>::print() const{
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        std::cout << elements[i] << ' ';
    }
    std::cout << "] ";
}

template<typename T>
void MyVector<T>::push_back(const T& val){
    if(full()){
        allocateMemory(capacity * 2);
    }
    elements[size] = val;
    size++;
}

// bool MyVector::empty() const{
//     return (size == 0);
// }

template<typename T>
bool MyVector<T>::full() const{
    return (size == capacity);
}

// int MyVector::getCapacity() const{
//     return capacity;
// }

template<typename T>
void MyVector<T>::allocateMemory(int memory_size){
    capacity = memory_size;
    // Save the old address of an array
    T* old_array = elements;
    // Allocate new memory
    elements = new T[capacity];
    // copy the values
    for(int i = 0; i < size; i++){
        elements[i] = old_array[i];
    }
    delete [] old_array;
}

// int MyVector::pop_back(){
//     if(!empty()){
//         if(size < capacity / 2){
//             allocateMemory(capacity / 2);
//         }
//         return elements[--size];
//     }
//     else{
//         throw "Pop_back: empty vector\n";
//     }
// }

// int& MyVector::at(int index) const{
//     if(index < 0 || index >= size){
//         throw "At: outside of boundaries\n";
//     }
//     return elements[index];
// }

