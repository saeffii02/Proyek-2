#include <iostream>
using namespace std;

#define max 10
string n[max], nik[max], kab[max], TTL[max], imunisasi[max], polio[max], campak[max], influenza[max], hepatitis_A[max], PCV[max],dengue[max], loop;
int pos=0;


void display(){
	system("cls");
	if(pos>0){
		cout<<"Data Tersimpan"<<endl;
		for(int a=0; a<pos; a++){
			cout<<a+1<<". Data Vaksin "<<endl;
			cout<<"  Nama : "<< n[a]<<endl;
			cout<<"  NIK : "<< nik[a]<<endl;
			cout<<"  kab : "<< kab[a]<<endl;
			cout<<"  Tempat, tanggal lahir : "<< TTL[a]<<endl;
			cout<<"       "<<endl;
			cout<<"usia 0-6 bulan "<<endl;
			cout<<"  Imunisasi : "<< imunisasi[a] <<endl;
			cout<<"  Polio : " << polio[a]<<endl;
			cout<<"usia 6-12 bulan "<<endl;
			cout<<"  Campak : "<< campak[a] <<endl;
			cout<<"  Influenza : " << influenza[a]<<endl;
			cout<<"usia 12-24 bulan"<<endl;
			cout<<"  Hepatitis A : "<< hepatitis_A[a] <<endl;
			cout<<"  PCV : " << PCV[a]<<endl;
			cout<<"usia 2-18 tahun "<<endl;
			cout<<"  Campak : "<< campak[a] <<endl; 
			cout<<"  Dengue : " << dengue[a]<<endl;
		}
	}else{
		cout<<"Data Kosong"<<endl;
	}
}
void add(){
	display(); 
	do{
		if(pos<max){
			cin.ignore();
			cout<<"Nama : ";
			getline(cin, n[pos]);
			cout<<"NIK : ";
			getline(cin, nik[pos]);
			cout<<"kab : ";
			getline(cin, kab[pos]);
			cout<<"Tempat, tanggal lahir : ";
			getline(cin, TTL[pos]);
			cout<<"usia 0-6 bulan "<<endl;
			cout<<"  Imunisasi : "; 
			getline(cin, imunisasi[pos]);
			cout<<"  Polio : ";
			getline(cin, polio[pos]);
			cout<<"usia 6-12 bulan "<<endl;
			cout<<"  Campak : "; 
			getline(cin, campak[pos]);
			cout<<"  Influenza : ";
			getline(cin, influenza[pos]);
			cout<<"usia 12-24 bulan"<<endl;
			cout<<"  Hepatitis A : ";
			getline(cin, hepatitis_A[pos]);
			cout<<"  PCV : ";
			getline(cin, PCV[pos]);
			cout<<"usia 2-18 tahun "<<endl;
			cout<<"  Campak : ";
			getline(cin, campak[pos]);
			cout<<"  Dengue : ";
			getline(cin, dengue[pos]);
			pos++;
			display();
			cout<<"ulangi (y/t) : ";
			cin>>loop;
		}else{
			cout<<"memori penuh"<<endl;
			cout<<"isi t untuk kembali";
			cin>>loop;
		}
	
	}while(loop=="y");
	cout<<"Tambahkan Data"<<endl;
}

void edit(){
	int y;
	do{
		display();
		cout << "Edit Data ke : ";
		cin>>y;
		cin.ignore();	
		cout<<"Edit data : ";
		getline(cin, n[y-1]);
		cout<<"Edit menjadi : ";
		display();
		cout << "ubah lagi (y/t) : ";
		cin >> loop;
	} while (loop == "y");
}

void del(){
	int x;
	do{
		display();
		if(pos>0){
			cout<<"hapus data ke : ";
			cin>>x;
			for(int i=x; i<pos; i++){
				n[i-1]=n[1];
			}
			pos--;
			display();
			cout<<"hapus lagi(y/t) : ";
			cin>>loop;
		}else {
			cout<<"isi t : ";
			cin>>loop;
		}
		
	}while(loop=="y");
}

int main(){
	int pil;
	do{
		system("cls");
		cout<<"1. Tambahkan Data\n";
		cout<<"2. Tampilkan Data\n";
		cout<<"3. Edit Data\n";
		cout<<"4. Hapus Data\n";
	
		cout<<"Pilihan : ";
		cin>>pil;
		switch(pil){
		case 1:
			add();
			break;
		case 2:
			do{
			display();
			cout<<"kembali (y) : ";
			cin>>loop;
		}while(loop !="y");
			break;
		case 3:
			edit();
			break;
		case 4:
			del();
			break;
		case 5:
			cout<<"....."<<endl;
			break;
		default:
			cout<<"pilih 1-4"<<endl;
			break;
		}
	}while(pil !=5);
	cout<<"Program Selesai";
	 
}

