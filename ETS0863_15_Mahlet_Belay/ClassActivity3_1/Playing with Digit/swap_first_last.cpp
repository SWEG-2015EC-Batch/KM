#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int num, cp_num, first, last, count(0);

    cout<<"Enter number: ";
    cin>>num;

    cp_num = num;
    last = num % 10;

    while (num > 0)
    {
        count++;
        if (num / 10 == 0)
            first = num % 10;
        num /= 10;
    }

    cp_num = cp_num - last + first;
    cp_num = cp_num - (first * pow(10, count - 1)) + (last * pow(10, count - 1));

    cout<<"The number when the first and last digits are swapped is "<<cp_num<<endl;

    return (0);
}