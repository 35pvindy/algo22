#include <iostream>
using namespace std;

int main(){
	int kelamin;
	float berat, tinggi, bmi, broca, meter;
	
	cout<<"1. Pria"<<endl;
	cout<<"2. Perempuan"<<endl;
	
	cout<<"Masukan jenis kelamin 1 atau 2 : ";
	cin>>kelamin;
	cout<<"Masukan berat	: ";
	cin>>berat;
	cout<<"Masukan tinggi	: ";
	cin>>tinggi;
	
	meter=tinggi/100;
	
	bmi=(berat/(meter*meter));
	
	cout<<endl;

	cout<<"BMI		: "<<bmi<<" ";
	
	if (bmi<18.5){
        cout<<"(Kurus)"<<endl;
    }else if (bmi<=24.9){
        cout<<"(Normal)"<<endl;
    }else if (bmi<29.9){
        cout<<"(Overweight)"<<endl;
    }else {
        cout<<"(Obesitas)"<<endl;
    }
    
    switch(kelamin){
        case 1 : broca=((tinggi-100)-(0.10*(tinggi-100))); break;
        case 2 : broca=((tinggi-100)-(0.15*(tinggi-100))); break;
        default : broca=0;
    }
    
    if (kelamin==1 or kelamin==2){
    	int hasil = (int)broca;
    	cout<<"Berat badan ideal anda menurut rumus Broca : "<<hasil<<" KG"<<endl;
	}
    

}
