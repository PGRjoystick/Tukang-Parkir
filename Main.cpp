#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int kendaraan,jam,harga;
	char yt;
	cout <<" ===================================================\n";
	cout <<"||------------------------------------------------||\n";
	cout <<"||        SELAMAT DATANG DI TUKANG PARKIRAN       ||\n";
	cout <<"||---------------------|BY|-----------------------||\n";
       	cout <<"||               Biji Melayang Team               ||\n";
	cout <<"||                   Kelompok 3                   ||\n";
	cout <<"====================================================\n";
	cout <<"                                                    \n";
	cout <<"                                                    \n";
	code:
	cout <<"JENIS KENDARAAN\n";
	cout <<"1. MOTOR \n";
	cout <<"2. MOBIL \n";
	zero:
	cout <<"MASUKAN PILIHAN KENDAARAAN (1/2) : ";
	cin >>kendaraan;
	cout <<"----------------------------------------------------\n";
	cout <<"WAKTU PARKIR               : ";
	cin >>jam;
	cout <<"----------------------------------------------------\n";


switch (kendaraan)
    {
		case 1:
		{
			harga=2000*jam;
            cout <<"----------------------------------------------------\n";
            cout <<"             HARGA PARKIR = Rp. "<<harga <<endl;
            cout <<"             WAKTU PARKIR = "<<jam;
            cout <<" JAM\n";
            cout <<"----------------------------------------------------\n";

        }
        break;
        case 2:
        {
            harga=3000*jam;
            cout <<"----------------------------------------------------\n";
            cout <<"             HARGA PARKIR = Rp. "<<harga <<endl;
            cout <<"             WAKTU PARKIR = "<<jam;
            cout <<" JAM\n";
            cout <<"----------------------------------------------------\n";
        }
        break;
        default:
        {
            cout <<"-----------MAAF ANDA SALAH MEMASUKAN KODE-----------\n";
            goto zero;
        }
    }
        cout << "Input Data lagi ? (y/n):";
        cin >> yt;

        if (yt=='y'||yt=='Y')
        {
            goto code;
        }
        else
        {
            goto finish;
        }


        finish:
	cout << "----------------------------------------------------\n";
	cout << "                                                    \n";
	cout << "                 TERIMA KASIH                       \n";
	cout << "               SELAMAT BERKENDARA                   \n";
	cout << "       HATI - HATI DALAM PERJALANAN ANDA            \n";
	cout << "                                                    \n";
	cout << "----------------------------------------------------\n";
    getch();
return 0;
}
