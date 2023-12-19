#include <iostream>

using namespace std;

int main(){
	
	int num, temp;
	int reverse = 0;
	int count = 0;
	int sum = 0;
	
	cout << "Enter the number: ";
	cin >> num;
	
	if (num % 10 == 0){
		
		cout << "0";
		
	}
	
	while (num > 0){
		
		temp = (num % 10);
		
		sum = temp + sum;	
		
		reverse = (reverse * 10) + temp;
		num = num / 10;
		count++;
		
	}
	
	cout << reverse << ": is the reverse of the number." << endl;
	cout << count << ": is the number of digits." << endl;
	cout << sum << ": is the sum of the digits." << endl;
	
	return 0;
	
}
