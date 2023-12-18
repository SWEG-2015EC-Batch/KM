#include <iostream>
using namespace std;

int main(void)
{
    int i, j, row, column;
    char lower;

    cout<<"Enter row and column: ";
    cin>>row>>column;

    i = 0;
    while (i < row)
    {
        j = 0;
        lower = 'a';
        while (j < column)
        {
            cout<<lower<<" ";
            lower++;
            j++;
        }
        cout<<"\n";
        i++;
    }

    return (0);
}