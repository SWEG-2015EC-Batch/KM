#include <iostream>
using namespace std;

int main(void)
{
    int n;

    cout << "Input a number greater than one: ";
    cin >> n;

    if (n < 1)
        cout << "Error: number is less than one or is not a number" << endl;

    // top half of the hour-glass
    for (int i = 0; i < (n / 2 + 1); i++)
    {
        int num(0);
        for (int j = 0; j < (n / 2 + 1); j++)
        {
            if (i > j)
                cout << "  ";
            else
                cout << num++ << " ";
        }
        for (int k = (n / 2); k > i; k--)
        {
            int num2 = k - i - 1;
            cout << num2 -- << " ";
        }
        cout << endl;
    }

    // bottom half of the hour-glass
    for (int i = 0; i < (n / 2); i++)
    {
        int num(0);
        for (int j = 0; j < (n / 2); j++)
        {
            if (j > (n / 2 - 2) - i)
                cout << num ++ << " ";
            else
                cout << "  ";
        }
        for (int k = -2; k < i; k++)
        {
            cout << num -- << " ";
        }
        cout << endl;
    }

    return (0);
}