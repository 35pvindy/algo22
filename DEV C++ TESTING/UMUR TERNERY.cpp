#include <iostream> //pada baris berguna untuk memasukan library iostream
using namespace std;

int main(){
	int umur; //pada baris ini kita mendklarasikan bahwa variabel 'umur' itu adalah suatu data tipe integer
	cout<<"Masukan umur anda: "; //pada baris ini kita akan mengeluarkan suatu text di dalam petik dua("_") tersebut
	cin>>umur; //pada baris ini, program akan meminta user untuk memasukan suatu data untuk variabel 'umur'
	
	(umur>=17) ? (cout<<"Anda sudah dewasa") : (cout<<"Anda belum dewasa"); //pada baris ini menggunakan operasi ternery, utk 
	//ekspresi 1 (kurung pertama) akan menjadi patokan suatu program, jika eksperesi 1 benar maka akan dikeluarkan ekspresi 2 yaitu "Anda sudah dewasa"
	//apabila sebaliknya jika suatu data tidak memenuhi ekspresi pertama, maka akan di keluarkan ekspresi ke3 yaitu "Anda belum dewasa"

	}
