
#include <iostream>

// Function to calculate BMI
double calculateBMI(double weight, double height) {
    // BMI formula: weight (kg) / (height (m) * height (m))
    return weight / (height * height);
}

/*int main() {
    double weight, height;

    // Input weight in kilograms
    std::cout << "Enter weight in kilograms: ";
    std::cin >> weight;

    // Input height in meters
    std::cout << "Enter height in meters: ";
    std::cin >> height;

    // Calculate BMI using the function
    double bmi = calculateBMI(weight, height);

    // Display the calculated BMI
    std::cout << "BMI is: " << bmi << std::endl;

    return 0;
}*/


