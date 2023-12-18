#include <iostream>
using namespace std;

int main(void)
{
    int num, temp;
    int one, two, three, four, five;
    int zero, six, seven, eight, nine; 
    one = two = three = four = zero = five = six = seven = eight = nine = 0;

    cout<<"Enter number: ";
    cin>>num;

    while (num > 0)
    {
        temp = num % 10;
        switch (temp)
        {
            case 0:
                zero++;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine;
                break;
            default:
                cout<<"no such number"<<endl;
        }
        num /= 10;
    }

    cout<<"Number | Frequency"<<endl;
    cout<<"  0    | "<<zero<<endl;
    cout<<"  1    | "<<one<<endl;
    cout<<"  2    | "<<two<<endl;
    cout<<"  3    | "<<three<<endl;
    cout<<"  4    | "<<four<<endl;
    cout<<"  5    | "<<five<<endl;
    cout<<"  6    | "<<six<<endl;
    cout<<"  7    | "<<seven<<endl;
    cout<<"  8    | "<<eight<<endl;
    cout<<"  9    | "<<nine<<endl;
    return (0);
}