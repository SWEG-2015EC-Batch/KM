#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    // //Find the BMI
    float height, weight, bodyMassIndex;
    cout<<"Insert height(in m): ";
    cin>>height;

    cout<<"Insert weight(in kg): ";
    cin>>weight;

    bodyMassIndex = weight / (height * height);
    cout<<"The BMI is "<< bodyMassIndex<< endl;

    return (0);
}