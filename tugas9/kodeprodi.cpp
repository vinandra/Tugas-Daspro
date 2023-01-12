//judul : deteksi kode prodi
//ariella risqy maulana

//kamus :
	#include <iostream>
	using namespace std;

	char kode;

//deskripsi:
	int main()
	{
		cout << "program studi" << endl	;
		cout << "A11 = FIK S1 Teknik Informatika   " << endl;
		cout << "A21 = FIK D3 Manajemen Informatika" << endl;
		cout << "B11 = FEB S1 Manajemen			   " << endl;
		cout << "B21 = FEB D3 Akutansi             " << endl;
		cout << "Masukan NIM = " ; cin  >>  kode;

		switch(kode)
		{
			case 'A' :
				cout << "FIK " ;
				{
					case '1' :
						cout << "S1 " ;
						{
							case '1.' :
								{
									cout << "Teknik informatika " ;
								}
						}
				}
            break;
		}

		case(kode)
		{
			case 'A' :
				cout << "FIK " ;
				{
					case '2' :
						cout << "D3 " ;
						{
							case '1.' :
								{
									cout << "Manajemen informatika " ;
								}
						}
				}
		break;
		}

		switch(kode)
		{
			case 'B' :
				cout << "FEB " ;
				{
					case '1' :
						cout << "S1 " ;
						{
							case '1.' :
								{
									cout << "Manajemen " ;
								}
						}
				}

		break;
		}


		switch(kode)
		{
			case 'B' :
				cout << "FEB " ;
				{
					case '1' :
						cout << "D3 " ;
						{
							case '1.' :
								{
									cout << "Akuntansi " ;
								}
						}
				}
		break;
		}


}
