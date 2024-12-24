#include <iostream>
using namespace std;
int main()
{
	int bj,i,a,j;
	int harga[3] = {2500, 2000, 1500};
	int bp [100];
	int jumlah[100];
	string kode[3] = {"D","P","S"}, jenis[3] = {"Dada","Paha","sayap"};
	
//	PAPAN MENU
	cout << "GEROBAK FRIED CHICKEN " << endl;
	cout << "------------------------" << endl;
	cout << "Kode" << "     " << "Jenis" << "     " << "Harga " << endl;
	cout << "--------------------------------" << endl;
	cout << " " << kode[0] << "\t " << jenis[0] << "\t " << "  Rp." << harga[0] << endl;
	cout << " " << kode[1] << "\t " << jenis[1] << "\t " << "  Rp." << harga[1] << endl;
	cout << " " << kode[2] << "\t " << jenis[2] << "\t " << "  Rp." << harga[2] << endl;
	cout << "--------------------------------" << endl;
	
//	INPUT JUMLAH
	char jp[100];
	
	cout << "Banyak jenis : ";
	cin >> bj;
	for(i=1; i<=bj; i++) {
			cout << "\nJenis ke - " << i << endl;
			cout << "Jenis potong [D/P/S] : ";
			cin >> jp[i];
			cout << "Banyak potong        : ";
			cin >> bp[i];
	}
	cout << endl;
	
	
//	Layar keluaran
	int total,diskon;
	
	cout << "\t\t\tGEROBAK FRIED CHICKEN" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "No.		Jenis		Harga		Banyak		Jumlah" << endl;
	cout << "		Potong		Satuan		Beli		Harga " << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	for(a=1; a<=bj; a++) {
		cout << a << "\t\t";
	if(jp[a] == 'D'||jp[a] =='d') {
		cout << "Dada" << "\t\t" << harga[0] << "\t\t" << bp[a] << "\t\t";
		jumlah[a] = bp[a] * harga[0];
	} 
	else if(jp[a] == 'P'||jp[a] =='p') {
		cout << "Paha" << "\t\t" << harga[1] << "\t\t" << bp[a] << "\t\t";
		jumlah[a] = bp[a] * harga[1];
	} 
	else if(jp[a] == 'S'||jp[a] =='s') {
		cout << "Sayap" << "\t\t" << harga[2] << "\t\t" << bp[a] << "\t\t";
		jumlah[a] = bp[a] * harga[2];
	}
	 total += jumlah[a];
	 cout << jumlah[a]<< endl;
	}
	
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\tJumlah Bayar Rp." << total << endl;
	diskon = total * 0.1;
	cout << "\t\t\t\t\t\t   Pajak 10% Rp." << diskon << endl;
	cout << "\t\t\t\t\t\t Total Bayar Rp." << diskon + total;
	
	return 0;
}
