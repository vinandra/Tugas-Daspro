// Judul ; simulasi deteksi penyakit
// memo vinandra

#include <iostream>
#include <string.h>
using namespace std;

//kamus
 char ulangi[2];
 int counter;
 char gejala[10],penyakit;


//diskriipsi
int main()
{
    strcpy(ulangi,"y");
    counter = 0;

    do {
    cout << "masukan gejala ( mimisan, pusing, sariawan )" << endl;
    cin >> gejala;
        if (strcmp(gejala,"mimisan")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cout << "A : covid 19" << endl;
            cout << "B : sinus" << endl;
            cout << "C : polip hidung" << endl;
            cout << "D : hermofilia" << endl;
            cout << "E : leokimia" << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "covid 19" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "sinus" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "polip hidung" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "hermofilia" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "leokimia" << endl;
                }
                break;
                default :
                    {
                        cout << "eror / salah memasukan pilihan" << endl;
                    }
            }
        }
    else if (strcmp(gejala,"sariawan")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cout << "A : covid" << endl;
            cout << "B : penyakit autoimun" << endl;
            cout << "C : lienen plenus" << endl;
            cout << "D : leukoplalia" << endl;
            cout << "E : giingivostomatis" << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "covid" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "penyakit autoimun" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "lienen plenus" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "leukoplalia" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "giingivostomatis" << endl;
                }
                break;
                default :
                    {
                        cout << "eror / salah memasukan pilihan" << endl;
                    }
            }
        }
    else if (strcmp(gejala,"pusing")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cout << "A : dehidrasi" << endl;
            cout << "B : sinus" << endl;
            cout << "C : hipetensi" << endl;
            cout << "D : covid" << endl;
            cout << "E : stroke" << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "dehidrasi" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "sinus" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "hipetensi" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "covid" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "stroke" << endl;
                }
                break;
                default :
                    {
                        cout << "eror / salah memasukan pilihan" << endl;
                    }
            }
        }
     else {
            cout << "salah";
    }
    cout << "Apakah ada pasian selanjutnya y/t" << endl;
    cin >> ulangi;

    counter = counter + 1;
    } while(strcmp(ulangi,"y")==0);
    cout << "----------" << endl;
    cout << "Perulangan Berakhir...!\n" << endl;
    cout << "Kamu mengulang sebanyak " << counter << endl;
    return 0;
}
