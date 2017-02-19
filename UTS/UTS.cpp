#include <iostream>
using namespace std;

// Program Kalkulator (Aritmatika dan Relasional)
// I.S Program Menginput Angka dan Mengolah Data
// F.S Program Menampilkan Hasil Perhitungan Angka 



	//Prototype
int tambah (int a, int b);
int kurang (int a, int b);
int kali   (int a, int b);
int bagi1  (int a, int b);
int bagi2  (int a, int b);
    
    
int main () {

						// Kamus    
    int a,b ;    
    cout << "======== > Kalkulator Elga < ========" << endl << endl;
    
    // Input Angka Ke-1
    cout << "Masukan Angka ke-1: ";
    cin >> a;
    
    // Input Angka Ke-2
    cout << "Masukan Angka ke-2: "; 
    cin >> b;
    
    cout << endl; // Enter
    
						//ARITMATIKA
    cout << "======== > Hasil Aritmatika< ========" << endl << endl;
    
    // Pertambahan
    cout << "Hasil Pertambahan : " << tambah (a, b) << endl; 

    //Pengurangan
    cout << "Hasil Pengurangan : " << kurang (a, b) << endl;

    //Perkalian
    cout << "Hasil Perkalian   : "  << kali (a, b) <<endl;

    //Pembagian (Division/Div) Tanpa Sisa
    cout << "Hasil Pembagian   : " << bagi1 (a, b) <<endl;

    //Pembagian (Modulus/Mod) Dengan Sisa Pembagian
    cout << "Hasil Sisa Pembagian : " << bagi2 (a, b) <<endl << endl;
    
	
	
						//RELASIONAL
    
cout << "======== > Hasil Relasional < ========" << endl << endl;
    
//Jika Angka ke-1 Sama dengan B (==)
if (a == b) { cout <<" Angka ke-1 sama dengan Angka ke-2  " << endl; } 
else { cout << " Angka ke-1 Tidak sama dengan Angka ke-2 " << endl; }
 
//Jika Angka ke-1 Tidak sama Angka ke-2 (!=)
if (a != b) { cout << " Angka ke-1 Tidak sama dengan Angka ke-2" << endl; } 
else { cout << " Angka ke-1 sama dengan Angka ke-2" << endl; }
  
//Jika Angka ke-1 Kurang dari sama dengan Angka ke-2 (<=)
if (a <= b) { cout << " Angka ke-1 Kurang dari Angka ke-2 " << endl; } 
else { cout << "Angka ke-1 Lebih Besar dari Angka ke-2 " << endl; }
    
//Jika Angka ke-2 Lebih dari sama dengan Angka ke-1 (>=)
if (a >= b) { cout << " Angka ke-1 Lebih Besar dari Angka ke-2 " << endl; }
else { cout << " Angka ke-1 Kurang dari Angka ke-2" << endl; }
    
//Jika Angka ke-1 Kurang dari Angka ke-2 (<)
if (a < b) { cout << " Angka ke-1 Lebih Kecil dari Angka ke-2 " << endl; } 
else { cout << " Angka ke-1 Tidak Lebih Kecil dari Angka ke-2 " << endl; }
    
//Jika Angka ke-1 Lebih dari Angka ke-2(>)
if (a > b) { cout << " Angka ke-1 Lebih Besar dari Angka ke-2" << endl; } 
else { cout << " Angka ke-1 Tidak Lebih Besar dari Angka ke-2" << endl; }
     

return 0;
}

        //Fungsi Aritmatika

        //Pertambahan
int tambah (int a, int b) {
return a + b;
        }

        //Pengurangan
int kurang (int a, int b) {
return a - b;
        }

        //Perkalian
int kali (int a, int b) {
return a * b;
        }

        //Pembagian Div
int bagi1 (int a, int b) {
return a / b;
        }

        //Pembagian Modulus
int bagi2 (int a, int b) {
return a % b;
        }