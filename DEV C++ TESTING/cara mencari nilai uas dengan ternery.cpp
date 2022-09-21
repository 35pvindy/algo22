#include <iostream>
using namespace std;
int main(){
	float nilai;//pada baris ini kita menentukan apa itu tipe data variabel 'nilai', yaitu float
	int uts,uas;//pada baris ini kita menentukan apa itu tipe data variabel 'uts' dan 'uas' yaitu int
	cout<<"Masukan nilai UTS anda : ";cin>>uts;//pada baris ini kita mengeluarkan text untuk meminta user memasukan data nilai uts dan sekaligus memasukan nilai dengan perintah cin
	cout<<"Masukan nilai UAS anda : ";cin>>uas;//pada baris ini kita mengeluarkan text untuk meminta user memasukan data nilai uas dan sekaligus memasukan nilai dengan perintah cin
	
	nilai = (uts + uas)/2;//pada baris ini kita menentukan variabel 'nilai' dengan cara memasukan rumus yang sudah diberikan sblmnya
	(nilai>=60)?(cout<<"Anda lulus!"):(cout<<"Anda tidak lulus");//pada baris ini kita menggunakan operasi ternery
	//ekspresi kedua akan keluar jika suatu data memenuhi syarat eksperesi pertama dan kebalikannya, jika ekspresi pertama tidak terpenuhi maka akan keluar eksperesi ketiga
}
