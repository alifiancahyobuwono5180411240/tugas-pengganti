#include<conio.h>
#include <iostream>

using namespace std;
struct data{
char nip[20],nama[20],jk[20];};
data batas[100];
int a,jmldata,c,data;

void inputdata(){
	cout<<"\nJumlah Data Yang Akan diinput : ";cin>>jmldata;
   data=0;
   for(c=0;c<jmldata;c++){
   data=data+1;
   cout<<"\nData ke-"<<data<<endl;
   cout<<"NIP\t: ";cin>>batas[a].nip;
   cout<<"Nama\t: ";cin>>batas[a].nama;
   cout<<"jenis kelamin\t: ";cin>>batas[a].jk;
   a++;}
   }



void lihatdata(){
	int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNIP\t||\tNama\t\t||\jenis kelamin\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].nip<<"\t||";
  cout<<batas[i].nama<<"\t\t\t||";
  cout<<batas[i].jk<<"\t\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();}

void hapusdata(){
	int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++){
 batas[i]=batas[i+1];
 }

 cout<<"\n\n\n\n\n\n\n\n\n============================= Data ke-"<<x<<" Terhapus ========================================";
 getch();
	}

void editdata(){
	int m,n;
	cout<<"Masukan Data yang akan diedit : ";cin>>m;
	n=m-1;
	cout<<"NIP\t: ";cin>>batas[n].nip;
	cout<<"Nama\t: ";cin>>batas[n].nama;
	cout<<"jenis kelamin\t: ";cin>>batas[n].jk;
	lihatdata();
	}

int main(){
	int pilih;
 char jawab;
 cout<<"=============================PROGRAM STRUKTUR DATA============================="<<endl;
 cout<<"Created BY :"<<endl;
 cout<<"Nama\t: alifian cahyo buwono"<<endl;
 cout<<"NIM\t: 5180411240"<<endl;
 cout<<"Prodi\t: S1-Informatika"<<endl;
 cout<<endl<<endl<<endl;
  awal:
  cout<<"\n================================ PILIHAN MENU =================================";
  cout<<"\n1. input data pasien";
  cout<<"\n2. Hapus Data pasien";
  cout<<"\n3. Lihat Data pasien";
  cout<<"\n4. Edit Data pasien";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {hapusdata();goto awal;}
  if(pilih==3)
   {lihatdata();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)


return 0
;}
