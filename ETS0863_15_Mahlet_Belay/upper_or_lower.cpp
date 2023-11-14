#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;

int main(void)
{
    //Convert to uppercase and lowercase equivalent
    char alphabet, lowerAlphabet, upperAlphabet;

    cout<<"Insert letter you want to convert: ";
    cin>>alphabet;

    lowerAlphabet = tolower(alphabet);
    upperAlphabet = toupper(alphabet);

    cout<<"Lower case: "<<lowerAlphabet<<endl;
    cout<<"Upper case: "<<upperAlphabet<<endl;

    return (0);
}