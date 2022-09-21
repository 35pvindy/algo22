#include <iostream>
using namespace std;

#define tinggi 10
#define garis "@@@@@@@@@@@@@@@@@@@@@@@@@"

int main()	{
	const float pi = 3.14;
	
	double vol,r;
	
	cout<<"Program mencari volume kerucut"<<endl;
	
	cout<<"Masukan jari-jari: "; cin>>r;
	
	cout<<garis<<endl;
	
	vol = (pi * r * r * tinggi) / 3;
	
	cout<<"Volume kerucut adalah: "<<vol;
	
	return 0;
}
