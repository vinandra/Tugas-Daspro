#include <iostream>
using namespace std;
main()
{
//kamus
    string nama;
    string nim;
    string dosenwali;
    string alamat;
    string email;

//deskripsi
    cout<< " Membuat biodata " <<endl<<endl;
    cout<< " Nama          : "; getline(cin, nama);
    cout<< " Nim           : "; getline(cin, nim);
    cout<< " Dosenwali     : "; getline(cin, dosenwali);
    cout<< " Alamat        : "; getline(cin, alamat);
    cout<< " Email         : "; getline(cin, email);
    cout<<endl<<endl;

    cout<<"1."<<nama<<endl;
    cout<<"2."<<nim<<endl;
    cout<<"3."<<dosenwali<<endl;
    cout<<"4."<<alamat<<endl;
    cout<<"5."<<email<<endl;
}
