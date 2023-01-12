/*

selesaikan kasus berikut:

1. terdapat sebuah variable untuk bilangan integer

buatlah script untuk deteksilah apakah bilangan tersebut bilangan genap?

2. terdapat sebuah variable array (5 element) untuk bilangan integer

buatlah script untuk deteksilah ada berapa bilangan genapnya
dan pada index berapakah element genapnya (bila ada)


*/
#include <iostream>
using namespace std;


// judul :apakah bilangan itu genap
//kamus
int var;
int vararry[5],tmpindex[5];
int x,tmp;
bool genap = false;

//deskripsi
int main()
{
    cout << "soal pertama menentukan bilangan genap apa tidak\n";
    cout << "masukan bilangan = ";
    cin >> var;

    if (var %2 == 0){
        cout << "bilangan genap";
    } else {
        cout << "bilangan ganjil";
    }

    cout << "\n\nsoal kedua menentukan bilangan genap apa tidak\n";
    cout << "masukan data array\n";

    x=0;
    while(x<5)
    {
        cout << "masukan variabel array index ke " << x << " = ";
        cin >> vararry[x];
        x++;
    }

    x=0;
    tmp=0;
    while(x<5)
    {
        if(vararry[x] %2 == 0){
            genap = true;
            tmpindex[tmp] = x;
            tmp=tmp+1;
        }
        x++;
    }

    x=0;
    if(genap == true)
    {
        cout << "bilangan genap ada " << tmp << " berada di index = ";
        while(x<tmp)
        {
            cout << tmpindex[x] << ", ";
            x++;
        }
    } else {
        cout << "tidak ada bilangan genap";
    }
}

