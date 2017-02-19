#include <iostream>
using namespace std;

int main () {
			
		int A = 20;
		int *p;
		
		p = &A;
		
		cout << "Nilai dari A:";
		cout << A << endl ;
		
		cout << "Alamat variable A:";
		cout << p << endl;
		
		cout << "NIlai dari *p:";
		cout << *p << endl;
		}