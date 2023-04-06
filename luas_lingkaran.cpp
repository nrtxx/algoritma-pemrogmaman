#include <iostream>

using namespace std;

main()

{
    float Luas,r,phi=3.14;

    cout<<"================================="<<endl;
    cout<<"Program Menghitung Luas Lingkaran"<<endl;
    cout<<"================================="<<endl;

    cout<<"Masukan Nilai Jari-Jari : ";
    cin>>r;

    Luas=phi*r*r;
    cout<<"Luas Lingkaran = "<<Luas;
    return 0;
}
