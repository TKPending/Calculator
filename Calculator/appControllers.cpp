#include "mylibrary.hpp"
#include <string>
#include <limits>

void invalidNumberInput()
{
    std::cout << "\nNumber has to be between 0 and 10.\n";
};

int userEnterNumber()
{
    int number;
    std::cout << "Enter a number: ";
    
    while (!(std::cin >> number)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid number: ";
    }
    
    return number;
}


bool includesChar(const std::string& initialCharacter) {
    const char* ptr = initialCharacter.c_str();

    while (*ptr != '\0') {
        if (*ptr == 'y' || *ptr == 'n') {
            return true;
        }
        ptr++;
    }

    return false;
}

bool restartApp() {
    std::string keyboardInput;

    while (true) {
        std::cout << "\n\nDo you want to continue with another match operation: Yes [Y] or No [N]: ";
        std::cin >> keyboardInput;

        std::transform(keyboardInput.begin(), keyboardInput.end(), keyboardInput.begin(), ::tolower);

        if (includesChar(keyboardInput)) {
            if (keyboardInput == "y") {
                return true;
            } else {
                return false;
            }
        }
    }
}
