#include <iostream>
using namespace std;
int main()
{
	int nilai_a, nilai_b, nilai_c;
	string nama_siswa;
	cout<<"program hitung nilai rata rata" <<endl;
	cout<<"nama_siswa :";
	getline(cin,nama_siswa);
	cout<< "Nilai pertandingan 1 = ";
	cin>> nilai_a;
	cout<< "Nilai pertandingan 2 = ";
	cin>> nilai_b;
	cout<< "Nilai pertandungan 3 = ";
	cin>> nilai_c;
	
	double total = (nilai_a + nilai_b + nilai_c)/3;
	cout<< "siswa yang pertama "<<nama_siswa <<endl;
	cout<< "Meperoleh nilai rata-rata "<<total<<"dari hasil perlombaan diikutinya "<<endl;
	
	if(total>=85)
	{
		cout<<"maka mendapat hadiah komputer intel coreb i5";
	}
	else if (total>=70)
	{
		cout<<"maka mendapat hadiah uang sebesar Rp.2.500.000";
	}
	else
    {
	   	cout<<"maka mendapat hadiah hiburan";
	}
	getchar ();
}

