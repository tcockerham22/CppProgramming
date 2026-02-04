#include <iostream>
#include <random>

int main(void){
    // Generating the seed
    std::random_device rd;

    // Initalize a random number engine with the seed
    std::mt19937 eng(rd());

    // Initalize a distribution
    std::uniform_int_distribution<int> dist(1,100);

    for(int i = 0; i < 20; i++){
        // Generate the random number
        int x = dist(eng);
        std::cout << x << ' ';
    }
    std::cout << "\n";

    return 0;
}