// Judul : Simulasi deteksi penyakit
// memo : vinandra fitriansnya 6 oktober

#include <iostream>
#include <string.h>
using namespace std;

//kamus
char gejala[10],penyakit;

int main()
{
    // deskripsi
    cout << "Selamat datrang di program simulasi penyakit" << endl;

    cout << "Masukan gejala : ";
    cin >> gejala;

    if (strcmp(gejala,"mimisan")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "sinus" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "Hipetensi" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "covid" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "stroke" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "dehidrasi" << endl;
                }
                break;
                default :
                    {
                        cout << "eror / salah memasukan pilihan" << endl;
                    }
            }
        }
    else if (strcmp(gejala,"panas")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "sinus" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "Hipetensi" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "covid" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "stroke" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "dehidrasi" << endl;
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
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "sinus" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "Hipetensi" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "covid" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "stroke" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "dehidrasi" << endl;
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
}
