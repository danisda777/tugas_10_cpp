#include <iostream>
using namespace std;

void perkalian (){
	cout<<"Selamat Datang Di Fungsi Perkalian\n";
}
void angka (float x,float y, float c){

	cout<<"Hasil Perkalian AxB+C : "<<x*y+c;
}

int main (){
	perkalian();
	float a,b,c;
	cout<<"Masukkan Nilai A : ";
	cin>>a;
	cout<<"Masukkan Nilai B: ";
	cin>>b;
	cout<<"Masukkan Nilai C : ";
	cin>>c;
	angka(a,b,c);
	return 0;
}
