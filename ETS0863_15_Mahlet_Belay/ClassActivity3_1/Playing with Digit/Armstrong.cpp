#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int num, cp, temp, sum(0), count(0);

    cout<<"Enter number: ";
    cin>>num;

    while (num > 0)
    {
        temp = num % 10;
        
        sum += pow(temp, 3);
        num /= 10;
    }

    if (count != 3 || cp != sum)
    {
        cout<<sum;
        cout<<"This number is not an armstrong"<<endl;
    }
    else
        cout<<"It is an armstrong"<<endl;

    return (0);
}