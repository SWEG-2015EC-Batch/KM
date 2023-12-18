#include <iostream>
using namespace std;

int main(void)
{
    int num, cp, temp(1), sum(0);

    cout<<"Enter number: ";
    cin>>num;

    while (temp <= num)
    {
        if (num % temp == 0)
        {
            sum += temp;
        }
        temp++;
    }
    sum -= num;

    if (num == sum)
    {
        cout<<"The number is perfect"<<endl;
    }
    else
        cout<<"The number is not perfect"<<endl;

    return (0);
}