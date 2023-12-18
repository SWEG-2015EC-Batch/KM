#include <iostream>

using namespace std;

int main(){
	
	int a;
	
	cout << "Enter 1 for a star half pyramid.\n";
	cout << "Enter 2 for a star rectangle.\n";
	cout << "Enter 3 for an inverted star half pyramid.\n";
	cout << "Enter 4 for a number half pyramid.\n";
	cout << "Enter 5 for a number rectangle.\n";
	cout << "Enter 6 for an inverted number half pyramid.\n";
	cin >> a;
	
	if (a == 1){
	
		for (int j = 0; j < 5; j++){
	
			for (int i = 0; j >= i; i++){
		
				cout << "*";
		
			}
		
			cout << endl;
	
		}
	
	}
	
	else if (a == 2){
	
		for (int i = 1; i <= 5; i++){
		
			for(int j = 1; j <= 5; j++){
			
				cout << "*";
			}
		
			cout << endl;
		
		}
	
	}
	
	else if (a == 3){
	
		for (int j = 5; j > 0; j--){
	
			for (int i = 0; i < j; i++){
		
				cout << "*";
		
			}
		
			cout << endl;
	
		}
	
	}
	
	else if (a == 4){
	
		for (int j = 1; j <= 5; j++){
	
			for (int i = 1; i <= j; i++){
		
				cout << i << " ";
		
			}
		
			cout << endl;
	
		}
	
	}
	
	else if (a == 5){
	
		for (int j = 1; j <= 5; j++){
	
			for (int i = 1; i <= 5; i++){
		
				cout << i << " ";
		
			}
		
			cout << endl;
	
		}
	
	}
	
	else if (a == 6){
	
		for (int j = 5; j >= 1; j--){
	
			for (int i = 1; i <= j; i++){
			
				cout << i << " ";
		
			}
		
			cout << endl;
	
		}
	
	}
	
	else {
		
		cout << "You have entered an invalid number.\n";
		
	}
		
	return 0;
	
}
