#include <iostream>
using namespace std;

int main(void)
{
    int num, count(0);

    cout<<"Enter number: ";
    cin>>num;

    while (num > 0)
    {
        count++;
        num /= 10;
    }

    cout<<"This number has "<<count<<" digits."<<endl;

    return (0);
}