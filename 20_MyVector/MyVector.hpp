#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector{
public:
    MyVector(int capacity = 10); // No arg constructor and/or arg constructor

    // Destructor
    ~MyVector();

    // Copy Constructor
    MyVector(const MyVector& other);

    void print() const;
    void push_back(int val);
    int pop_back();

    bool empty() const;

    int getCapacity() const;
    
    int& at(int index) const;

private:
    int* elements; // Dynamic array
    int size;      // Current number of elements
    int capacity;  // The max number of elements in the array

    bool full() const;
    void allocateMemory(int memory_size);
};

#endif