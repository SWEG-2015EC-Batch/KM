#include <iostream>
using namespace std;

int main(void)
{
    int row, column, i, j;
    cout<<"Enter number of row and column: ";
    cin>>row>>column;

    int arr[row][column], mul[row], sum[column] = {0};

    cout<<"Enter elements: "<<"\n\t";
    for (i = 0; i < row; i++)
    {
        mul[i] = 1;
        for (j = 0; j < column; j++)
        {
            cin>>arr[i][j];
            mul[j] *= arr[i][j]; 
        }
        sum[i] += arr[i][j];
    }

    cout<<"The sums of the columns are: "<<endl<<"\t";
    for (i = 0; i < row; i++)
        cout<<sum[i]<<" ";
    cout<<"\nThe multiplications of the rows are: "<<endl<<"\t";
    for (i = 0; i < column; i++)
        cout<<mul[i]<<" ";

    return (0);
}