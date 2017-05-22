#include <iostream>
using namespace std;
int main(){
 int Ar[10] = {1,2,3,4,5,6,7,8,9,10}; // untuk proses ascending
 int tar;
 
cout <<"Urutan Angka = 1,2,3,4,5,6,7,8,9,10"<<endl;
cout<<"masukan data yang dicari : ";
 cin>>tar;
int awal=0, akhir=10, tengah;


 while (awal <= akhir)
  { tengah = (awal + akhir)/2;
  if (tar > Ar[tengah] )      // descending ubah tanda > menjadi <
     { awal = tengah + 1; }
  else if (tar < Ar[tengah])  // descending ubah tanda < menjadi >
  {akhir= tengah - 1;}
  else {awal = akhir +1;
  }
   }
   if (tar == Ar[tengah])
   {cout<<" Data ditemukan, pada index Ke- "<<tengah+1<<endl;
   }
   else {
    cout<<"data tidak ditemukan "<<endl;
   }

}
