#include <iostream>

using namespace std;

int main(){
	
	int c;
	float a, b, d, e;
	
	do{
	
	cout << "Enter 1 for addition.\n";
	cout << "Enter 2 for subtraction.\n";
	cout << "Enter 3 for multiplication.\n";
	cout << "Enter 4 for division.\n";
	cout << "Opperation: ";
	cin >> c;
	
	cout << "Enter the first opperand: \n";
	cin >> a;
	
	cout << "Enter the second opperand: \n";
	cin >> b;
	
	switch (c){
		
		case 1:
			d = a + b;
			break;
		case 2:
			d = a - b;
			break;
		case 3:
			d = a * b;
			break;
		case 4:
			d = a / b;
			break;
		default:
			cout << "You have entered the wrong number or operation.\n";
	}
	
	cout << "The result of the operation is: " << d << endl;
	
	cout << "Enter 0 to exit the program: ";
	cin >> e;
	cout << "\n"; 
	
	} while (e != 0);
	
	return 0;
}
