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
            if (j == i || j == 1 || i == 1 || i == row)
                cout<<"* ";
            else
                cout<<"  ";
            j--;
        }
        cout<<"\n";
        i--;
    }
    return (0);
}