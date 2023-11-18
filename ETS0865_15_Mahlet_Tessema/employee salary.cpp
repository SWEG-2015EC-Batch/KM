#include <iostream>
#include <string>
using namespace std;

void calculateSalary(string name, double weeklyHours, double bonusRate, double baseSalary) {
    // Constants for pension and tax rates
    const double pensionRate = 0.05;
    const double taxRate = 0.15;

    // Calculate gross salary
    double grossSalary = baseSalary + (weeklyHours * bonusRate);

    // Calculate pension deduction
    double pensionDeduction = grossSalary * pensionRate;

    // Calculate taxable income after pension deduction
    double taxableIncome = grossSalary - pensionDeduction;

    // Calculate tax amount
    double taxAmount = taxableIncome * taxRate;

    // Calculate net salary after deductions
    double netSalary = grossSalary - pensionDeduction - taxAmount;

    // Calculate bonus payment
    double bonusPayment = weeklyHours * bonusRate;

    // Display results
    cout << "Employee Name: " << name << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction: $" << pensionDeduction << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
}

int main() {
    string name;
    double weeklyHours, bonusRate, baseSalary;

    // Read employee information
    cout << "Enter employee name: ";
    getline(cin, name);
    
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;
    
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    
    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Calculate and display salary information
    calculateSalary(name, weeklyHours, bonusRate, baseSalary);

    return 0;
}
