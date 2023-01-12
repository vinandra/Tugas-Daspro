/*
judul   : latihan2
Programer   : Azmi Jalaluddin Amron
Modify      : ke 3 pada 12/4/2022
*/

#include <iostream>
#include <string.h> //mengenali strupr
#include <conio.h> //mengenali getch() dan clrscr()
using namespace std;

//kamus
    int konsonan, vokal, i, kata;
    //jika ada spasi
    char ArrKalimat[100]; //tanpa input  //= "AKU CAH DINUS "; /* bisa juga ditulis */ //= {'A', 'K', 'U', ' ', 'C', 'A', 'H', ' ', 'D', 'I', 'N', 'U', 'S'};


//deskripsi
    int main()
    {
        //coba gunakan input
        cout << "Kalimat    : "; cin.getline(ArrKalimat, 100);
        strupr(ArrKalimat);
        cout << ArrKalimat;

        /* Bagian dari pencarian */
        i = 0;
        kata = 1;
        vokal = 0;
        konsonan = 0;
        while(i<100)
        {
            if(ArrKalimat[i]=='A' || ArrKalimat[i]=='I' || ArrKalimat[i]=='U' || ArrKalimat[i]=='E' || ArrKalimat[i]=='O')
            {
                vokal = vokal + 1;
            }
            else if(ArrKalimat[i]==' ')
            {
                kata = kata + 1;
            }
            else if(ArrKalimat[i]=='Q' || ArrKalimat[i]=='W' || ArrKalimat[i]=='R' || ArrKalimat[i]=='T' || ArrKalimat[i]=='Y' || ArrKalimat[i]=='P' || ArrKalimat[i]=='S' || ArrKalimat[i]=='D' || ArrKalimat[i]=='F' || ArrKalimat[i]=='G' || ArrKalimat[i]=='H' || ArrKalimat[i]=='J' || ArrKalimat[i]=='K' || ArrKalimat[i]=='L' || ArrKalimat[i]=='Z' || ArrKalimat[i]=='X' || ArrKalimat[i]=='C' || ArrKalimat[i]=='V' || ArrKalimat[i]=='B' || ArrKalimat[i]=='N' || ArrKalimat[i]=='M')
            {
                konsonan = konsonan + 1;
            }

            i = i + 1;
        }

        /* Output Screen */
        cout << "\n\n\tJumlah : ";
        cout << "\nVokal : " << vokal;
        cout << "\nKonsonan : " << konsonan;
        cout << "\nKata : " << kata;

        getch;
    }