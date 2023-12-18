#include <iostream>

using namespace std;

int main (){
	
	const float Pension_Rate = 0.07;
	float Base_Salary, Gross_Salary, Bonus_Rate, Income_Tax, Income_Tax_Rate, Pensions, Overtime_Payment = 0, Net_Salary;
	int Worked_Hours;
	
	cout << "Enter your base salary: ";
	cin >> Base_Salary;
	
	cout << "Enter your bonus rate: ";
	cin >> Bonus_Rate;
	
	cout << "Enter your worked hours: ";
	cin >> Worked_Hours;
	
	if (Base_Salary < 200){
		
		Income_Tax_Rate = 0.0;
		
	}
	
	else if (Base_Salary > 200 && Base_Salary < 600){
		
		Income_Tax_Rate = 0.1;
		
	}
	
	else if (Base_Salary > 600 && Base_Salary < 1200){
		
		Income_Tax_Rate = 0.15;
		
	}
	
	else if (Base_Salary > 1200 && Base_Salary < 2000){
		
		Income_Tax_Rate = 0.2;
		
	}
	
	else if (Base_Salary > 2000 && Base_Salary < 3500){
		
		Income_Tax_Rate = 0.25;
		
	}
	
	else if (Base_Salary > 3500){
		
		Income_Tax_Rate = 0.3;
		
	}
	
	Pensions = Base_Salary * Pension_Rate;
	
	if (Worked_Hours > 40){
		
		Overtime_Payment = (Worked_Hours - 40) * Bonus_Rate;
		
	}
	
	Gross_Salary = Base_Salary - Pensions + Overtime_Payment;
	Net_Salary = Gross_Salary * (1 - Income_Tax_Rate);
	
	cout << "Your net salary is: " << Net_Salary << endl;
		
	return 0;
	
}
