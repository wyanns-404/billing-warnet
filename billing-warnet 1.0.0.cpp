#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int lama_bermain;
string biling[4]={"","Open","Perjam","Malam"};
int paid(string paket){
	int harga=0;
	if(paket==biling[1]){
		harga=lama_bermain*100;
	}
	if(paket==biling[2]){
		harga=lama_bermain*5000;
	}
	return harga;
}
void waktu_main(string nama,int pc){
	int jam=0,menit=0,detik=0;
	while(!kbhit()){
		detik++;
		Sleep(10);
		if(menit>59){
			jam++;
			menit=0;
		}else if(detik>59){
			menit++;
			detik=0;
		}
		system("CLS");
		
		cout<<"\t\t==========================================\n";
		cout<<"\t\t||-----Billing anda sedang berjalan-----||\n";
		cout<<"\t\t==========================================\n";
		cout<<"\t\t|USER   : "<<nama<<"\n";
		cout<<"\t\t|PC NO  : "<<pc<<"\n";
		cout<<"\t\t|TIME   : "<<jam<<':'<<menit<<':'<<detik<<endl;
		cout<<"\t\t==========================================\n";
		cout<<"\t\t||--Tekan ENTER untuk berhenti bermain--||\n";
		cout<<"\t\t==========================================\n";
	}
	lama_bermain=(jam*60)+menit;
}

int main(){

	int pilih, kode_pc;
	string nama, start;
	
	cout<<"=============================================\n";
	cout<<"||----Selamat Datang di Warnet SansSkuy----||\n";
	cout<<"=============================================\n\n";


	cout<<"Silahkan pilih menu paketan yang anda inginkan!\n\n";

	cout<<"[1] Paket "<<biling[1]<<"\n";
	cout<<"[2] Paket "<<biling[2]<<"\n";
	cout<<"[3] Paket "<<biling[3]<<"\n\n\n";

	cout<<"---Keterangan--- \n";
	cout<<"* Paket Open\n  - Pembayaran diakhir, dihitung lamanya bermain\n  - Harga Rp. 100 / menit\n";
	cout<<"* Paket Perjam\n  - Harga Rp. 5.000 / Jam\n";
	cout<<"* Paket Malam\n  - Harga Rp. 20.000\n  - Dimulai dari jam 23.00 - 05.00\n\n";
	
	
	do
	{
		cout<<"Masukan pilihan anda [1][2][3] = ";
		cin>>pilih;
		cout<<"\nTunggu sejenak...\n";


	
		if(biling[pilih]=="Open"){
			system("CLS");
			cout<<"=============================================\n";
			cout<<"-----------Anda memilih Paket Open-----------\n";
			cout<<"----------Silahkan isi data dibawah----------\n";
			cout<<"=============================================\n";
			cout<<"Nama User\t\t\t: ";
			cin>>nama;
			cout<<"Kode PC (Nomor)\t\t\t: ";
			cin>>kode_pc;
			cout<<"Ketik R untuk memulai billing\t: ";
			cin>>start;
			cout<<"=============================================\n";
			cout<<"\nTunggu sejenak, billing anda akan otomatis berjalan.\n";
			
			waktu_main(nama,kode_pc);
			
			cout<<"==========================================================\n";
			cout<<"Total Pembayaran : "<<paid(biling[pilih])<<" Rupiah \n";
			

		}

		else if(biling[pilih]=="Perjam"){
			system("CLS");
			cout<<"=====================================\n";
			cout<<"------Anda memilih Paket Perjam------\n";
			cout<<"------Silahkan isi data dibawah------\n";
			cout<<"=====================================\n";
			cout<<"Nama User\t\t: ";
			cin>>nama;
			cout<<"Kode PC (Nomor)\t\t: ";
			cin>>kode_pc;
			cout<<"Lama Bermain (Jam)\t: ";
			cin>>lama_bermain;
			cout<<"=====================================\n\n";
			
			system ("CLS");
			cout<<"==========================================================\n";
			cout<<"Atas nama "<<nama<<" Telah memilih Paket Perjam\nDengan menggunakan PC nomor "<<kode_pc<<" \nAkan bermain selama "<<lama_bermain<<" jam.";
			cout<<"\nTotal Pembayaran : "<<paid(biling[pilih])<<" Rupiah \n";

		}
		else if(biling[pilih]=="Malam"){
	
			system("CLS");
			cout<<"================================\n";
			cout<<"---Anda memilih Paket Malam-----\n";
			cout<<"---Silahkan isi data dibawah----\n";
			cout<<"================================\n";
			cout<<"Nama User\t: ";
			cin>>nama;
			cout<<"Kode PC (Nomor)\t: ";
			cin>>kode_pc;
			cout<<"================================\n\n";
			
			system ("CLS");
			cout<<"==========================================================\n";
			cout<<"Atas nama "<<nama<<" Telah memilih Paket Malam\nDengan menggunakan PC nomor "<<kode_pc;
			cout<<"\nTotal Pembayaran : Rp 20.000\n";

		
		}
		else{
			cout<<"Pilihan anda tidak tersedia\n";
		
		} 
	}while (pilih == 0);
	
	cout<<"==========================================================\n";
	cout<<"||--Terimakasih telah menggunakan jasa Warnet SansSkuy--||\n";
	cout<<"==========================================================\n";
	
	
	
	
	
	
	return 0;
	
	
}