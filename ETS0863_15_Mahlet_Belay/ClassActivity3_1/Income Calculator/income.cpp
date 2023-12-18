#include <iostream>
using namespace std;

int main(void)
{
    float gross_salary, tax_rate, worked_hours;
    float bonus_rate(0), net_pay;

    cout<<"Input gross salary, and worked hours: ";
    cin>>gross_salary>>worked_hours;

    if (gross_salary <= 200)
        tax_rate = 0;
    else if (gross_salary <= 600)
        tax_rate = 0.1;
    else if (gross_salary <= 1200)
        tax_rate = 0.15;
    else if (gross_salary <= 2000)
        tax_rate = 0.2;
    else if (gross_salary <= 3500)
        tax_rate = 0.25;
    else
        tax_rate = 0.3;

    if (worked_hours > 40)
    {
        cout<<"Enter bonus payment rate: ";
        cin>>bonus_rate;
    }

    net_pay = (gross_salary * (0.93 - tax_rate)) + ((worked_hours - 40) * bonus_rate);

    cout<<"Your net pay is "<<net_pay;
    return (0);
}