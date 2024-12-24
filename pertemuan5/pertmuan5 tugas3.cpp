#include <iostream>
using namespace std;
int main() {
	int angka;
	int BukanPrima=0;
	int i;
	
	cout<<"Masukkan bilangan";
	cin>> angka;
	
	if (angka < 2) {
		cout<< angka<< "bukan bilangan prima. "<<endl;
	}   else {
		for (i=2; i<= angka / 2; i++) {
			if (angka % i==0) {
				BukanPrima =1;
			}
		}
	}
	if (BukanPrima ==0) {
		cout<< angka <<"adalah bilangan prima. " <<endl;
	}	else {
		cout<< angka <<"bukan bilangan prima. "<<endl;
	}
}
