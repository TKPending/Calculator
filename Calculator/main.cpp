#include "mylibrary.hpp"
#include "operations.hpp"
#include "appControllers.hpp"

int main(int argc, const char * argv[]) {
    bool app = true;
    
    while (app) {
        int firstNumber = userEnterNumber();
        if (!checkNumberRange(firstNumber)) {
            invalidNumberInput();
            continue;
        };
        
        int secondNumber = userEnterNumber();
        if (!checkNumberRange(secondNumber)) {
            invalidNumberInput();
            
            continue;
        };
        
        char operand;
        std::cout << "Enter operand: ";
        std::cin >> operand;
        std::cout << firstNumber << " "  << operand <<  " "  << secondNumber << " = " << calculateNumbers(operand, firstNumber, secondNumber);
        
        
        app = restartApp();
    };
    
    return 0;
}
