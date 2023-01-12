//judul : Array lanjutan
#include <iostream>
using namespace std;

//kamus
int tblUmur[5];
int posisi[5];
int Maximum, leght, sum, rata, x, y, z, caricari, banyak,w, m, wadah, jmlh;
bool ketemu;

int main(int argc, char const *argv[])
{
    cout << "menyisipkan data umur\n";
    x=0;
    while (x < 5)
    {
        cin >> tblUmur[x];
        x++;
    }

    cout << "menampilkan data\n";
    x=0;
    while (x < 5)
    {
        y=x+1;
        cout << y << ". "<< tblUmur[x] << endl;
        x++;
    }

    // umur paling tua
    Maximum = tblUmur[0];
    z=0;
    while (z < 5)
    {
        if (tblUmur[z] > Maximum)
        {
            Maximum = tblUmur[z];\
            jmlh = 0;
            y=0;
            do
            {
                if(Maximum == tblUmur[y])
                {
                    jmlh = jmlh +1;
                }
                y++;
            } while (y < 5);
         if(jmlh == 0)
         {
            x = 0;
            do
            {
                if(Maximum == tblUmur[y])
                {
                    jmlh = jmlh +1;
                }
                x ++;
            } while (x < 5);
            
         }  
        }
        z++;
    }

    cout << "umur paling tua adalah = " << Maximum << endl;

    //shorting mengurutkan 
    
    x=0;
    y=0;
    while (x < 5)
    {
        y=y+1;
        while (y<5)
        {
            if (tblUmur[x] > tblUmur[y])
            {
                wadah = tblUmur[x];
                tblUmur[x] = tblUmur[y];
                tblUmur[y] = wadah;
            }
            y++;
        }
        x++;
    }

    x=0;
    while (x < 5)
    {
        
        x++;
    }
    

    // pencarian array
    cout << "masukan yang ingin di cari = ";
    cin >> caricari;
    banyak=0;
    w=0;
    while (w<5)
    {
        if (tblUmur[w] == caricari)
        {
            ketemu = true;
            posisi[banyak] = w; 
            banyak = banyak +1;
        }
        w++;
    }

    if (ketemu == true)
    {
        cout << "kyang di cari " << caricari << " ditemukan semabnyak " << banyak << " di lokasi index ke ";
        m=0;
        while (m < banyak)
        {
            cout << posisi[m]<< ", "; 
            m++;
        }
        
    } else {
        cout << "yang di cari gak ketemu ketemu";
    }
    

    
    return 0;
}
