#include <iostream>

class Fraction {
public:
    Fraction(int n, int d) : num(n), den(d) {

    }

    int quotient() const {
        if (den == 0) {
            throw "Denominator cannot be zero.";
        }
        throw 1;

        return num / den;
    }
private:
    int num, den;
};

int main(void) {
    int n1, n2;
    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;

    Fraction f1(n1, n2);

    try {
        std::cout << f1.quotient() << std::endl;
        std::cout << "End of try block" << std::endl;
    }
    catch (const char* ex) {
        std::cout << "Char* exception was catched: " << ex << std::endl;
    }

    std::cout << "End of program" << std::endl;

    
    return 0;
}