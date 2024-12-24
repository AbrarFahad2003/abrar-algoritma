#include <iostream>
using namespace std;
int main ()
{
	int i,j,baris,kolom,perhitungan,operasi;
	cout << "Masukan Jumlah Baris = ";
	cin >> baris;
	cout << "Masukan Jumlah Kolom = ";
	cin >> kolom;
	
	int m1[baris][kolom];
	int m2[baris][kolom];
	cout << "MATRIKS 1 " << endl;
	for(int i = 1; i <= baris; i++) {
		for(int j = 1; j <= kolom; j++) {
			cout << " Input nilai : [" << i << "] [" << j << "] = ";
			cin >> m1[i][j];
		}
	}
	cout << endl;
	
	cout << "MATRIKS 2 " << endl;
	for(int i = 1; i <= baris; i++) {
		for(int j = 1; j <= kolom; j++) {
			cout << " Input nilai : [" << i << "] [" << j << "] = ";
			cin >> m2[i][j];
		}
	}
	cout << endl;
	cout << "Operasi yang tersedia" << endl;
	cout << "Penjumlahan = 1 | Pengurangan = 2 | Perkalian = 3 " << endl;
	cout << "Pilih operasi yang diinginkan = ";
	cin >> operasi;
	cout << endl;
	if(operasi == 1) {
		cout << "Menampilkan penjumlahan matirks : " << endl;
		for(int i=1; i<=baris; i++) {
			for(int j = 1; j <= kolom; j++) {
				cout << m1[i][j] + m2[i][j] << "\t";
			}
			cout << endl;
		}
	} else {
		if(operasi == 2) {
			cout << "Menampilkan pengurangan matriks : " << endl;
			for(int i=1; i<=baris; i++) {
				for(int j = 1; j <= kolom; j++) {
					cout << m1[i][j] - m2[i][j] << "\t";
				}
				cout << endl;
			}
		} else {
			if(operasi == 3) {
				cout << "Hasil perkalian matriks : " << endl;
				for(int i=1; i<=baris; i++) {
					for(int j=1; j<=kolom; j++) {
						cout << m1[i][j] * m2[i][j] << "\t";
					}
					cout << endl;
				}
			} else {
				
			}
		}
	}
	return 0;
}
