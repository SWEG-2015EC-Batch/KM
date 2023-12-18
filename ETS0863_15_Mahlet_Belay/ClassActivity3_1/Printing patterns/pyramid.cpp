#include <iostream>
using namespace std;

int main(void)
{
    int i, j, row;
    cout<<"Enter row: ";
    cin>>row;

    i = 1;
    while (i < row)
    {
        j = i;
        while (j < row)
        {
            cout<<" ";
            j++;
        }
        j = 0;
        while (j < (2 * i - 1))
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }

    return (0);
}