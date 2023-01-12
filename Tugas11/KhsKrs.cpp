#include <iostream>
#include <string.h>
using namespace std;

//Nilai mid teori , nilai mid praktek, nilai uas teori , nilai uas praktek, nilai tugas teori, nilai tugas praktek

char nim[3];
char status[5], status2[5], status3[5];
string nama;
string matkul,matkul2,matkul3;
float nmatkul,nmatkul2,nmatkul3;
float mid, mid2 ,mid3;
float tugas, tugas2,tugas3;
float uas, uas2, uas3;
float midpra, midpra2, midpra3;
float tugaspra, tugaspra2, tugaspra3;
float uaspra, uaspra2, uaspra3;
float nmid, nmid2 ,nmid3;
float ntugas, ntugas2,ntugas3;
float nuas, nuas2, nuas3;
float nmidpra, nmidpra2, nmidpra3;
float nuaspra, nuaspra2, nuaspra3;
float ntugaspra, ntugaspra2, ntugaspra3;
float persen;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++
char ulangi[2];
int counter;
int main()
{
    counter = 0;
    do {
        //  ++++++++++++++++++++++++++++++++++++++++++++

         cout << "============= SISTEM PENILAIN =============\n";
        cout << "======= UNIVERSITAS DIAN NUSWANTORO =======\n";
        cout << "Masukan NIM : ";
        cin >> nim;
        cout << "Prodi : ";

        if (strcmp(nim,"A11")==0)
        {
            cout << "FIK S1 Teknik Informatika";
        }
        else if(strcmp(nim,"A21")==0)
        {
            cout << "FIK D3 Manajemen Informatika";
        }
        else if(strcmp(nim,"B11")==0)
        {
            cout << "FEB S1 Manajemen";
        }
        else if(strcmp(nim,"B21")==0)
        {
            cout << "FEB D3 Akutansi";
        }
        else
        {
            cout << "NIM yang anda masukan salah";
        }

        cout << "\nMasukan Nama = ";
        cin >> nama;

        cout << "matkul 1 = ";
        cin >> matkul;

        cout << "status [T/P/TP] = ";
        cin >> status;

        if (strcmp(status,"T")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas = tugas * persen/100;
            cout << ntugas << endl;
            cout << "masukan nilai mid = ";
            cin >> mid;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid = mid * persen/100;
            cout << nmid<< endl;
            cout << "masukan nilai uas = ";
            cin >> uas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas = uas * persen/100;
            cout << nuas << endl;
            nmatkul = ntugas + nmid + nuas;
            cout << nmatkul << endl;
        }
        else if(strcmp(status,"P")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas = tugas * persen/100;
            cout << ntugas<< endl;
            cout << "masukan nilai mid = ";
            cin >> mid;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid = mid * persen/100;
            cout << nmid<< endl;
            cout << "masukan nilai uas = ";
            cin >> uas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas = uas * persen/100;
            cout << nuas << endl;
            nmatkul = ntugas + nmid + nuas;
            cout << nmatkul << endl;
        }
        else if(strcmp(status,"TP")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas = tugas * persen/100;
            cout << ntugas<< endl;
            cout << "masukan nilai mid = ";
            cin >> mid;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid = mid * persen/100;
            cout << nmid<< endl;
            cout << "masukan nilai uas = ";
            cin >> uas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas = uas * persen/100;
            cout << nuas << endl;
            cout << "masukan nilai tugas praktek = ";
            cin >> tugaspra;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugaspra = tugaspra * persen/100;
            cout << ntugaspra;
            cout << "masukan nilai mid praktek = ";
            cin >> midpra;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmidpra = midpra * persen/100;
            cout << midpra;
            cout << "masukan nilai uas praktek = ";
            cin >> uaspra;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuaspra = uaspra * persen/100;


            cout << nuas << endl;
            nmatkul = ntugas + nmid + nuas + ntugaspra + nmidpra + nuaspra;
            cout << nmatkul << endl;

        } else
        {
            cout << "erorr" << endl;
        }

        // if

        if (nmatkul <= 40 and nmatkul >=0 )
        {
            cout << "nilai = E";
        }
        else if (nmatkul <= 60) {
            cout << "nilai = D";
        }
        else if (nmatkul <= 75) {
            cout << "nilai = C";
        }
        else if (nmatkul <= 85) {
            cout << "niali = B";
        }else if (nmatkul <= 100)
        {
            cout << "nilai = A";
        }else {
            cout << "tolong koreksi nilai lagi";
        }

        // 222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

        cout << "\nmatkul 2 = ";
        cin >> matkul2;

        cout << "status [T/P/TP] = ";
        cin >> status2;

        if (strcmp(status2,"T")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas2 = tugas2 * persen/100;
            cout << ntugas2;
            cout << "masukan nilai mid = ";
            cin >> mid2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid2 = mid2 * persen/100;
            cout << nmid;
            cout << "masukan nilai uas = ";
            cin >> uas2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas2 = uas2 * persen/100;
            cout << nuas2 << endl;
            nmatkul2 = ntugas2 + nmid2 + nuas2;
            cout << nmatkul2;
        }
        else if(strcmp(status2,"P")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas2 = tugas2 * persen/100;
            cout << ntugas2;
            cout << "masukan nilai mid = ";
            cin >> mid2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid2 = mid2 * persen/100;
            cout << nmid;
            cout << "masukan nilai uas = ";
            cin >> uas2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas2 = uas2 * persen/100;
            cout << nuas2 << endl;
            nmatkul2 = ntugas2 + nmid2 + nuas2;
            cout << nmatkul2;
        }
        else if(strcmp(status2,"TP")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas2 = tugas2 * persen/100;
            cout << ntugas2;
            cout << "masukan nilai mid = ";
            cin >> mid2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid2 = mid2 * persen/100;
            cout << nmid2;
            cout << "masukan nilai uas = ";
            cin >> uas2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas2 = uas2 * persen/100;
            //
            cout << "masukan nilai tugas praktek = ";
            cin >> tugaspra2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugaspra2 = tugaspra2 * persen/100;

            cout << "masukan nilai mid praktek = ";
            cin >> midpra2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmidpra2 = midpra2 * persen/100;

            cout << "masukan nilai uas praktek = ";
            cin >> uaspra2;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuaspra2 = uaspra2 * persen/100;


            cout << nuas2 << endl;
            nmatkul2 = ntugas2 + nmid2 + nuas2 + ntugaspra2 + nmidpra2 + nuaspra2;
            cout << nmatkul2;

        } else
        {
            cout << "erorr" << endl;
        }

        // if

        if (nmatkul <= 40 and nmatkul >=0 )
        {
            cout << "nilai = E";
        }
        else if (nmatkul <= 60) {
            cout << "nilai = D";
        }
        else if (nmatkul <= 75) {
            cout << "nilai = C";
        }
        else if (nmatkul <= 85) {
            cout << "niali = B";
        }else if (nmatkul <= 100)
        {
            cout << "nilai = A";
        }else {
            cout << "tolong koreksi nilai lagi";
        }

        // 333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333

        cout << "\nmatkul 3 = ";
        cin >> matkul3;

        cout << "status [T/P/TP] = ";
        cin >> status3;

        if (strcmp(status3,"T")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas3 = tugas3 * persen/100;
            cout << ntugas3;
            cout << "masukan nilai mid = ";
            cin >> mid3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid3 = mid3 * persen/100;
            cout << nmid;
            cout << "masukan nilai uas = ";
            cin >> uas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas = uas * persen/100;
            cout << nuas << endl;
            nmatkul3 = ntugas3 + nmid3 + nuas3;
            cout << nmatkul3;
        }
        else if(strcmp(status3,"P")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas3 = tugas3 * persen/100;
            cout << ntugas3;
            cout << "masukan nilai mid = ";
            cin >> mid3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid3 = mid3 * persen/100;
            cout << nmid;
            cout << "masukan nilai uas = ";
            cin >> uas;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas = uas * persen/100;
            cout << nuas << endl;
            nmatkul3 = ntugas3 + nmid3 + nuas3;
            cout << nmatkul3;
        }
        else if(strcmp(status3,"TP")==0)
        {
            cout << "masukan nilai tugas = ";
            cin >> tugas3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugas3 = tugas3 * persen/100;
            cout << ntugas3;
            cout << "masukan nilai mid = ";
            cin >> mid3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmid3 = mid3 * persen/100;
            cout << nmid3;
            cout << "masukan nilai uas = ";
            cin >> uas3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuas = uas3 * persen/100;

            cout << "masukan nilai tugas praktek = ";
            cin >> tugaspra3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            ntugaspra = tugaspra * persen/100;

            cout << "masukan nilai mid praktek = ";
            cin >> midpra3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nmidpra3 = midpra3 * persen/100;

            cout << "masukan nilai uas praktek = ";
            cin >> uaspra3;
            cout << "masukan nilai persentase harus 100% = ";
            cin >> persen;
            nuaspra3 = uaspra3 * persen/100;

            cout << nuas3 << endl;
            nmatkul3 = ntugas3 + nmid3 + nuas3 + ntugaspra3 + nmidpra3 + nuaspra3;
            cout << nmatkul3;

        } else
        {
            cout << "erorr" << endl;
        }

        // if

        if (nmatkul <= 40 and nmatkul >=0 )
        {
            cout << "nilai = E";
        }
        else if (nmatkul <= 60) {
            cout << "nilai = D";
        }
        else if (nmatkul <= 75) {
            cout << "nilai = C";
        }
        else if (nmatkul <= 85) {
            cout << "niali = B";
        }else if (nmatkul <= 100)
        {
            cout << "nilai = A";
        }else {
            cout << "tolong koreksi nilai lagi";
        }

        cout << "               KARTU HASIL STUDI                " << endl;
        cout << "       PROGRAM STUDI TEKNIK INFORMATIKA         " << endl;
        cout << "          UNIVERSITAS DIAN NUSWANTORO           " << endl;
        cout << endl;
        cout << "NAMA : " << nama << endl;
        cout << "NIM : " << nim << endl;
        cout << "Prodi : ";

        if (strcmp(nim,"A11")==0)
        {
            cout << "FIK S1 Teknik Informatika";
        }
        else if(strcmp(nim,"A21")==0)
        {
            cout << "FIK D3 Manajemen Informatika";
        }
        else if(strcmp(nim,"B11")==0)
        {
            cout << "FEB S1 Manajemen";
        }
        else if(strcmp(nim,"B21")==0)
        {
            cout << "FEB D3 Akutansi";
        }
        else
        {
            cout << "NIM yang anda masukan salah";
        }

        cout << "NAMA MATAKULIAH          " << "NILAI" << endl;
        cout <<  matkul << "             "<< nmatkul << endl;
        cout << matkul2 << "             "<< nmatkul2 << endl;
        cout << matkul3 << "             "<< nmatkul3 << endl;

        // ++++++++++++++++++++++++++++++++++++++++++++

        cout << "\nApakah ada mahasiswa baru\n" << endl;
        cout << "Jawab (y/t): ";
        cin >> ulangi;
        counter = counter + 1;
    } while(strcmp(ulangi,"y")==0);

    cout << "----------" << endl;
    cout << "Perulangan Berakhir...!\n" << endl;
    cout << "Kamu mengulang sebanyak " << counter << endl;
    return 0;
}
