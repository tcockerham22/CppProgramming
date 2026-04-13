#include <iostream>
#include <vector>
#include <string>

// Template function prototype
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template <typename T>
void print(const T& value);

void print(const bool value);

template <typename T>
T findMax(const std::vector<T>& v);

int main(void){

    int i1 = 1, i2 = -4, i3 = -7;
    // Call the template function
    std::cout << smallest(i1, i2, i3) << std::endl;

    double d1 = 1.4, d2 = -4.7, d3 = -7.9;
    // Call the template function
    std::cout << smallest(d1, d2, d3) << std::endl;

    std::string s1 = "apple", s2 = "Banana", s3 = "peanut";
    // Call the template function
    std::cout << smallest(s1, s2, s3) << std::endl;

    // Test print function
    int num = 123;
    bool b = (1 < 2);
    print(num);
    print(b);

    // TODO find max with different vectors

    return 0;
}

template <typename T>
T smallest(const T& n1, const T& n2, const T& n3){
    if (n1 <= n2 && n1 <= n3){
        return n1;
    }
    else if (n2 <= n1 && n2 <= n3){
        return n2;
    }
    else{
        return n3;
    }
}

template <typename T>
void print(const T& value){
    std::cout << "Generic: " << value << std::endl;
}

void print(const bool value){
    std::cout << "Boolean: " << (value ? "true" : "false") << std::endl;
}

template <typename T>
T findMax(const std::vector<T>& v){
    if(v.empty()){
        throw std::string("findMax: empty vector");
    }
    T max = v[0]
    for(int i = 1; i < v.size(); i++){
        if(max < v[i]){
            max = v[i];
        }
    }
    return max;
}