#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double jumlah(int x, int z) {
	int y;
	y=x+z;
	return y;
}
double kurang(int x, int z) {
	int y;
	y= x-y;
	return y;
}
double kali(int x, int z) {
	int y;
	y= x * z;
	return y;
}
double bagi(int x, int z) {
	float y;
	y = x / z;
	return y;
}
int main() {
	int x, z, hasil1, hasil2, hasil3, hasil4;
	cout<< " nayeon always me" << endl;
	cout<< "masukan nilai a: ";
	cin >> x;
	cout << "masukan nilai b : ";
	cin >> z;
	cout << endl;
	/*Operasi Penjumlahan*/
	hasil1 = jumlah(x, z);
	cout<< "Penjumlahan:";
	cout<< hasil1<<endl;
	/*Operasi Pengurangan*/
	hasil2 = kurang(x, z);
	cout<< "Pengurangan:";
	cout<< hasil2<<endl;
	/*Operasi Perkalian*/
	hasil3 = kali(x, z);
	cout<< "Perkalian:" ;
	cout<< hasil3<<endl;
	/*Operasi Pembagian*/
	hasil4 = bagi(x, z);
	cout<< "Pembagian:";
	cout<< hasil4<<endl;
	
	cin.get();
	return 0;
}
