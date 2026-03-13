#include <iostream>

class Hello{
public:
    // No arg constructor
    Hello(){
        std::cout << "No arg constructor for " << this << std::endl;
    }

    void bye() const{
        std::cout << "Bye!\n";
    }

private:

};

int main(void){
    // Create Hello object dynamically
    Hello* hi = new Hello();
    
    // Call bye method
    hi->bye();

    // Deallocate the memory
    delete hi;
    
    return 0;
}