#include <iostream>

using namespace std;

int main()
{
    int x, jumlah=1;
    cout<<"Masukkan Bilangan Faktorial: ";
    cin>>x;
    cout<<x<<"! = ";
    for (int i=x; i>=1; i--) {
        jumlah *=i;
        if (i!=1) {
            cout<<i<<" * ";
        } else {
            cout<<i<<" = ";
            }
    } cout<<jumlah<<endl;
    return 0;
}
