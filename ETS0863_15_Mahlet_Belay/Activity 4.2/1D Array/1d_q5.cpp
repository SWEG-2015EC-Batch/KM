#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float volts[3][3] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
        
    cout<<"_______________________"<<endl;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
            cout<<setw(5)<<volts[i][j]<<" | ";
        cout<<endl<<"______________________"<<endl;
    }
    return (0);
}