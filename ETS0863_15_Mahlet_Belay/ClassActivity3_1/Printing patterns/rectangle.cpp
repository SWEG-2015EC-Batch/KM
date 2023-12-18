#include <iostream>
using namespace std;

int main(void)
{
    int i, j, row, column;

    cout<<"Enter row and column: ";
    cin>>row>>column;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < column)
        {
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    return (0);
}