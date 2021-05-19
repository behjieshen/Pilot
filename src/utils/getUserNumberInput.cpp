#include "getUserNumberInput.h"

#include <iostream>
#include <string>
#include <limits>

int getUserNumberInput(std::string instruction) {
    bool prompt = true;
    int number;

    // While loop to prompt users for decision forever
    while (prompt) {
        std::cout << instruction;

        if (std::cin >> number) {
            break;
        }

        std::cout << std::endl;

        // Clear input and reset
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return number;
}