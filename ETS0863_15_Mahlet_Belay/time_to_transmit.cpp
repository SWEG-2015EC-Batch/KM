#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    //Find the time it takes to send a file
    int time_taken, file_size, byte_per_second(960);

    cout<<"Input the size of the file(in bytes): ";
    cin>>file_size;

    time_taken = file_size / byte_per_second;

    cout<<"Your file will take "<<time_taken<<" seconds to finish sending"<<endl;

    return (0);
}