//Implementasi Program Linked - Stack
#include <iostream>
//#include <stdlib.h>
using namespace std;
struct node {
	int info;
	node *next;
} *top, *newptr, *save, *ptr;
node *createnewnode(int);
void push(node *);
void display (node *);
int main () 
{
	//clrscr;
	int inf;
	char ch = 'y';
	top = NULL;
	
	while (ch == 'y' || ch == 'Y') {
		cout << "Masukkan Node Baru : ";
		cin >> inf;
		newptr = createnewnode(inf);
		
		if (newptr == NULL) {
			cout << "\nMaaf.!!.. tidak dapat menjalankan perintah";
			cout << "\nTekan tombol apa saja untuk keluar...\n";
			getchar();
			exit(1);
		}
		push (newptr);
		cout <<"\nAntrian tumpukan saat ini : \n";
		display(top);
		cout <<"\nIngin menambah antrian ? (y/n) ";
		cin>>ch;
	}
	getchar ();
}
node *createnewnode (int x) {
	ptr = new node;
	ptr->info = x;
	ptr->next = NULL;
	return ptr;
}
void push(node *n) {
	if(top == NULL) {
		top = n;
	} else {
		save = top;
		top = n;
		n->next = save;
	}
}
void display (node *n) {
	while (n != NULL) {
		cout << n->info <<  " -> ";
		n = n->next;
	}
	cout <<" !!\n ";
}
