// Judul : perhitungan aritmatika
// memo : vinandra fitriansnya 24 september

#include <iostream>
using namespace std;

//kamus
int a, b, hasil;
char aritmatika;



int main()
{
    // deskripsi
    cout << "Selamat datrang di program aritmatika" << endl;

    cout << "masukan nilai pertama: ";
    cin >> a;


    cout << "Pilih operator +,-,/,*: ";
    cin >> aritmatika;

    cout << "Masukan nilai ke dua: ";
    cin >> b;

    cout << a << aritmatika << b;

    if (aritmatika == '+')
        {
            hasil = a + b;
        }
    else if (aritmatika == '-')
        {
            hasil = a - b;
        }
    else if (aritmatika == '/')
        {
            hasil = a / b;
        }
    else if (aritmatika == '*')
        {
            hasil = a * b;
    } else
        {
        cout << "operator anda salah";
    }

    cout << " = " << hasil;

    if (hasil%2==0) {
        cout << " Genap";
    } else {
        cout << " Ganjil";
    }
}
