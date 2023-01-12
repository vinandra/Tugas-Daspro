
/* judul : Program Sequential Search
  5 des 2022
  ifan rizqa*/


#include<iostream>
#include<conio.h>
// kamus
    int Nilai[20];
    int Posisi[20];
    int i, N, Bilangan, Banyak=0;
    bool ketemu;    // bool iku boolean, nilainya 2 y/n t/f  0/1
    using namespace std;
main()
{

  cout<<"Masukkan Banyaknya Bilangan yang akan kalian input = ";
  cin>>N;
  cout<<endl;

  //Mengisi elemen Array
  i = 0;
  while( i< N)
  {
    cout<<"Masukkan elemen ke-"<<i<<" = ";
    cin>>Nilai[i];
    i = i + 1;
  }

  //Mencetak Elemen Array
  cout<<"\nDeretan Bilangan yang sudah anda input adalah = ";
  i = 0;
  while(i<N)
  {
    cout<<Nilai[i]<<" ";
    i = i + 1;
  }

  cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
  cin>>Bilangan;

}


