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
            if (j == 0 || j == column - 1 || i == 0 || i == row - 1)
                cout<<"* ";
            else
                cout<<"  ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    return (0);
}