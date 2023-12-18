#include <iostream>
using namespace std;

int main(void)
{
    int num, cp, rev(0), rem;

    cout<<"Input number to be reversed: ";
    cin>>num;
    cp = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    if (cp == rev)
        cout<<cp<<" is a palindrome"<<endl;
    else
        cout<<cp<<" is not the same as "<<rev<<endl;

    return (0);
}