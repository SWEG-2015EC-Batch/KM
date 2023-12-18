#include <iostream>
using namespace std;

int main(void)
{
    int num, rev(0), rem;

    cout<<"Input number to be reversed: ";
    cin>>num;

    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    cout<<"Reversed number is"<<rev<<endl;

    return (0);
}