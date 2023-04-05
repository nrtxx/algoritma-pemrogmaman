#include <iostream>

using namespace std;

int main()
{
    int kode,harga;
    cout<<"================="<<endl;
    cout<<"  BIAYA OPERASI  "<<endl;
    cout<<"================="<<endl;
    cout<<"1. Operasi Mata"<<endl;
    cout<<"2. Operasi Jantung"<<endl;
    cout<<"Masukkan Pilihan : ";
    cin>>kode;

    switch (kode) {
        case 1 :
            cout<<endl<<"JENIS PENYAKIT MATA"<<endl;
            cout<<"1. Katarak"<<endl;
            cout<<"2. Plus/Minus"<<endl;
            cout<<"3. Silinder"<<endl;
            cout<<"Masukkan Pilihan : ";
            cin>>harga;
            if (harga==1) {
                cout<<"Biaya Operasi Katarak : Rp.7.500.000";
            } else if (harga==2) {
                cout<<"Biaya Operasi Plus/Minus : Rp.5.000.000";
            } else if (harga==3) {
                cout<<"Biaya Operasi Silinder : Rp.4.000.000";
            } else {
                cout<<"Kode Yang Anda Masukkan Tidak Ada"<<endl;
            }
            break;
        case 2 :
            cout<<endl<<"JENIS PENYAKIT JANTUNG"<<endl;
            cout<<"1. Jantung Koroner"<<endl;
            cout<<"2. Katup Jantung"<<endl;
            cout<<"3. Otot Jantung"<<endl;
            cout<<"Masukkan Pilihan : ";
            cin>>harga;
            if (harga==1) {
                cout<<"Biaya Operasi Jantung Koroner : Rp.500.000.000";
            } else if (harga==2) {
                cout<<"Biaya Operasi Katup Jantung : Rp.350.000.000";
            } else if (harga==3) {
                cout<<"Biaya Operasi Otot Jantung : Rp.450.000.000";
            } else {
                cout<<"Kode Yang Anda Masukkan Tidak Ada"<<endl;
            }
            break;
        default :
            cout<<"Kode Yang Anda Masukkan Tidak Ada"<<endl;
        }
    return 0;
}
