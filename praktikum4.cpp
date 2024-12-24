#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x, y, z;
	
	cout << "Masukkan NPM Anda : ";
	cin >> x;
	cin.ignore();
	cout <<"\nMasukkan Nama Anda : ";
	getline (cin, y);
	cout << "Masukkan Alamat Anda : ";
	getline(cin, z);
	
	cout << endl;
	cout << "NPM Anda Adalah : " << x << endl;
	cout << "Nama Anda Adalag : " << y << endl;
	cout << "Alamat Anda Adalah : " <<z;
	
	return 0;
	
}
