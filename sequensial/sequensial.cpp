#include <iostream>
using namespace std;



int main (){
	int i;
	int cari,ketemu;
	int A[100];
	
	
	cout << "PROGRAM SEARCHING LINER" << endl;
	cout << "masukan 7 buah angka" << endl;
	
	for (i=1;i<=7;i++)
	{
		cout <<"Masukan data ke-"<<i<<" = ";
		cin>>A[i];
		
		
		
	}
	cout<<endl;
	cout<<"Masukan bilangan yang di cari: " <<endl;
	cin>>cari;
	
	ketemu=0;
	for(i=0;i<=7;i++)
	{
		if(A[i] == cari)
		{
			ketemu=1;
			cout<<"Data ditemukan pada index ke- "<<i;
		}
	}
		if (ketemu==0){
			cout <<"Data tidak ditemukan"<<endl;
		}
		
	
}

