#include <iostream>

using namespace std;

int main(){
  
  int N;
  
  cout << "Enter the amount of numbers you want to be entered: ";
  cin >> N;
  
  int Numbers[N];
  
  cout<<"Enter numbers: ";
  
  for (int i = 0; i < n; i++){
    
    int l = i + 1;
    cout << "Enter number #" << l << ": ";
    cin >> Numbers[i];
  
  }

  cout << "The numbers are as follows: ";
  
  for (int i = n - 1; i >= 0; i--){
    
    if (Numbers[i] % 2 == 0){
      
      cout << Numbers[i] << " ";
    
    }
    
  }
  
  return 0;

}
