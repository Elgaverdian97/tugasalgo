#include <iostream>
using namespace std;

//PROGRAM JADWAL KERETA API

typedef struct{
	string hari;
	string bulan;
	string tahun;
}tanggal;

typedef struct{
	int jam;
	int menit;
	int detik;
}jam;

typedef struct{
	int noKA;
	string kotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotaTujuan;
	jam jamTiba;
	tanggal tanggalTiba;
}jadwalKA;

int main(){

	//kamus
	
	jadwalKA jadwalKeretaApi;
	
	jadwalKeretaApi.noKA=1;
	jadwalKeretaApi.kotaAsalKA="yogjakarta";
	jadwalKeretaApi.jamBerangkat.jam=10;
	jadwalKeretaApi.jamBerangkat.menit=20;
	jadwalKeretaApi.jamBerangkat.detik=5;
	jadwalKeretaApi.tanggalBerangkat.hari="senin";
	jadwalKeretaApi.tanggalBerangkat.bulan="11april";
	jadwalKeretaApi.tanggalBerangkat.tahun="2017";
	jadwalKeretaApi.kotaTujuan="bandung";	
	jadwalKeretaApi.tanggalTiba.hari="Minggu";
	jadwalKeretaApi.tanggalTiba.bulan="12april";
	jadwalKeretaApi.tanggalTiba.tahun="2017";
	jadwalKeretaApi.jamTiba.jam=23;
	jadwalKeretaApi.jamTiba.menit=15;
	jadwalKeretaApi.jamTiba.detik=15;
	
	
	cout << endl;
	cout << "<=============================>" << endl;
	cout <<"KEBERANGKATAN KAI"<<endl;
	cout << "<=============================>" << endl;
	cout << "NO KAI : " << endl;
	cout << jadwalKeretaApi.noKA<<endl;
		cout << "KOTA ASAL : " << endl;
	cout << jadwalKeretaApi.kotaAsalKA<<endl;
	cout<<endl;
		cout << "JAM KEBERANGKATAN : " << endl;
	cout << jadwalKeretaApi.jamBerangkat.jam<<endl;
	cout << jadwalKeretaApi.jamBerangkat.menit<<endl;
	cout << jadwalKeretaApi.jamBerangkat.detik<<endl;
	cout<<endl;
		cout << "TANGGAL KEBERANGKATAN : " << endl;
	cout << jadwalKeretaApi.tanggalBerangkat.hari<<endl;
	cout << jadwalKeretaApi.tanggalBerangkat.bulan<<endl;
	cout << jadwalKeretaApi.tanggalBerangkat.tahun<<endl;
	cout << endl;
	cout << "<==============================>" << endl;
	cout << "TIBA DI TEMPAT TUJUAN" << endl;
	cout << "<==============================>" << endl;
	cout<<endl;
		cout << "KOTA TUJUAN : " << endl;
	cout << jadwalKeretaApi.kotaTujuan<<endl;
	cout<<endl;
		cout << "TIBA TANGGAL : " << endl;
	cout<<endl;
	cout << jadwalKeretaApi.tanggalTiba.hari <<endl;
	cout << jadwalKeretaApi.tanggalTiba.bulan<<endl;
	cout << jadwalKeretaApi.tanggalTiba.tahun<<endl;
	cout<<endl;
		cout << "TIBA PUKUL : " << endl;
	cout << jadwalKeretaApi.jamTiba.jam<<endl;
	cout << jadwalKeretaApi.jamTiba.menit<<endl;
	cout << jadwalKeretaApi.jamTiba.detik<<endl;


	return 0;
}
