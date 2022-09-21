#include <iostream>
#define garis "......................."
using namespace std;
int main(){
	int umur; string nama;
	cout<<"Masukan nama anda : "; cin>>nama;
	cout<<"Masukan umur anda : "; cin>>umur;
	cout<<garis<<endl;
	cout<<"Terima kasih "<<nama<<endl;
	cout<<"Umur anda "<<umur<<endl;
	(umur>17) ? cout<<"Anda Dewasa" : cout<<"Anda masih anak-anak";
	
}
