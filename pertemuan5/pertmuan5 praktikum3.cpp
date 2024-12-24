#include <conio.h>
#include <iostream>

using namespace std;
int a, b, c, d, f,

main (){
	do{
		cout<<"masukkan nilai n(banyak deret) yang anda ingikan tampil :";
		cin>>a;
		cout<<endl;
		b=0;
		c=1;
		cout<<b<<" "<<c<<" ";
		for(int e=0;e<a-2;e++){
			
			d=c+b;
			b=c;
			c=d;
			cout<<d<<" ";
		}
cout<<endl;
cout<<"ulangi tulis 1"<<endl;

cin>>f;

	}while(f==1);	
}
