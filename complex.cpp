#include <iostream>

class ComplexNumber {
private:
    int realNumber;
    int imaginaryNumber;
public:
    // Constructor for the ComplexNumber class
    ComplexNumber(int realPart, int imaginaryPart) 
    : realNumber(realPart), imaginaryNumber(imaginaryPart) {}

    // Overload the add operator
    ComplexNumber operator+(const ComplexNumber& other) {
        return ComplexNumber(realNumber + other.realNumber, imaginaryNumber + other.imaginaryNumber);
    }

    // Overload the minus operator
    ComplexNumber operator-(const ComplexNumber& other) {
        return ComplexNumber(realNumber - other.realNumber, imaginaryNumber - other.imaginaryNumber);
    }

    // Display the result
    void display() {
        std::cout << realNumber;
        if (imaginaryNumber >= 0) {
            std::cout << " + " << imaginaryNumber << 'i' << std::endl;
        } else if (imaginaryNumber < 0) {
            std::cout << " - " << -imaginaryNumber << 'i' << std::endl;
        }
    }
};

int main() {
    // Instantiated the class
    ComplexNumber c1(3, 8);
    ComplexNumber c2(1, -10);

    // Performed both addition and subtraction
    ComplexNumber c3 = c1 + c2;
    ComplexNumber c4 = c1 - c2;

    c3.display();
    c4.display();
}