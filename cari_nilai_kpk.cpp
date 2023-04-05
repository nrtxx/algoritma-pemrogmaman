#include <iostream>

using namespace std;
int main()
{

 int p,q,kpk;
 kpk=0;

 cout<<"Masukkan bilangan ke-1 : "; cin>>p;
 cout<<"Masukkan bilangan ke-2 : "; cin>>q;

 for(int x=1;x<=q;x++)
 {
  kpk=kpk+p;
          if(kpk % q==0)
      {
       cout<<"KPK : "<<kpk;
       break;
      }
 }
 return 0;
}
