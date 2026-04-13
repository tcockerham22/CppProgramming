#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

template <typename T>
class MyVector{
public:
    MyVector(int capacity = 10); // No arg constructor and/or arg constructor

    // Destructor
    ~MyVector();

    // Copy Constructor
    MyVector(const MyVector<T>& other);

    void print() const;
    void push_back(const T& val);
    T pop_back();

    bool empty() const;

    int getCapacity() const;
    
    T& at(int index) const;

    T thirdMax() const;

private:
    T* elements; // Dynamic array
    int size;      // Current number of elements
    int capacity;  // The max number of elements in the array

    bool full() const;
    void allocateMemory(int memory_size);
};

#include "MyVector.tpp"

#endif