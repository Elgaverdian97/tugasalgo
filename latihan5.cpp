
#include <iostream>
using namespace std;
	// I.S Program Mencari ukuran type data
	// F.S Menampilkan ukuran type data

	int main (){
		typedef int EGLA;
		cout << "ukuran char:" << sizeof (char)<<endl;                  // menampilkan ukuran type data char
		cout << "ukuran int :" << sizeof (EGLA) << endl;		// menampilkan ukuran type data Integer
		cout << "ukuran Short Int : " << sizeof(short int) << endl;     // menampilkan ukuran type data shor int
		cout << "ukuran Long Int : " << sizeof(long int) << endl; 	// menampilkan ukuran type data long int
		cout << "ukuran Float : " << sizeof(float) << endl; 		// menampilkan ukuran type data float
		cout << "ukuran Double : " << sizeof(double) << endl; 		// menampilkan ukuran type data double
		cout << "ukuran Wchar_t : " << sizeof(wchar_t) << endl; 	// menampilkan ukuran type data wchar_t	
	return 0; //akhiri program
	}
	
