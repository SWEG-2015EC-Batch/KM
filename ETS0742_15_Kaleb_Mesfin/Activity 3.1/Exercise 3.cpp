#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
  
    char a;
  
    cout << "Enter a letter: ";
    cin >> a;

	if (islower(a)) { 
  
        cout << "The entered character is a lower case letter." << endl; 
  
	}
		
	else if (isupper(a)) {  

		cout << "The entered character is an upper case letter." << endl; 
	}
	
	else if (isdigit(a)) { 
    
		cout << "The entered character is a digit." << endl;
    
	}
	
    return 0;
}
