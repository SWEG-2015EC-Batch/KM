#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int n, count(0);
    cout<<"How many elements will your arrays have: ";
    cin>>n;

    int first[n], second[n];

    cout<<"Input first array: ";
    for (int i = 0; i < n; i++)
        cin>>first[i];

    cout<<"Input second array: ";
    for (int i = 0; i < n; i++)
        cin>>second[i];

    cout<<setw(15)<<"Numbers "<<" | "<<"Frequency"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = 0;
            if (first[i] == second[j])
                count++;
        }
        cout<<setw(15)<<left<<first[i]<<count<<endl;
    }
    return (0);
}