#include <iostream>
using namespace std;

int main(void)
{
    int i, j, row;
    char letter;

    cout<<"Enter row: ";
    cin>>row;

    i = 0;
    while (i < row)
    {
        j = 0;
        letter = 'A';
        while (j <= i)
        {
            cout<<letter<<" ";
            letter++;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return (0);
}