#include <iostream>
#include<conio.h>
#define harga 4500.02
using namespace std;

int main()
{
	float jumlah, total;
	
	cout << "Masukkan jumlah barang = ";
	cin >> jumlah;
	
	total = harga * jumlah;
	
	cout << "\nYang harga dibayar = " << total;
	
	getch();
}
