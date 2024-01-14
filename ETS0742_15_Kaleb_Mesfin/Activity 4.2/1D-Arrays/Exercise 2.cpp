#include <iostream>

using namespace std;

int main(){
  
  int temp [8], Sum = 0, Mean = 0;
  
  cout<<"Enter eight integers: ";
  
  for (int i = 0; i < 8; i++){
    
    cin >> temp[i];
    Sum += temp[i];
  
  }
  
  Mean = Sum / 8;
  
  for (int i = 0; i < 8; i++){
    
    int l = i + 1;
    cout << "Number #" << l << " is: " << temp[i] << endl;
  
  }
  
  cout << "The average of the numbers given is: "<< Mean << endl;
  
  return 0;

}
