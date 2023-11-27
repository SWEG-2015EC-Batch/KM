#include <iostream>
#include<string.h>
using namespace std;

// Function to calculate BMI
double calculateBMI(double weight, double height)
 {
    // BMI formula: weight (kg) / (height (m) * height (m))
    return weight / (height * height);
}

int main() {
    double weight, height, BMI;
    string gender;
    int numberofrun,i;
    
		cout<<"Enter the number of people using the program"<<endl;
   		 cin>>numberofrun;
   	for (i=1; i<=numberofrun;i++)
{
		cout<<"\nPeron-"<<i<<endl;
		cout<<"Enter Person "<<i<<" gender as Female or Male"<<endl;
	    cin>>gender;
	
	    // Input weight in kilograms
	    cout << "Enter weight of person "<<i<< " in kilograms: ";
	    cin >> weight;
	
	    // Input height in meters
	    cout << "Enter height of person " <<i <<"in meters: ";
	    cin >> height;
	    //BMI intializing
	    BMI= calculateBMI(weight, height);
	    if(BMI>=30)
	   		cout<<"You are perso i obese";
	    
		else if (gender=="Male")
		{
			cout<<"person "<<i<<" your gender is Male "<<endl;
			if (BMI<20.5)
			cout<<"Person "<< i<<" is underweight"<<endl;
			else if(BMI<=25.9 && BMI>=20.5)
			cout<<"person "<<i<<" the normal weight range"<<endl;
			else 
			//(BMI<=29.9 && BMI>=26)
			cout<<"person "<<i<<" you are in the ovrweight range"<<endl;
			
		}
		
		else if (gender=="Female")
		{
		
			cout<<"Person "<<i<<" gender is Female"<<endl;
			if(BMI<18.5)
			cout<<"Person "<<i<<" You are underweight"<<endl;
			else if(BMI<=25.9 && BMI>=20.5)
			cout<<"Person "<<i<<" You are normal weight"<<endl;
			else 
				cout<<"person "<<i<<" You are overweight"<<endl;
		}
		else
			cout<<"Person "<<i<<" please follow instructions"<<endl;
	 	
	 	cout<<"Your BMI is " <<BMI;
	 }
    
    return 0;
}

