#include <iostream>
#include <string>


using namespace std;

main ()
{
				cout<<"=============================================="<<endl;
				cout<<"SELAMAT DATANG DI AYAM GEPREK PAK CONDRODRIANO"<<endl;
				cout<<"----------Jl.Kembang No 13, Surabaya----------"<<endl;
				cout<<"-----------------031-0564221------------------"<<endl;
				cout<<"=============================================="<<endl;
				
				
				int total1,total,harga,kembalian,kembalian1;	//variabel dari total, harga dan kembalian pembayaran
				int jumlah,bayar;			
				string promo;			
				int x,y;
				
				string u,p;
		 		int loginAttempt=0;
		 		
		 		while (loginAttempt<9999999999999999999){	//batas percobaan login tiga kali
 		cout<<"Masukkan Username : "; cin>>u;	//Masukan username :Pelanggan
    	cout<<"Masukkan Password : "; cin>>p;	//Masukan Password :geprekpakcondrodriano
 
   		 if(u == "Pelanggan" && p == "geprekpakcondrodriano")
		{
       		cout<<"Username dan Password Anda Cocok,Anda Berhasil Masuk!"<<endl;
       		
       		
       		char ulang='y';
       		do
			{
			
			
		cout<<"------------------------------------SILAHKAN PILIH MENU ANDA!----------------------------------------"<<endl;
		cout<<"_____________________________________________________________________________________________________"<<endl;
		cout<<"|1.	Paket Normal (Ayam Geprek lvl (1-8) + Nasi + Dimsum + Es Teh + Mie Goreng)	:Rp 28000			"<<endl;
		cout<<"|2.	Paket Hemat (Ayam Geprek lvl(1-8) + Nasi + Es Teh)				:Rp 16000						"<<endl;
		cout<<"|3.	Ala Carte																						"<<endl;
		cout<<"|	a.Ayam Geprek	:Rp 12000																		"<<endl;
		cout<<"|	b.Es Teh	:Rp 3000																			"<<endl;
		cout<<"|	c.Dimsum	:Rp 8000																			"<<endl;
		cout<<"|	d.Nasi		:Rp 5000																			"<<endl;
		cout<<"|	e.Mie Goreng	:Rp 7000																		"<<endl;
		cout<<"|	f.Soda Gembira	:Rp 6000																		"<<endl;
		cout<<"|	g.Kol Goreng	:Rp 3000																		"<<endl;
		cout<<"_____________________________________________________________________________________________________"<<endl;
		
		cout<<"Silahkan Pilih Menu yang anda inginkan	:";
		cin>>x;
		
		switch (x)
		{
			case 1 : //menu paket normal
			
			{
					
				cout<<"1.	Paket Normal"<<endl;
				harga= 28000; //nominal harga paket normal
				cout<<"Masukan jumlah	:";	// jumlah yang diinginkan
				cin>>jumlah;
				
				cout<<"Apakah ada kode promo	:";	//Jika memiliki kode promo 
				cin>>promo;
				
					if (promo == "CH343")
						{
							total=jumlah*harga*0.75;
							cout<<"Harga yang dibayar adalah	: Rp "<<total<<endl;
						
							cout<<"Nominal bayar	: Rp ";
							cin>>bayar;
							kembalian = bayar-total;
							cout<<"Kembalian	: Rp "<<kembalian<<endl;
						}
						
					else 
					{
						total1=jumlah*harga;
						cout<<"Harga yang dibayar adalah	: Rp "<<total1<<endl;
						
						cout<<"Nominal bayar	: Rp ";
						cin>>bayar;
						kembalian1 = bayar-total1;
						cout<<"Kembalian	: Rp "<<kembalian1<<endl;
					}

				cout<<"Apakah anda ingin kembali ke menu?	:";
				cin>>ulang;
				system ("cls");	
				break ;
			}
			
			
			case 2 : //menu paket hemat
				
			{
			
				cout<<"\n"<<"2.	Paket Hemat"<<endl;
				harga= 16000; //harga paket hemat
				cout<<"Masukan jumlah	:";	//jumlah yang diinginkan
				cin>>jumlah;
				
				cout<<"Apakah ada kode promo	:";	//Jika memiliki kode promo 
				cin>>promo;
				
					if (promo ==  "NTRAJA")
						{
							total=jumlah*harga*0.85;
							cout<<"Harga yang dibayar adalah	: Rp "<<total<<endl;
							
							cout<<"Nominal bayar	: Rp "; //pembayaran dengan uang berapa?
							cin>>bayar;
							kembalian = bayar-total;
							cout<<"Kembalian	: Rp "<<kembalian<<endl; //Kembalian yang didapat
							cout<<""<<endl;
						}
						
					else 
					
					{
						total=jumlah*harga;
						cout<<"Harga yang dibayar adalah	: Rp "<<total<<endl;
						
						cout<<"Nominal bayar	: Rp "; //pembayaran dengan uang berapa?
						cin>>bayar;
						kembalian1 = bayar-total1;
						cout<<"Kembalian	: Rp "<<kembalian1<<endl; //Kembalian yang didapat
						cout<<""<<endl;	
					}
				
					cout<<"Apakah anda ingin kembali ke menu?	:";
					cin>>ulang;
					system ("cls");
       				break ;
				
			}
			
			
			case 3 :
				
				
			{
			
				int a3,b3,c3,d3,e3,f3,g3;	//Variabel jumlah yang diinginkan	
				int	A3  = 12000;  		//harga Ayam Geprek		:Rp 12000																		
				int	B3  =  3000;		//harga Es Teh			:Rp 3000																	
				int	C3	=  8000;		//harga Dimsum			:Rp 8000																	
				int	D3	=  5000;		//harga Nasi			:Rp 5000																	
				int E3	=  7000;		//harga Mie Goreng		:Rp 7000																	
				int	F3	=  6000;		//harga Soda Gembira	:Rp 6000									
				int	G3	=  3000;		// harga Kol Goreng		:Rp 3000
				
				cout<<"Masukan Jumlah Ala carte yang diinginkan"<<endl;
				cout<<"Ayam Geprek	:";		cin>>a3;
				cout<<"Es Teh		:";		cin>>b3;
				cout<<"Dimsum		:";		cin>>c3;
				cout<<"Nasi		:";		cin>>d3;
				cout<<"Mie Goreng	:";		cin>>e3;
				cout<<"Soda Gembira	:";		cin>>f3;
				cout<<"Kol Goreng	:";		cin>>g3;
			
				
				
				cout<<"Apakah ada kode promo	:";	//Jika memiliki kode promo 
				cin>>promo;
				
					if (promo == "LOS321")
						{
							total=(A3*a3 + B3*b3 + C3*c3 + D3*d3 + E3*e3 + F3*f3 + G3*g3)*0.90;
							cout<<"Harga yang dibayar adalah	: Rp "<<total<<endl;
						
							cout<<"Nominal bayar	: Rp "; //pembayaran dengan uang berapa?
							cin>>bayar;
							kembalian = bayar-total;
							cout<<"Kembalian	: Rp "<<kembalian<<endl; //Kembalian yang didapat
							cout<<""<<endl;
						}
						
					else 
						{
							total1=A3*a3 + B3*b3 + C3*c3 + D3*d3 + E3*e3 + F3*f3 + G3*g3;
							cout<<"Harga yang dibayar adalah	: Rp "<<total1<<endl;
						
							cout<<"Nominal bayar	: Rp "; //pembayaran dengan uang berapa?
							cin>>bayar;
							kembalian1 = bayar-total1;
							cout<<"Kembalian	: Rp "<<kembalian1<<endl; //Kembalian yang didapat
							cout<<""<<endl;
						}
					
				cout<<"Apakah anda ingin kembali ke menu?	:";
				cin>>ulang;
				system ("cls");	
				break ;	
			}
			
			default: cout<<"Invalid Menu,please try again!"<<endl<<endl;
			
		}
		}
			while (ulang=='y');
			cout<<"Terima Kasih Atas Kunjungan Anda di ''Ayam Geprek Pak Condrodriano''";
            return 0;
			
	}	
				
		else{
       	cout<<"Ooops,Username atau Password Anda Salah!"<<endl;
      	 loginAttempt++;
   		 }

		if(loginAttempt==3){
		cout<<"Terlalu sering gagal";
		cout<<"Tidak tersedia karena sudah terlalu sering gagal.Coba lagi dalam beberapa saat lagi."<<endl;
		}
	
		
	
		}
}
