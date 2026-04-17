#include <iostream>
#include <string>

class A{
public:
    std::string msg1 = "Message one!";
private:
    std::string msg2 = "Message two!";
protected:
    std::string msg3 = "Message three!";
};

class B : public A{
public:
    void method() const{
        std::cout << msg1 << std::endl; // public ok
        //std::cout << msg2 << std::endl; // private no access
        std::cout << msg3 << std::endl; // protected ok
    }
};

int main(void){
    B b;
    b.method();
    

    return 0;
}