#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	string Grade;
	float Result;
	
	cout << "Enter your result: ";
	cin >> Result;
	
	if (Result >= 90){
		
		Grade = "A+";
		
	}
	
	else if (Result >= 80 && Result < 90){
		
		Grade = "A";
		
	}
	
	else if (Result >= 75 && Result < 80){
		
		Grade = "B+";
		
	}
	
	else if (Result >= 60 && Result < 75){
		
		Grade = "B";
		
	}
	
	else if (Result >= 55 && Result < 60){
		
		Grade = "C+";
		
	}
	
	else if (Result >= 45 && Result < 55){
		
		Grade = "C";
		
	}
	
	else if (Result >= 30 && Result < 45){
		
		Grade = "D";
		
	}
	
	else if (Result < 30){
		
		Grade = "F";
		
	}
	
	cout << "Your grade is: " << Grade << endl;
	
	return 0;
	
}
