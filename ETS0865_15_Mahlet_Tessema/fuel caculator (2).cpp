#include <iostream>

int main() {
    double fuelCapacity, milesPerGallon;

    // Input the capacity of the fuel tank in gallons
    std::cout << "Enter the capacity of the fuel tank in gallons: ";
    std::cin >> fuelCapacity;

    // Input the miles per gallon efficiency
    std::cout << "Enter the miles per gallon efficiency: ";
    std::cin >> milesPerGallon;

    // Calculate the total miles the automobile can be driven without refueling
    double totalMiles = fuelCapacity * milesPerGallon;

    // Output the number of miles the automobile can be driven without fueling
    std::cout << "The automobile can be driven for " << totalMiles << " miles without refueling." << std::endl;

    return 0;
}


