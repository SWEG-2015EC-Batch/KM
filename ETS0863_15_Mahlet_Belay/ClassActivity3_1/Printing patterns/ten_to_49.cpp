#include <iostream>
using namespace std;

int main(void)
{
    int i(0), j, num(10);

    while (i < 4)
    {
        j = 0;
        while (j < 10)
        {
            cout<<num<<" ";
            num++;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return (0);
}