#include <iostream>
#include <vector> // vectir data structure (dynamic array)

void print(const std::vector<int>& v);

int main(void){
    // Create a vector
    std::vector<int> v; // Empty vector of integers

    // Create and initialize the vector
    std::vector<int> v2 {1, 2, 3, 4, 5, 6};
    print(v2);

    // Provide the size and the default value
    std::vector<int> v3(5, 9); // (5 elements, each set to 9)
    print(v3);

    // Copy from another vector
    std::vector<int> v4(v2);
    print(v4);

    //Get the number of elements
    std::cout << "v2 size: " << v2.size() << std::endl;
    std::cout << "v size: " << v.size() << std::endl;

    // First and Last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.back() << std::endl;

    // Add to the end of the vector
    v2.push_back(10);
    print(v2);

    // Remove the last element
    v3.pop_back();

    // Iterators - objects that point to certain locations in the vector
    // begin() - point to the first element in the vector
    // end() - point to the one past the last element

    std::cout << *v2.begin() << std::endl;

    // Insert(location(iterator), value)
    v2.insert(v2.begin() + 1, 1000);
    print(v2);
    v2.insert(v2.end() - 2, 500);
    print(v2);

    return 0;
}

void print(const std::vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}