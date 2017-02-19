#include <iostream>
using namespace std;

int double_it ( int *x, int *y);
int triple_it ( int *x, int *y);
int main () {
	int x, y;
	cout << "masukan dua angka (pisahkan dengan spasi ex: 1 2):" <<endl;
	
	cin >> x >> y;
	cout << " sebelum melewati fungsi double_it " <<endl;
	
	cout << "x \t = \t" << x << endl;
	cout << "y \t = \t" << y << endl;
	double_it(&x , &y);
	cout << " setelah melewati fungsi double_it" <<endl;
	
	cout << "x \t = \t" << x << endl;
	cout << "y \t = \t" << y << endl;
	triple_it(&x , &y);
	cout << " setelah melewati fungsi triple_it" <<endl;
	
	cout << "x \t = \t" << x << endl;
	cout << "y \t = \t" << y << endl;
	
	return 0;
	
}
int double_it(int *x, int *y){
	
	*x *=2;
	*y *=2;
return 0;
}
int triple_it(int *x, int *y){
	
	*x *=3;
	*y *=3;
return 0;
}