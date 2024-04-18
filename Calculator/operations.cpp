#include "mylibrary.hpp"
#include <stdio.h>

bool checkNumberRange(int numb)
{
    if (numb > 10 || numb < 0) {
        return false;
    };
    
    return true;
};

int addition(int a, int b)
{
    return a + b;
};

int subtract(int a, int b)
{
    return a - b;
};

int multiply(int a, int b)
{
    return a * b;
};

int divide(int a, int b)
{
    return a / b;
};

int calculateNumbers(char symbol, int firstNumber, int secondNumber)
{
    switch (symbol) {
        case '+':
            return addition(firstNumber, secondNumber);
        case '-':
            return subtract(firstNumber, secondNumber);;
        case '*':
            return multiply(firstNumber, secondNumber);;
        case '/':
            return divide(firstNumber, secondNumber);;
        default:
            std::cout << "\nInvalid inputs\n";
            return 0;
    }
}
