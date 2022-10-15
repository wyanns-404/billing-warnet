#include <iostream>
using namespace std;
int main(){
	string nama,npm,jurusan;
	int umur,thn;
	
	cout<<"";
	getline(cin,nama);
	cout<<"";
	getline(cin,npm);
	cout<<"";
	getline(cin,jurusan);
	cout<<"";
	cin>>thn;
	umur=2022-thn;
	
	cout<<"Nama Saya \""<<nama<<"\","<<endl;
	cout<<"umur saya \""<<umur<<" \Tahun"<<"\","<<endl;
	cout<<"dengan NPM \""<<npm<<"\","<<endl;
	cout<<"dari Jurusan "<<jurusan<<endl;
	
	
	
	
	
	return 0;
}