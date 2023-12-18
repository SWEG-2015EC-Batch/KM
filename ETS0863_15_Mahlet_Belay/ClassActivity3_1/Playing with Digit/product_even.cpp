#include <iostream>
using namespace std;

int main(void)
{
    int num, prod(1), temp;

    cout<<"Enter number: ";
    cin>>num;

    while (num > 0)
    {
        temp = num % 10;
        if (temp % 2 == 0)
            prod *= temp;
        num /= 10;
    }
    cout<<"The product of the even digits is "<<prod<<endl;
    
    return (0);
}