#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(void)
{
    //Calculate x raised to y
    int x, y, power;
    cout<<"Enter base: ";
    cin>>x;

    cout<<"Enter exponent: ";
    cin>>y;

    power = pow(x, y);
    cout<<x<<" raised to "<<y<<" is "<<power<<endl;

    return (0);
}