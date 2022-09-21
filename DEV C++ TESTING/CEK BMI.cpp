#include <iostream>
using namespace std;

int main(){
	float berat,tinggi,bmi;
	
	
	cout<<"MASUKAN TINGGI BADAN ANDA DALAM CM 	:		";
	cin>>tinggi;
	cout<<"MASUKAN BERAT BADAN ANDA DALAM KG	:		";
	cin>>berat;
	
	bmi = berat/(tinggi/100);
	
	cout<<"BMI anda adalah "<<bmi<<endl;
	
	if(bmi<18.5){
		cout<<"YOU'RE WAY TO SKINNY";
	}else if(bmi>18.5 && bmi<=22.9){
		cout<<"You're normal";
	}else if(bmi>23 && bmi<=24.9){
		cout<<"You're overweight";
	}else if(bmi>25 && bmi<=29.9){
		cout<<"You're too fat";
	}else if(bmi>25 && bmi<=29.9){
		cout<<"You're too fat";	
	}else if(bmi>30 && bmi<=39.9){
		cout<<"You're too fat2";
	}else{
		cout<<"YOU'RE WAY TOO FAT";
	}
}

