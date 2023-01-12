// judul palindrom
#include <iostream>
using namespace std;

// kamus
string kata;
int n, i;
bool polindrom = true;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "Program mengecek kata - kalimat Polindrom apa Bukan\n";
    cout << "Input kata : ";
    getline(cin, kata);
    n = kata.length();

    i = 0;
    while(i < n){
        if(kata[i] != kata[n-i-1])
        {
            polindrom = false;
            break;
        }
        i++;
    }

    cout << "kata kebalikanya : ";

    i = 0;
    while (i < n)
    {
        /* code */
        cout << kata[n-i-1];
        i++;
    }

    cout << "\nResoult : ";
    if(polindrom == true){
        cout << "palindrom";
    } else {
        cout << "bukan palindrom";
    }

    cin.ignore();

    return 0;
}
