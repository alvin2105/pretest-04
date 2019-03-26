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

struct mahasiswa{

	char npm[14];
	char nama[40];
	float ipk;
	mahasiswa* next;
};
typedef mahasiswa* pointer;
typedef pointer list;

void createlist(list& first){
	first=NULL;
}
void createData(pointer& pBaru){
	pBaru=new mahasiswa;
	cout<<"Masukkan NPM\t: ";
	cin.ignore();
	cin.getline(pBaru->npm,20);
	cout<<"Masukkan Nama : ";
	cin.getline(pBaru->nama,40);
	cout<<"Masukkan IPK\t: ";
	cin>>pBaru->ipk;
	pBaru->next=NULL;
	
}
void insertSortNPM(list& first, pointer pBaru){
	pointer last=first;
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=pBaru;
}


void traversal(list first)
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

	  pointer pBaru;
    list first;
    int pilih;

    createlist(first);

    while(1)
    {
        system("cls");
       
        cout<<"  \tDATA MAHASISWA  " <<endl;
       

     
        cout<<" 1.     Tambah Data                          " <<endl;
        cout<<" 2.     Traversal                            " <<endl;
        cout<<" 3.     EXIT                                 " <<endl <<endl;
        cout<<" Masukan Pilihan : "; cin>>pilih; cout<<endl;

        switch(pilih)
        {
            case 1:
                createData(pBaru);
                insertSortNPM(first, pBaru);
                break;
            case 2:

                traversal(first);
                break;
            case 3:
                cout<<"Terima Kasih " <<endl;
                return 0;
            default:
                cout<<"EXIT" <<endl;
                break;
        }
        system("pause");
    }
}
