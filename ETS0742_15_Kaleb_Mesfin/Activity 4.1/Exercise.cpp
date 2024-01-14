#include <iostream>

using namespace std;

int main() {
  
  int num, total, i, sum = 0, mean;
  
  cout << "Enter the amount of numbers you will use: ";
  cin >> N;
  
  for (int i = 1; i <= N; i++){
    
    cout << "Enter number " << i << ": ";
    cin >> num;
    
    sum += num;
    
  }
  
  mean = sum / N;
  
  cout << "The mean of the numbers is " << mean << endl;
  
  return 0;
  
}
