// judul : prodi dan falkultas latihan depend on dan switch case
// memo : vinandra 26 september

#include <iostream>
using namespace std;

// kamus
char codefak;
int codeprodi;

main()
{
    //deskripsi
    cout << "masukan kode falkultas" << endl;
    cin >> codefak;

    switch(toupper(codefak))
    {
        case 'A' :
            {
                cout << "Falkultas ilmu komputer" << endl;
                cout << "masukan kode prodi" << endl;
                cin >> codeprodi;
                switch(codeprodi)
                {
                case 1 :
                    {
                        cout << "teknik informatika";
                        break;
                    }
                case 2 :
                    {
                        cout << "sistim informasi";
                        break;
                    }
                case 3 :
                    {
                        cout << "desain komunikasi visual";
                        break;
                    }
                default :
                    {

                    }
                }
                break;
            }
        case 'B' :
            {
                cout << "Falkultas Ekonomi Dan Bisnis";
                cin >> codeprodi;
                switch(codeprodi)
                {
                case 1 :
                    {
                        cout << "management";
                        break;
                    }
                }
                break;
            }
        case 'C' :
            {

            }
        default :
            {
                cout << "error";
                break;
            }
    }
}
