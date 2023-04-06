#include <iostream>

using namespace std;

main()
{
    float Luas, d1, d2;

    cout<<"====================================="<<endl;
    cout<<"Program Menghitung Luas Belah Ketupat"<<endl;
    cout<<"====================================="<<endl;

    cout<<"Masukan Nilai d1 : ";
    cin>>d1;
    cout<<"Masukan Nilai d2 : ";
    cin>>d2;

    Luas=(d1*d2)/2;
    cout<<"Luas Belah Ketupat = "<<Luas;
    return 0;
}
