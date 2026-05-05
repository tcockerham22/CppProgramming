#include <iostream>
#include <stdexcept>
#include <string>

class MyException : std::logic_error {
public:
    MyException(int code, const std::string& msg)
        : std::logic_error(msg), err_code(code) { }

    int getCode() const {
        return err_code;
    }

    const char* what() const noexcept override {
        std::string* out = new std::string("The exception code is ");
        out->append(std::to_string(getCode()));
        out->append("\n");
        out->append(std::logic_error::what());

        return out->c_str();
    }

private:
    int err_code;
};

class Fraction {
public:
    Fraction(int n, int d) : num(n), den(d) {

    }

    int quotient() const {
        if (den == 0) {
            throw std::runtime_error("Denominator cannot be zero");
        }
        if ((num < 0 && den > 0) || (num > 0 && den < 0)) {
            throw std::logic_error("The result is negative");
        }
        if (num / den > 100) {
            throw MyException(11, "Quotient is greater than a 100");
        }
        // If quotient is greater than 100 throw MyException with code 11

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
    catch (const MyException& ex) {
        std::cout << "MyException exception was catched: " << ex.what() << std::endl;
    }
    catch (const std::runtime_error& ex) {
        std::cout << "Runtime_error exception was catched: " << ex.what() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << "Base class exception was catched: " << ex.what() << std::endl;
    }


    std::cout << "End of program" << std::endl;

    
    return 0;
}