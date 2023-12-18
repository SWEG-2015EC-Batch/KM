#include <iostream>
using namespace std;

int main(void)
{
    int i, j, row;
    cout<<"Enter number of row: ";
    cin>>row;

    i = row;
    while (i > 0)
    {
        j = i;
        while (j > 0 && j <= i)
        {
            cout<<"* ";
            j--;
        }
        cout<<"\n";
        i--;
    }
    return (0);
}