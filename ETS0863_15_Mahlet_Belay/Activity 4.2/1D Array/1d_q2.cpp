#include <iostream>
using namespace std;

int main(void)
{
    int temp[8], mean(0);

    cout<<"Input 8 numbers: ";
    for (int i = 0; i < 8; i++)
    {
        cin>>temp[i];
        mean += temp[i];
    }
    mean /= 8;

    cout<<"The numbers are: "<<endl<<"\t";
    for (int i = 0; i < 8; i++)
        cout<<temp[i]<<" ";
    cout<<endl<<"The average is "<<mean<<endl;
    
    return (0);
}