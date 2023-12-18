#include <iostream>
using namespace std;

int main(void)
{
    int num, temp, sum(0);

    cout<<"Enter number: ";
    cin>>num;

    while (num > 0)
    {
        temp = num % 10;
        sum += temp;
        num /= 10;
    }
    cout<<"Sum of the digits is "<<sum<<endl;

    return (0);
}