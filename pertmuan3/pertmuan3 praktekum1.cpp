#include <iostream>
using namespace std;

int main()
{
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Massukan nilangan kesatu : ";
	cin >> x;
	cout << "Masukkan bilangan kedua : ";
	cin >> y;
	
	tambah = x+ y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	
	cout << "                             " << endl;
	cout << "Hasil penjumlahan : " << tambah << endl;
	cout << "Hasil pengurangan : " << kurang << endl;
	cout << "Hasil perkalian : " << kali << endl;
	cout << "Hasil pembagian : " << bagi << endl;
	
	return 0; 
}
