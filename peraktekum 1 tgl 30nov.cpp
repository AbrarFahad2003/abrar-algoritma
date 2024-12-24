#include <iostream>
using namespace std;

void siswa ()
{
	string nama = "Abrar";
	string jk = "perempuan";
	cout << nama << "adalah seorang" << jk <<endl;
}

string siswi ()
{
	string nama = "Fahad";
	string jk = "laki - laki";
	return (nama + " adalah seorang " + jk );
}

int main ()
{
	siswa(); //Fungsi void tiak memerlukan 'cout' 
	cout<< siswi() << endl; //Fungsi non-void mengembalikan nilai, maka butuh 'cout'
}
