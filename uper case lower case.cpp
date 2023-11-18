#include <iostream>

int main() {
    char letter;
    int choice;

    // Input a letter from the user
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    // Prompt user for choice (1 for uppercase, 2 for lowercase)
    std::cout << "Enter 1 to convert to uppercase or 2 to convert to lowercase: ";
    std::cin >> choice;

    if (choice == 1) {
        // Convert letter to uppercase if choice is 1
        if (islower(letter)) {
            letter = toupper(letter);
            std::cout << "Uppercase equivalent: " << letter << std::endl;
        } else {
            std::cout << "The letter is already in uppercase." << std::endl;
        }
    } else if (choice == 2) {
        // Convert letter to lowercase if choice is 2
        if (isupper(letter)) {
            letter = tolower(letter);
            std::cout << "Lowercase equivalent: " << letter << std::endl;
        } else {
            std::cout << "The letter is already in lowercase." << std::endl;
        }
    } else {
        std::cout << "Invalid choice. Please enter 1 for uppercase or 2 for lowercase." << std::endl;
    }

    return 0;
}


