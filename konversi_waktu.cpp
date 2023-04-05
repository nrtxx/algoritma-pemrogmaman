#include <iostream>

using namespace std;

int main()
{
    int detik,menit,jam,hari,sisa;
    cout<<"Masukkan Detik\t: ";
    cin>>detik;
    hari=detik/86400;
    sisa=detik%86400;
    jam=sisa/3600;
    sisa=sisa&3600;
    menit=sisa/60;
    sisa=sisa%60;
    cout<<hari<<"hari"<<endl;
    cout<<jam<<"jam"<<endl;
    cout<<menit<<"menit"<<endl;

    return 0;
}
