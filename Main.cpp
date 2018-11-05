#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    char io;
    int jumlah,biaya,kendaraan,kendaraan1,kendaraan2,kendaraan3,kendaraan4,kendaraan5,kendaraan6,kendaraan7,kendaraan8,kendaraan9,kendaraan10;
    int lahan=10,total_biaya=0,pendapatan=0,total_ken=0;
    string namakendaraan,nik,password,platout,platin="0",platin1="0",platin2="0",platin3="0",platin4="0",platin5="0",platin6="0",platin7="0",platin8="0",platin9="0",platin10="0";
    float jmasuk,jmasuk1,jmasuk2,jmasuk3,jmasuk4,jmasuk5,jmasuk6,jmasuk7,jmasuk8,jmasuk9,jmasuk10;
    float jkeluar;


    login:
    system("cls");
    cout<<endl<<endl;
    cout<<"\t|=================================================================|"<<endl;
    cout<<"\t|                T U K A N G   P A R K I R A N                    |"<<endl;
    cout<<"\t|                      Version 0.3                                |"<<endl;
    cout<<"\t|=================================================================|"<<endl;
    cout<<endl<<endl;
    cout<<"\t                            LOG IN"<<endl;
    cout<<"\t                 =-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t                 NIK        : "; cin>>nik;
    cout<<"\t                 Password   : "; cin>>password;
    cout<<endl;
       //ketentuan login
       if(nik=="eaea"&&password=="eaea")
       	{
       	    system("cls");
       	    goto io;
        }
       else
        {
            cout<<"\t\t\tNIK atau Password salah, Silahkan ulangi!";
            getch();
         	goto login;
        }

    io:
    cout <<"\t\t===================================================\n";
	cout <<"\t\t||-----------------------------------------------||\n";
	cout <<"\t\t||       SELAMAT DATANG DI TUKANG PARKIRAN       ||\n";
	cout <<"\t\t||--------------------|BY|-----------------------||\n";
	cout <<"\t\t||                 Kelompok 1                    ||\n";
	cout <<"\t\t||    Dhiyaul Umam, Singgih Pratama, Yonathan    ||\n";
	cout <<"\t\t=================================================\n";
	cout <<endl;
    cout <<endl;
    cout<<"\t\t             Jumlah Lahan Parkir : "<<lahan<<endl<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"\t\t                      Menu"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl<<endl;
    cout<<"\t\t Kode           Keterangan"<<endl;
    cout<<"\t\t  I     = In  (Kendaraan Masuk)"<<endl;
    cout<<"\t\t  O     = Out (Kendaraan Keluar)"<<endl;
    cout<<"\t\t  J     = Jumlah kendaraan sedang parkir"<<endl;
    cout<<"\t\t  P     = Jumlah Pendapatan"<<endl;
    cout<<"\t\t  E     = Exit   (Keluar Program)"<<endl<<endl;
	cout<<"\t\t Pilih Menu untuk Melanjutkan : ";
	cin>>io;

        if(io=='I'||io=='i')
      		{
      		    goto in;
            }
      	else if(io=='O'||io=='o')
      		{
      		    goto out;
            }
         else if(io=='J'||io=='j')
         	{
         	    goto det;
            }
      	else if(io=='E'||io=='e')
      		{
      		    goto selesai;
            }
         else if(io=='P'||io=='p')
         	{
         	    goto pen;
            }
      	else
      		{
      		    cout<<"Input masukan salah, silahkan ulangi!";
                getch();
                system("cls");
                goto io;
            }

    pen:
    cout<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t\t Pendapatan dan Jumlah Kendaraan Sudah Parkir"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t\t Jumlah Kendaraan Sudah Parkir : "<<total_ken<<endl;
    cout<<"\t\t Jumlah Pendapatan             : "<<pendapatan;
   	getch();
    system("cls"); goto io;

    det:
    cout<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t\t  Jumlah dan Plat Kendaraan Sedang Parkir"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    jumlah=10-lahan;
    cout<<"\t\t Jumlah Kendaraan Sedang Parkir : "<<jumlah<<endl;
    cout<<"\t\t Plat kendaraan sedang parkir"<<endl;
    cout<<"\n\t\t"<<platin1<<"\n\t\t"<<platin2<<"\n\t\t"<<platin3<<"\n\t\t"<<platin4<<"\n\t\t"<<platin5;
    cout<<"\n\t\t"<<platin6<<"\n\t\t"<<platin7<<"\n\t\t"<<platin8<<"\n\t\t"<<platin9<<"\n\t\t"<<platin10;
   	getch();
   	system("cls");
   	goto io;

    in:
    cout<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t\t    Kendaraan masuk"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t\tNo plat              : ";
    cin.get();
    getline (cin, platin);
    cout<<"\t\tJam Masuk            : ";
    cin>>jmasuk;
    jenis:
    cout<<"\n\t\t1. Motor";
    cout<<"\n\t\t2. Mobil";
    cout<<"\n\t\tNomor Kendaraan      : ";
    cin>>kendaraan;
    if(kendaraan==1||kendaraan==2)
    {
        goto gud;
    }
    else
    {
        cout << "\t\tMaaf, Kode yang anda masukan tidak terdaftar di daftar kendaraan yang bisa di tampung";
        getch();
        goto jenis;
    }
    gud:
    cout<<"\t\tKendaraan Berhasil Masuk";
    getch();
    system("cls");

    if(platin1=="0")
    {
        platin1=platin;
        jmasuk1=jmasuk;
        kendaraan1=kendaraan;
        goto lahan;
    }
    else if(platin2=="0")
    {
        platin2=platin;
        jmasuk2=jmasuk;
        kendaraan2=kendaraan;
        goto lahan;
    }
    else if(platin3=="0")
    {
        platin3=platin;
        jmasuk3=jmasuk;
        kendaraan3=kendaraan;
        goto lahan;
    }
    else if(platin4=="0")
    {
        platin4=platin;
        jmasuk4=jmasuk;
        kendaraan4=kendaraan;
        goto lahan;
    }
    else if(platin5=="0")
    {
        platin5=platin;
        jmasuk5=jmasuk;
        kendaraan5=kendaraan;
        goto lahan;
    }
    else if(platin6=="0")
    {
        platin6=platin;
        jmasuk6=jmasuk;
        kendaraan6=kendaraan;
        goto lahan;
    }
    else if(platin7=="0")
    {
        platin7=platin;
        jmasuk7=jmasuk;
        kendaraan7=kendaraan;
        goto lahan;
    }
    else if(platin8=="0")
    {
        platin8=platin;
        jmasuk8=jmasuk;
        kendaraan8=kendaraan;
        goto lahan;
    }
    else if(platin9=="0")
    {
        platin9=platin;
        jmasuk9=jmasuk;
        kendaraan9=kendaraan;
        goto lahan;
    }
    else if(platin10=="0")
    {
        platin10=platin;
        jmasuk10=jmasuk;
        kendaraan10=kendaraan;
        goto lahan;
    }

      //Hitung Kendaraan Sedang Parkir
      lahan:
      do
      {--lahan; goto io;}
      while(lahan>=0);


    out:
    cout<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t\t    Kendaraan keluar"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"\t\tNo plat       : ";
    cin.get();
    getline (cin, platout);
    cout<<"\t\tJam Keluar    : ";
    cin>>jkeluar;


    if(platin1==platout)
    {
        if(kendaraan1==1)
        {
            biaya=(jkeluar-jmasuk1)*2000;
            platin1="0";
            goto biaya;
        }
        else if(kendaraan1==2)
        {
            biaya=(jkeluar-jmasuk1)*5000;
            platin1="0";
            goto biaya;
        }
    }
    else if(platin2==platout)
    {
        if(kendaraan2==1)
        {
            biaya=(jkeluar-jmasuk2)*2000;
            platin2="0";
            goto biaya;
        }
        else if(kendaraan2==2)
        {
            biaya=(jkeluar-jmasuk2)*5000;
            platin2="0";
            goto biaya;
        }
    }
    else if(platin3==platout)
    {
        if(kendaraan3==1)
        {
            biaya=(jkeluar-jmasuk3)*2000;
            platin3="0";
            goto biaya;
        }
        else if(kendaraan3==2)
        {
            biaya=(jkeluar-jmasuk3)*5000;
            platin3="0";
            goto biaya;
        }
    }
    else if(platin4==platout)
    {
        if(kendaraan4==1)
        {
            biaya=(jkeluar-jmasuk4)*2000;
            platin4="0";
            goto biaya;
        }
        else if(kendaraan4==2)
        {
            biaya=(jkeluar-jmasuk4)*5000;
            platin4="0";
            goto biaya;
        }
    }
    else if(platin5==platout)
    {
        if(kendaraan5==1)
        {
            biaya=(jkeluar-jmasuk5)*2000;
            platin5="0";
            goto biaya;
        }
        else if(kendaraan5==2)
        {
            biaya=(jkeluar-jmasuk5)*5000;
            platin5="0";
            goto biaya;
        }
    }
    else if(platin6==platout)
    {
        if(kendaraan6==1)
        {
            biaya=(jkeluar-jmasuk6)*2000;
            platin6="0";
            goto biaya;
        }
        else if(kendaraan6==2)
        {
            biaya=(jkeluar-jmasuk6)*5000;
            platin6="0";
            goto biaya;
        }
    }
    else if(platin7==platout)
    {
        if(kendaraan7==1)
        {
            biaya=(jkeluar-jmasuk7)*2000;
            platin7="0";
            goto biaya;
        }
        else if(kendaraan7==2)
        {
            biaya=(jkeluar-jmasuk7)*5000;
            platin7="0";
            goto biaya;
        }
    }
    else if(platin8==platout)
    {
        if(kendaraan8==1)
        {
            biaya=(jkeluar-jmasuk8)*2000;
            platin8="0";
            goto biaya;
        }
        else if(kendaraan8==2)
        {
            biaya=(jkeluar-jmasuk8)*5000;
            platin8="0";
            goto biaya;
        }
    }
    else if(platin9==platout)
    {
        if(kendaraan9==1)
        {
            biaya=(jkeluar-jmasuk9)*2000;
            platin9="0";
            goto biaya;
        }
        else if(kendaraan9==2)
        {
            biaya=(jkeluar-jmasuk9)*5000;
            platin9="0";
            goto biaya;
        }
    }
    else if(platin10==platout)
    {
        if(kendaraan10==1)
        {
            biaya=(jkeluar-jmasuk10)*2000;
            platin10="0";
            goto biaya;
        }
        else if(kendaraan10==2)
        {
            biaya=(jkeluar-jmasuk10)*5000;
            platin10="0";
            goto biaya;
        }
    }
    else
    {
        cout<<"Plat no yang dimasukkan salah, silahkan ulangi!";
        getch();
        system("cls");
        goto out;
    }

    biaya:
    cout<<"\t\tBiaya Parkir   : Rp. "<<biaya;
    getch();
    system("cls");

   	//Hitung Pendapatan
   	pendapatan=(total_biaya+biaya)+pendapatan;

      //Hitung Total Kendaraan Sudah Parkir
      do
    {
        ++total_ken; goto pk;
    }
      while(total_ken<=10000);

      pk:
      //Hitung Kendaraan Sedang parkir
      do
    {
        ++lahan; goto io;
    }
      while(lahan>=0);




    selesai:
    cout<<endl;
    cout << "\t\t||----------------------------------------------------||\n";
	cout << "\t\t||                                                    ||\n";
	cout << "\t\t||                 TERIMA KASIH                       ||\n";
	cout << "\t\t||               SELAMAT BERKENDARA                   ||\n";
	cout << "\t\t||       HATI - HATI DALAM PERJALANAN ANDA            ||\n";
	cout << "\t\t||                                                    ||\n";
	cout << "\t\t||----------------------------------------------------||\n";	
    getch();
    return 0;
}
