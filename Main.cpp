#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
		int a,b;
		cout <<" ===================================================\n";
		cout <<"||------------------------------------------------||\n";
		cout <<"||           SELAMAT DATANG DI PARKIRAN           ||\n";
		cout <<"||---------------------|BY|-----------------------||\n";
    		cout <<"||               Biji Melayang Team               ||\n";
		cout <<"||                   Kelompok 3                   ||\n";
		cout <<"====================================================\n";
		cout <<"                                                    \n";
		cout <<"                                                    \n";
		cout <<"JENIS KENDARAAN\n";
		cout <<"1. MOTOR \n";
		cout <<"2. MOBIL \n";
		cout <<"MASUKAN PILIHAN KENDAARAAN (1/2) : ";
		cin >>a;
		cout <<"----------------------------------------------------\n";
		cout <<"WAKTU PARKIR               : ";
		cin >>b;
		cout <<"----------------------------------------------------\n";


		if(a==1)
		{
			if(b<=2)
			{
				cout <<"----------------------------------------------------\n";
				cout <<"             HARGA PARKIR = "<<1500<<endl;
				cout <<"----------------------------------------------------\n";
			}
			else
			{
				cout <<"----------------------------------------------------\n";
				cout <<"             HARGA PARKIR = "<<1500+(b-2)*2000<<endl;
				cout <<"----------------------------------------------------\n";
			}
		}

		else if (a==2)
		{

			if(b<=2)
			{
				cout <<"----------------------------------------------------\n";
				cout <<"             HARGA PARKIR = "<<2500<<endl;
				cout <<"----------------------------------------------------\n";
			}
			else
			{
				cout <<"----------------------------------------------------\n";
				cout <<"             HARGA PARKIR = "<<2500+(b-2)*1500<<endl;
				cout <<"----------------------------------------------------\n";
			}
		}
		cout << "----------------------------------------------------\n";
		cout << "                                                    \n";
		cout << "                 TERIMA KASIH                       \n";
		cout << "               SELAMAT BERKENDARA                   \n";
		cout << "       HATI - HATI DALAM PERJALANAN ANDA            \n";
		cout << "                                                    \n";
		cout << "----------------------------------------------------\n";
	return 0;
}


