#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int pilihan, bil[10], minimal, maximal;
    float rata_rata,jumlah;
    menu:
    system("cls");
    cout<<"\t\tMENU\n";
    cout<<"1. Input Array\n";
    cout<<"2. Tampilkan Array\n";
    cout<<"3. Cari Nilai Minimum\n";
    cout<<"4. Cari Nilai Maksimum\n";
    cout<<"5. Hitung Rata-Rata\n";
    cout<<"6. Keluar\n";
    cout<<"Masukkan Pilihan : ";
    cin>>pilihan;

    switch (pilihan) {
    case 1:
        for (int i=0; i<10; i++) {
            cout<<"Masukkan bilangan ke "<<i+1<<" : ";
            cin>>bil[i];
        }
        cout<<"Press any key to continue ...";
        getch();
        goto menu;
    case 2:
        for (int i=0; i<10; i++) {
            cout<<bil[i]<<endl;
        }
        cout<<"Press any key to continue ...";
        getch();
        goto menu;
    case 3:
        minimal=bil[0];
        for (int i=0; i<10; i++) {
            if (bil[i]<minimal) {
                minimal=bil[i];
            }
        }
        cout<<"Nilai Minimumnya Adalah "<<minimal<<endl;
        cout<<"Press any key to continue ...";
        getch();
        goto menu;
    case 4:
        maximal=bil[0];
        for (int i=0; i<10; i++) {
            if (bil[i]>maximal) {
                maximal=bil[i];
            }
        }
        cout<<"Nilai Maximalnya Adalah "<<maximal<<endl;
        cout<<"Press any key to continue ...";
        getch();
        goto menu;
    case 5:
        jumlah=0;
        for (int i=0; i<10; i++) {
            jumlah=jumlah+bil[i];
        }
        rata_rata=jumlah/10;
        cout<<"Rata-Ratanya Adalah "<<rata_rata<<endl;
        cout<<"Press any key to continue ...";
        getch();
        goto menu;
    case 6:
        break;
    default:
        cout<<"Menu tidak tersedia\n";
        cout<<"Press any key to continue ...";
        getch();
        goto menu;
    }
    return 0;
}
