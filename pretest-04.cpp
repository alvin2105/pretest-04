/*
Nama program	: pretest-04 (linked list)
Nama			: Alvin
NPM				: 140810180013
tanggal			: 26 Maret 2019
Deskripsi		: SinglyList
tahun			: 2019
*/

#include<iostream>
using namespace std;

struct ELemlist{

	char npm[14];
	char nama[40];
	float ipk;
	Elemlist* next;
};
typedef Elemlist* pointer;
typedef pointer list;

void createlist(list& first){
	first=NULL;
}
void createData(pointer& pBaru){
	pBaru=new Elemlist;
	cout<<"Masukkan NPM\t: ";
	cin.ignore();
	cin.getline(pBaru->npm,20);
	cout<<"Masukkan Nama : ";
	cin.getline(pBaru->nama,40);
	cout<<"Masukkan IPK\t: ";
	cin>>pBaru->ipk;
	peg->next=NULL;
	
}
void insertSortNPM(list& first, pointer pBaru){
	pointer last=first;
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=pBaru;
}
void traversal(List first)
{
    pointer pBantu;
    pBantu=first;

    if(first==NULL)
    {
        cout<<"List kosong" <<endl;
    }
    else
    {
        int i=1;

        pBantu=first;
        cout<<"No\t NPM\t\t\t Nama\t\t IPK" <<endl;
        cout<<"=======================================================" <<endl;
        do
        {
            cout<<i <<"\t"<<pBantu->npm <<"\t\t" <<pBantu->nama <<"\t\t" <<pBantu->ipk <<endl;
            pBantu=pBantu->next;
            i++;
        }
        while(pBantu!=NULL);
    }
}
int main(){
	
	list first;
	pointer pBaru,pHapus;
	char lanjut;
		cout<<"--------DATA MAHASISWA------"<<endl;
		createlist(first);
	do{
		createData(pBaru);
		insertFirst(first,pBaru);
		cout<<"(Y/N)\t: ";
		cin>>lanjut;
	}while(lanjut=='y'||lanjut=='Y');
	traversal(first);
