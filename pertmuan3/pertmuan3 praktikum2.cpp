#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	// post-increment (a++): variabael 'a' digunakan dulu, baru ditambah 1
	int b = a++; // b = 5, a = 6
	
	cout << "Post-increment:" << endl;
	cout << "Nilai a setelah a++: " << a << endl; // a sekarang 6
	cout << "Nilai b: " << b << endl; // b mengambil nilai sebelum a ditambah, jadi b = 5
	
    int c = 5;
	
	// Pre-increment (++c): variabel 'c' ditambah dulu, baru digunakan
	int d = ++c; // c = 6, d = 6
	
	cout << "\nPre-inceremt:" << endl;
	cout << "Nilai c setelah ++c: " << c << endl; // c sekarang 6
	cout << "Nilai d: " << d << endl; // d mengambil nilai setelah a ditambah, jadi d = 6
	cout << "Nilai d: " << d << endl;
	
}
