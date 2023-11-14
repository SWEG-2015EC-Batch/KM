#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    //Calculate gross salary, net salary and bonus payment
    float working_hours, bonus_rate, base_salary;
    float gross_salary, net_salary, bonus_payment;

    cout<<"Input weekly working hours: ";
    cin>>working_hours;

    cout<<"Input bonus rate per hour: ";
    cin>>bonus_rate;

    cout<<"Input base salary: ";
    cin>>base_salary;

    bonus_payment = bonus_rate * working_hours;
    gross_salary = base_salary + bonus_payment;
    net_salary = 0.8075 * gross_salary;

    cout<<"The bonus payment is "<<bonus_payment<<endl;
    cout<<"The gross salary is "<<gross_salary<<endl;
    cout<<"The net salary is "<<net_salary<<endl;

    return (0);
}