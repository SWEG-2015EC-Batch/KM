*#include <iostream>
#include <cmath>

int main() {
    double x, y;

    // Input the value of x (base)
    std::cout << "Enter the value of x (base): ";
    std::cin >> x;

    // Input the value of y (exponent)
    std::cout << "Enter the value of y (exponent): ";
    std::cin >> y;

    // Calculate x raised to the power of y using the pow() function from <cmath>
    double result = pow(x, y);

    // Display the result
    std::cout << x << " raised to the power of " << y << " is: " << result << std::endl;

    return 0;
}

