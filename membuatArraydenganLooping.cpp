//judul : membuat array dengan looping
#include <iostream>
using namespace std;

//kamus
int n,x,y,cari,baskom;

//deskripsi
int main(int argc, char const *argv[])
{
    cout << "membuat array dengan looping\n";

    cin >> n;
    int datane[n];

    x = 0;
    while (x < n)
    {
        cin >> datane[x];
        x++;
    }

    cout << "mencari = ";
    cin >> cari;

    x=0;
    while (x < n)
    {
        if (datane[x] == cari)
        {
            cout << "ketemu des " << cari << " derada di lokasi " << x << endl;
        }

        x= x+1;
    }

    x=0;
    while (x < n)// sampai N - 1
    {
        y= x+1;
        while (y < n)
        {
            if (datane[x] > datane[y])
            {
                baskom = datane[x];
                datane[x]=datane[y];
                datane[y]=baskom;
            }
            y= y+1;
        }
        x= x+1;
    }
    
    x=0;
    while (x < n)
    {
        cout << datane[x] << endl;
        x++;
    }
    


    return 0;
}
