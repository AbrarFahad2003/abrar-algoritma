#include <iostream>
using namespace std; //ini berguna untuk membrikan kolom seyiap perintah yang ada di dalam "int main()()"
int main()
{
	// inisialisasi varabel
	int x=50; // huruf "x" adalah variabel dari angka "50"
	
	 int a,b,c,d,e; //ini adalah variabel huruf a,b,c,d,e;
	 //proses
	a = x > 5 + 5; //variabel a adalah variabel x lebih besar dari pada 5 + 5(10)
	b = x > 100;//variabel b adalah variabel x lebih besar dari pada 100
	c = a&& b; //variabel c adalah vailabel antara nilai variabel a dan b "&&" boolean bernilai benar jika keduanya benar, selain itu salah 
	d = a||b;//variabel d adalah variabel antara nilai variabel a dan b "||" boolean bernilai benar jika salah satu atau keduanya benar, selain itu
	e =!(c);//variabel e adalah variabel kebalikan nya dari boolean variabel c 
	//output berupa 1(benar) dan 0(salah)
	cout<<"\nNilai a = x > 5 + 5 = "<< a<<endl;//variabel a bernilai boolean benar karena variabel x lebih besar dari 5 + 5(10)
	cout<<"\nNilai b = x > 100 = "<< b<<endl;//variabel b bernilai boolean salah karena variabel x lebih kecil daripada 100
	cout<<"\nNilai c = a && b = "<< c<<endl;//variabel c bernilai boolean salah karena vailabel nilai a dan b salah satunya tidak benar 
	cout<<"\nNilai d = a || b = "<< d<<endl;//variabel c bernilai boolean benar karena variabel nilai antara a dan b salah satunya benar
	cout<<"\nNilai e = ! (c) = "<< e<<endl;//variabel e bernilai boolean benar karena variabel nilai e adalah kebalikan dari boolean nilai variabel
	getchar();// mencari data bertipe karakter
	
	
}
