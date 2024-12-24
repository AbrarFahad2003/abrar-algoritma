#include <iostream>
using namespace std;
int main () //menyatakan awal dari program inti c++ yang akan di output
{
	int hasil[3][5]; //bentuk umum array -- 3 = baris dan 3 = kolom
	//looping untuk menginput nilai hasil penjualan
	for (int a = 0; a < 3; a++) { //untuk variable a mulai dari 0 akan increment sampai < 3 atau sampai 
		for (int b = 0; b < 3; b++) { //untuk variable a mulai dari 0 akan increment sampai < 3
			cout << "Data " << a << " - " << b << " = "; //output Data dengan mengeluarkan nilai a dan b
			cout << "\nJumlah Penjumlahan = "; //endl dan output "jumlah dan penjumlahan"
			cin >> hasil[a][b]; //menginput nilai array untuk pertama dari indeks [0][0] sampai [2][2]
		}
	}
	
	cout << "\nHASIL PENJUALAN BARANG";
	cout << "\n======================";
	cout << "\n2001 | 2002 | 2003 |";
	cout << "\n======================";
	cout << endl;
	
	//Looping untuk mengeluarkan nilai indeks array
		for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			cout << hasil[a][b] << "   |\t";
		}
		cout << endl;
	}
	
	return 0;
	
}
