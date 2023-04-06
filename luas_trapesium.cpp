#include <iostream>

using namespace std;

main()
{
    float Luas, a1, a2, t;

    cout<<"================================="<<endl;
    cout<<"Program Menghitung Luas Trapesium"<<endl;
    cout<<"================================="<<endl;

    cout<<"Masukan Nilai a1 : ";
    cin>>a1;
    cout<<"Masukan Nilai a2 : ";
    cin>>a2;
    cout<<"Masukan Nilai t  : ";
    cin>>t;

    Luas=(a1*a2*t)/2;
    cout<<"Luas Trapesium   = "<<Luas;
    return 0;
}
