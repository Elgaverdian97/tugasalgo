#include <iostream>
using namespace std;
  
  
  int main (){
  	//kamus 
  	int a =0;
  	string array[10];
  	cout <<"masukan elemen array :" << endl;
	  
	//perulangan
	for (int i=0; i<10; i++)
	{
		cout <<"elemen" << i+1 <<"=";
		cin >> array [i];
		
	} 
	
	cout << "masing masing elemen" <<endl;
	//perulangan
	for (int i=0; i<10; i++)
	{
		if (array[i] == "A"){
		
			a++;
	}
  	cout <<"elemen" << i+1 << "=" <<array[i] <<endl;
  	
  	
  	
  
}
  
  
  cout <<" jumlah kemnculan elemen A :" << a;
  return 0;
}
