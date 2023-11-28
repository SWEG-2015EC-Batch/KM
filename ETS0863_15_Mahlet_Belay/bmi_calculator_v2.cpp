#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

int main(void)
{
    //Find the BMI
    float height, weight, bodyMassIndex;
    char gender;

    cout<<"What is your gender (F or M)?";
    cin>>gender;

    cout<<"Insert height(in m): ";
    cin>>height;

    cout<<"Insert weight(in kg): ";
    cin>>weight;

    gender = toupper(gender);

    bodyMassIndex = weight / (height * height);

    if (bodyMassIndex >= 30)
        cout<<"You are obese"<<endl;
    else if (gender == 'F')
    {
        cout<<"\nYour gender is female and you are ";
        if (bodyMassIndex < 18.5)
            cout<<"underweight"<<endl;
        else if (bodyMassIndex >= 18.5 && bodyMassIndex <= 24.9)
            cout<<"normal weight"<<endl;
        else
            cout<<"overweight"<<endl;
    }
    else if (gender == 'M')
    {   
        cout<<"\nYour gender is male and you are ";
        if (bodyMassIndex < 20.5)
            cout<<"underweight"<<endl;
        else if (bodyMassIndex >= 20.5 && bodyMassIndex <= 25.9)
            cout<<"normal weight"<<endl;
        else
            cout<<"overweight"<<endl;
    }
    else
    {
        cout<<"\nPlease input a proper gender"<<endl;
    }

    cout<<"The BMI is "<< bodyMassIndex<< endl;

    return (0);
}