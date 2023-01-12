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
    cout << "Masukan nilai a" << endl;
    cin >> a;
    cout << "masukan nilai b" << endl;
    cin >> b;
    cout << "masukan nilai c" << endl;
    cin >> c;
    cout << "masukan nilai d" << endl;
    cin >> d;
    cout << "masukan nilai " << endl;
    cin >> e;

    if ( a != b && a != c && b != c){
        if (a < b < c < d < e)
        {
            cout << a << ", " << b <<", " << c <<", " << d <<", " << e;
        }else if (a < c < b < d < e )
        {
            cout << a << c << b << d << e;
        }else if (a < d < e < b < c)
        {
            cout << a << d << e << b << c;
        }else if (a < e < b < c < d)
        {
            cout << a << e << b << c << d;
        }
        //tambahan
        // b
        else if (b < a < c < d < e )
        {
            cout << b << a << c << d << e;
        }else if (b < c < d < e < a)
        {
            cout << b << c << d << e << a;
        }else if (b < d < e < a < c)
        {
            cout << b << d << e << a << c;
        }else if (b < e < a < c < d)
        {
            cout << b << e << a << c << d;
        }
        //tambahan
        // c
        else if (c < d < e < a < b)
        {
            cout << c << d << e << a << b;
        }else if (c < e < a < b < c)
        {
            cout << c << e << a << b << c;
        }else if (c < a < b < d < e)
        {
            cout << c << a << b << d << e;
        }else if (c < b < d < e < a)
        {
            cout << c << b << d << e << a;
        }
        //tambahan
        //d
        else if (d < e < a < b < c )
        {
            cout << d << e << a << b << c;
        }else if (d < a < b < c < e)
        {
            cout << d << a << b << c << e;
        }else if (d < a < b < e < a)
        {
            cout << d << a << b << e << a;
        }else if (d < c < e < a < b)
        {
            cout << d << c << e << a << b;
        }
        //e
        //tambahan
        else if (e < a < b < c < d )
        {
            cout << e << a << b << c << d;
        }else if (e < b < c < d < e)
        {
            cout << e << b << c << d << a;
        }else if (e < c < d < a < b)
        {
            cout << e << c << d << a << b;
        }else if (e < d < a < b < c)
        {
            cout << e << d << a << b << c;
        }
        //tambahan
    }else {
        cout << "eror / angka tidak boleh sama";
    }

}
