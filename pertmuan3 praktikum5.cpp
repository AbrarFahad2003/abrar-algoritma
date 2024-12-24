#include <iostream>
using namespace std;

int main()
{
	int a, b, c = 0, d = 0;
//  clrscr();

    cout << "Masukkan Nilai A : "; cin >> a;
    cout << "Masukkan Nilai B : "; cin >> b;
    
    c = a % b;
    d = a * b;
    
    cout << "Hasil dari C = A % B = " << c << endl;
    cout << "Hasil dari D = A * B = " << d << endl;
    
    getchar(); 
}
