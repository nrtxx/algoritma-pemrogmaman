#include <iostream>

using namespace std;

int main()
{
    short int data1=25;
    short int data2=3;

    short int hasil1;
    short int hasil2;
    short int hasil3;
    short int hasil4;
    short int hasil5;

    hasil1=data1>>data2;
    hasil2=data1|data2;
    hasil3=data1&data2;
    hasil4=data1<<data2;
    hasil5=data1^data2;

    cout<<hasil1<<endl;
    cout<<hasil2<<endl;
    cout<<hasil3<<endl;
    cout<<hasil4<<endl;
    cout<<hasil5<<endl;
    return 0;
}
