#include <iostream>
using namespace std;

int main(void)
{
    int i, j, row;
    cout<<"Enter row: ";
    cin>>row;

    i = row;
    while (i > 0)
    {
        j = 0;
        while (j < row - i)
        {
            cout<<" ";
            j++;
        }
        j = i;
        while (j <= (2 * i - 1))
        {
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i--;
    }
    return (0);
}