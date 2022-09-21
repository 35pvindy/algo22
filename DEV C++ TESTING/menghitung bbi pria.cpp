#include <iostream>
using namespace std;

int main(){
	float berat,tinggi,bbi;
	
	
	cout<<"MASUKAN TINGGI BADAN ANDA DALAM CM 	:		";
	cin>>tinggi;
	cout<<"MASUKAN BERAT BADAN ANDA DALAM KG	:		";
	cin>>berat;
	
	// Pria: Berat badan ideal (kilogram) = [tinggi badan (sentimeter) – 100] – [(tinggi badan (sentimeter) – 100) x 10 persen]
	bbi = (tinggi - 100)-(tinggi - 100)* 0,1;
	cout<<"BERAT BADAN IDEAL ANDA ADALAH : "<<bbi<<" KG";
}
