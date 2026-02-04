#include <iostream>

void print_digits(int n);

int main(void){
    print_digits(12345);

    return 0;
}

void print_digits(int n){
    // Base case
    if (n <= 0){
        return;
    }
    print_digits(n / 10);
    std::cout << n % 10 << std::endl;
}