#include <iostream>
//tempat program dijalankan
using namespace std;
// instruksi terkait penggunaan fungsi
int main()
//program dieksekusi
{
    int gaji_pokok, jam_lembur, tunjangan, uang_lembur, gaji_total;
    //int digunakan untuk mendeklarasikan variabel merupakan bilangan integer
    cout<<"Masukkan Gaji Pokok : ";
    //meminta data
    cin>>gaji_pokok;
    //mamasukkan data ke variabel
    cout<<"Masukkan Jam Lembur : ";
    //meminta data
    cin>>jam_lembur;
    //memasukkan data ke variabel
    cout<<"Gaji Pokok         : "<<gaji_pokok<<endl;//endl digunakan untuk membuat baris baru
    //menampilkan gaji pokok
    tunjangan=gaji_pokok*0.1;
    //menghitung jumlah tunjangan
    cout<<"Jumlah Tunjangan   : "<<tunjangan<<endl;//endl digunakan untuk membuat baris baru
    //menampilkan jumlah tunjangan
    uang_lembur=jam_lembur*100000;
    //menghitung jumlah uang lembur
    cout<<"Jumlah Uang Lembur : "<<uang_lembur<<endl;//endl digunakan untuk membuat baris baru
    //menampilkan jumlah uang lembur
    gaji_total=gaji_pokok+tunjangan+uang_lembur;
    //menghitung gaji total
    cout<<"Gaji Total         : "<<gaji_total<<endl;//endl digunakan untuk membuat baris baru
    //menampilkan gaji total
    return 0;
    //mengakhiri program dan kembali ke semula
}
