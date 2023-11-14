#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    //Find the distance that can be covered without refueling
    float capacity, distancePerCapacity, distance;
    cout<<"What is the capacity(in gallons) of the tank? ";
    cin>>capacity;

    cout<<"What is the miles per gallon the automobile can be driven? ";
    cin>>distancePerCapacity;

    distance = distancePerCapacity * capacity;
    cout<<"The distance the automobile can be driven without refilling is "<<distance<<" miles"<<endl;

    return (0);
}