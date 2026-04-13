#include <iostream>
#include <vector>

// Template class
template <typename T1 = int, typename T2 = double> // Default template parameters
class Pair{
public:
    Pair(const T1& f, const T2& s) : first(f), second(s){

    }

    // Getters
    const T1& getFirst() const{
        return first;
    }

    const T2& getSecond() const{
        return second;
    }

    // Setters
    void setFirst(const T1& first){
        this->first = first;
    }

    void setSecond(const T2& second){
        this->second = second;
    }

    void print() const{
        std::cout << "(" << getFirst() << ", " << getSecond() << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Create a function that takes two arguments of any type and returns the Pair of those arguments
template<typename T1, typename T2>
Pair<T1, T2> createPair(const T1& v1, const T2& v2){
    return Pair<T1, T2>(v1, v2);
}

int main(void){
    // Create a Pair object
    Pair<int, double> p1(1, 1.3);
    p1.print();

    Pair<std::string, char> p2 = createPair(std::string("hello"), '!');
    p2.print();

    auto p3 = createPair('a', 1);
    p3.print();

    Pair p4(12, 12.4);
    p4.print();

    std::vector<int> v {1,2};
    Pair<std::vector<int>> p5(v, 3.4);

    return 0;
}