#include <iostream>
using namespace std;

int main(void)
{
    int i, j, row;

    cout<<"Enter row: ";
    cin>>row;

    i = 0;
    while (i < row)
    {
        j = 1;
        while (j <= i + 1)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    return (0);
}