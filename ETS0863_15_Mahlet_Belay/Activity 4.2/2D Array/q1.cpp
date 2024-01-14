#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, count(0);
    cout<<"How many elements: ";
    cin>>n;

    int first[n], second[n];

    cout<<"Enter first array: ";
    for (int i = 0; i < n; i++)
        cin>>first[i];

    cout<<"Enter second array: ";
    for (int i = 0; i < n; i++)
        cin>>second[i];

    sort(first, first + n);
    sort(second, second + n);

    for (int i = 0; i < n; i++)
    {
        if (first[i] == second[i])
            count++;
    }

    if (count == n)
        cout<<"The two arrays are identical"<<endl;
    else
        cout<<"The two arrays are different"<<endl;

    return (0);
}