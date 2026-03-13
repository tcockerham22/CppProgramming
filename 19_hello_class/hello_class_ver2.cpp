#include <iostream>
#include <string>

class Hello{
public:
    // No arg constructor
    Hello() : size(0), messages(nullptr){
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // Constructor with arguments
    Hello(int n) : size(n){
        std::cout << "Argument constructor for " << this << std::endl;
        messages = new std::string[size];
        for(int i = 0; i < size; i++){
            messages[i] = (i % 2) ? "Welcome" : "Not welcome";
        } 
    }

    // Copy Constructor
    Hello(const Hello& other){
        std::cout << "Copy constructor for " << this << std::endl;
        size = other.size;
        // Allocate new memory
        messages = new std::string[size];
        for(int i = 0; i < size; i++){
            messages[i] = other.messages[i];
        }
    }
    
    // Destructor
    ~Hello(){
        std::cout << "Destructor for " << this << std::endl;
        if(messages != nullptr){
            delete [] messages;
        }
    }

    void bye() const{
        std::cout << "Bye!\n";
    }

private:
    std::string* messages;
    int size;

};

int main(void){
    // Create Hello object dynamically
    Hello* hi = new Hello();
    
    // Call bye method
    hi->bye();

    // Create an object using argument constructor
    Hello* hi2 = new Hello(12);
    
    // Deallocate the memory
    delete hi;
    delete hi2;

    // for(int i = 0; i < 100; i++){
    //     Hello(9999999);
    // }

    Hello hi3(10);
    Hello hi4 = hi3;
    
    return 0;
}