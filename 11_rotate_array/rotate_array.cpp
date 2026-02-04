#include <iostream>

// Fucntion prototype
void rotateRight(const int src[], int dest[], int size, int k);

int main(void){
    const int SIZE = 7;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int new_list[SIZE];
    rotateRight(list, new_list, SIZE, 1);

    // Print the list
    for(int i : list){ // range-based for loop
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // Print the new list
    for(int i : new_list){ // range-based for loop
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}

void rotateRight(const int src[], int dest[], int size, int k){
    int new_first = size - (k % size);
    // Copy from new_first till the end of src
    int i = 0;
    int j = new_first;
    while(j < size){
        dest[i] = src[j];
        i++;
        j++;
    }

    // copy from the beginning of src till new_first
    j = 0;
    while(j < new_first){
        dest[i] = src[j];
        i++;
        j++;
    }
}