#include <iostream>

// create a namespace
namespace first{
    int a;
}

namespace second{
    int a;
}

int main(void){
    // :: - scope resolution operator
    first::a = 10;
    std::cout << first::a << std::endl;

    return 0;
}