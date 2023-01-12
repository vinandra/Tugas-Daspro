/* judul : membuat aplikasi sederhana memilih gander
memo : vinandra 21 september
*/
#include <iostream>
using namespace std;
//kamus
string nama;
char jnsKelamin;
int main()
{
    // deskripsi
    cout << "masukan namamu = "; cin >> nama;
    cout << "masukan jenis kelamin [ l / P ] = "; cin >> jnsKelamin;
    cout << "nama kamu " << nama << endl;
    if (jnsKelamin == 'l')
        {
            cout << "jenis kelami kamu laki laki";
        }
    else if (jnsKelamin == 'p')
        {
            cout << "jenis kelamin kamu perempuan";
        }
    else
        {
            cout << "jenis kelamin yang kamu masukan salah";
        }
    return 0;
}
