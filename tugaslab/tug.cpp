#include <iostream>
using namespace std;


//Program mencari nilai MAX dan MIN


int  main(){
int n,min,max,bil;
cout<<"== MENCARI NILAI MAX AND MIN == "<<endl;



min=n;
max=n;

//input
int i=1;
 do
  {cout<<"Input Nilai "<<i<<" = " ;
   cin>>bil;
    if ((bil>max))
            {
            max=bil;
                        }
	else if((bil<min))
            {
            min=bil;
            }
			
            

   i++;}
 while(i<=n);
//output
cout<<endl;
cout<<"Nilai maximal adalah : "<<max<<endl;
cout<<"Nilai minimal adalah : "<<min<<endl;


}





