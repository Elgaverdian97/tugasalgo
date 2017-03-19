#include <iostream>
using namespace std ;
// I.S program menunggu input angkat
// F.S program menampilkan angka yang telah di proses

	int main (){
		//kamus 
	int jumlahmahasiswa = 0, mahasiswaL = 0, mahasiswaTL=0;
		
	float IP , total = 0, Rata;
	
	while (IP > -999 ) {
		if (IP >= 0 && IP <=4 ) {
			jumlahmahasiswa++;
			total = total + IP;
			if( IP >= 2.75){
				mahasiswaL++;
			} else {
				mahasiswaTL++;
			}
		}
	cout << "Masukan nilai IP : ";
	cin >> IP;
	}
		//output
		cout << endl;
		cout << "Jumlah Mahasiswa : " << jumlahmahasiswa << endl;
		cout << "Jumlah Mahasiswa LULUS : " << mahasiswaL << endl;
		cout << "Jumlah Mahasiswa TIDAK LULUS: " << mahasiswaTL << endl;
		Rata = total / jumlahmahasiswa ;
		cout << "RATA - RATA IP :" << Rata;
		
		
		return 0;
	
	
	}