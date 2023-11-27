
#include <iostream>
using namespace std;

// Function to calculate BMI
double calculateBMI(double weight, double height) {
    // BMI formula: weight (kg) / (height (m) * height (m))
    return weight / (height * height);
}

int main() {
    double weight, height;

    // Input weight in kilograms
    cout << "Enter weight in kilograms: ";
    cin >> weight;

    // Input height in meters
    cout << "Enter height in meters: ";
    cin >> height;

    // Calculate BMI using the function
    double bmi = calculateBMI(weight, height);

    // Display the calculated BMI
    cout << "BMI is: " << bmi << std::endl;

    return 0;
}

