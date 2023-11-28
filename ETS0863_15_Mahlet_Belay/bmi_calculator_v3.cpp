#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

int main(void)
{
    //Find the BMI
    float height, weight, bodyMassIndex;
    char gender;
    int count, i;

    cout<<"How many people's bmi would you like to check? ";
    cin>>count;

    for (i = 1; i <= count; i++)
    {
        cout<<"\nPerson - "<<i<<endl;

        cout<<"Insert gender (F or M)? ";
        cin>>gender;

        cout<<"Insert height(in m): ";
        cin>>height;

        cout<<"Insert weight(in kg): ";
        cin>>weight;

        gender = toupper(gender);

        bodyMassIndex = weight / (height * height);

        if (bodyMassIndex >= 30)
            cout<<"Obese"<<endl;
        else if (gender == 'F')
        {
            cout<<"\nGender is female and BMI is ";
            if (bodyMassIndex < 18.5)
                cout<<"underweight"<<endl;
            else if (bodyMassIndex >= 18.5 && bodyMassIndex <= 24.9)
                cout<<"normal weight"<<endl;
            else
                cout<<"overweight"<<endl;
        }
        else if (gender == 'M')
        {   
            cout<<"\nGender is male and BMI is ";
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
    }

    return (0);
}