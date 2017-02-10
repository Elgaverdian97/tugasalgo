#include <iostream>
 
 #define PHI 3.14 // konstanta
 
 using namespace std;
 
// I.S Program mencari ukuran lingkaran
// F.S Menampilkan Program hitung luas jari jari

	int main (){
		float jari_jari, luas ;  // buat variable dengan type float

		
		// konstanta
		jari_jari = 25;  // buat variable dengan type float

		
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout << "data lingkaran";
	cout << "\njari-jari :" << jari_jari; //menampilkan jari_jari lingkaran
	cout <<"nluas : " <<luas; //menampikan luas lingkaran
	cout<<"\n";
	return 0; //akhiri program
		
	}