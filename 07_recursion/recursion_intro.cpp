#include <iostream>

void countDown(int n);

int main(void){
    countDown(10);

    return 0;
}

void countDown(int n){
    if (n < 1){
        return; // base case
    }
    std::cout << n << " ";
    countDown(n - 1); // Call the same function (recursive call)
}