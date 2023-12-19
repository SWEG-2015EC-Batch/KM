#include <iostream>
using namespace std;

int main(void)
{
    int num, total, i, sum(0);

    cout<<"How many numbers' mean do you want to find: ";
    cin>>total;

    i = 1;
    while (i <= total)
    {
        cout<<"Enter number "<<i<<": ";
        cin>>num;

        sum += num;
        i++;
    }
    sum /= total;

    cout<<"The mean of the numbers is "<<sum<<endl;
    
    return (0);
}