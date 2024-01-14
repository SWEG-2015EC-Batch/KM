#include <iostream>
using namespace std;

int main(void)
{
    int arr[3][4], sum(0);

    cout<<"Enter elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j] % 2 == 0)
                sum += arr[i][j];
        }
    }

    cout<<"The sum of "<<endl<<"\t";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] % 2 == 0)
                cout<<arr[i][j]<<" ";
            else
                cout<<"*";
        }
    }
    cout<<endl<<" is "<<sum<<endl;

    return (0);
}