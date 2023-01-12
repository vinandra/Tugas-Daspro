// judul : prodi dan falkultas latihan depend on dan switch case
// memo : vinandra 26 september

#include <iostream>
using namespace std;

// kamus
int a,b,c,d,e;

main()
{
    //deskripsi
    cout << "masukan angka" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if ( a != b && a != c && b != c){
        switch (a,b,c)
        {
            case a < b < c:
                {
                    cout << a << b << c;
                    break;
                }
        }
        cout << "trayysal";
    }else {
        cout << "eror";
    }

}
