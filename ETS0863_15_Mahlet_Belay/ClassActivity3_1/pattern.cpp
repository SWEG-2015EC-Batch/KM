#include <iostream>
using namespace std;

//Rectangle Pattern

void rect(int row, int column)
{
    int i, j;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < column)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Triangle Pattern

void tri(int row)
{
    int i, j;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j <= i)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Inverted Triangle Pattern

void inver(int row)
{
    int i, j;

    i = row;
    while (i > 0)
    {
        j = i;
        while (j > 0 && j <= i)
        {
            cout<<"*";
            j--;
        }
        cout<<"\n";
        i--;
    }
}

//Pyramid

void pyramid(int row)
{
    int i, j;

    i = 1;
    while (i < row)
    {
        j = i;
        while (j < row)
        {
            cout<<" ";
            j++;
        }
        j = 0;
        while (j < (2 * i - 1))
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}

//Inverted Pyramid

void inverPyramid(int row)
{
    int i, j;

    i = row;
    while (i > 0)
    {
        j = 0;
        while (j < row - i)
        {
            cout<<" ";
            j++;
        }
        j = i;
        while (j <= (2 * i - 1))
        {
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i--;
    }
}

int main(void)
{
    int choice;

    cout<<"Pattern Menu\n"<<endl;

    cout<<"Choose:\n\t1 for Rectangle\n\t2 for Triangle\n\t3 for Inverted Triangle\n\t4 for Pyramid\n\t5 for Inverted Pyramid"<<endl;
    cin>>choice;


    switch (choice)
    {
        case 1:
            int row, column;
            cout<<"Enter row and column: ";
            cin>>row>>column;

            rect(row, column);
            break;
        case 2:
            cout<<"Enter row: ";
            cin>>row;

            tri(row);
            break;
        case 3:
            cout<<"Enter row: ";
            cin>> row;
            
            inver(row);
            break;
        case 4:
            cout<<"Enter row: ";
            cin>>row;

            pyramid(row);
            break;
        case 5:
            cout<<"Enter row: ";
            cin>>row;

            inverPyramid(row);
            break;
        default:
            cout<<"There is no such shape"<<endl;
    }

    return (0);
}