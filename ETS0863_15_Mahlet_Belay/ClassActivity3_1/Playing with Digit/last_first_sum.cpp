#include <iostream>
using namespace std;

int main(void)
{
    int num, first, last, sum;

    cout<<"Enter number: ";
    cin>>num;

    last = num % 10;
    while (num > 0)
    {
        if (num / 10 == 0)
            first = num % 10;
        num /= 10;
    }
    sum = first + last;
    cout<<"First digit - "<<first<<"\nLast digit - "<<last<<"\nSum of the first and last digit - "<<sum<<endl;
    return (0);
}