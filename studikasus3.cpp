#include<iostream>

using namespace std;
int main ()
{
    int switcase,diskon,harga,jumlah,total,bayar,kembalian,harga_akhir ;
    char status;
	do{	
	    cout <<"1.Ayam geprek   :21.000" <<endl;
		cout <<"2.Ayam goreng   :17.000" <<endl;
		cout <<"3.Udang goreng  :19.000" <<endl;
		cout <<"4.Cumi goreng   :20.000" <<endl;
		cout <<"5.ayam bakar    :25.000" <<endl;
    
    cout<<'\n'<<"silahkan inpur nomor menu makanan :";
    cin>>switcase;
    switch (switcase){
    case 1:
        cout<<'\n'<<"AYAM GORENG"<<endl;
        harga=21000;
        cout<<"jumlah pembelian :";
        cin>>jumlah; total=harga*jumlah;
        cout<<"total harga : Rp. "<<total<<endl;
        cout << endl;
 
        if ((total >= 25000) && (total < 50000)) {
        harga_akhir = total - (3000);
        cout << "Selamat, anda mendapat diskon 3000" << endl;
        }
        else if ((total >= 50000) && (total < 150000)) {
        harga_akhir = total - (5000) - (0.15*bayar);
        cout << "Selamat, anda mendapat diskon 15% - 5000" << endl;
        }
        else if (bayar >= 150000) {
        harga_akhir = bayar - (8000) - (0.35*bayar);
        cout << "Selamat, anda mendapat diskon 35% - 5000" << endl;
        } 
        else {
        harga_akhir = bayar;
        }
        
            cout<<"Berapa uang anda : Rp. ";
            cin>>bayar;
            kembalian=bayar-harga_akhir;
        
        cout<<"KEMBALI : Rp. "<<kembalian<<endl;
        break;
    case 2:
        cout<<'\n'<<"AYAM GORENG"<<endl;
            harga=17000;
        cout<<"jumlah pembelian :";
        cin>>jumlah;
            total=harga*jumlah;
        cout<<"total harga : Rp. "<<total<<endl;
         cout << endl;
 
        if ((total >= 25000) && (total < 50000)) {
        harga_akhir = total - (3000);
        cout << "Selamat, anda mendapat diskon 3000" << endl;
        }
        else if ((total >= 50000) && (total < 150000)) {
        harga_akhir = total - (5000) - (0.15*bayar);
        cout << "Selamat, anda mendapat diskon 15% - 5000" << endl;
        }
        else if (bayar >= 150000) {
        harga_akhir = bayar - (8000) - (0.35*bayar);
        cout << "Selamat, anda mendapat diskon 35% - 5000" << endl;
        } 
        else {
        harga_akhir = bayar;
        }
        
            cout<<"Berapa uang anda : Rp. ";
            cin>>bayar;
            kembalian=bayar-harga_akhir;
        
        cout<<"KEMBALI : Rp. "<<kembalian<<endl;
        break;
    case 3:
        cout<<'\n'<<"UDANG GORENG"<<endl;
            harga=19000;
        cout<<"jumlah pembelian :";
        cin>>jumlah;
            total=harga*jumlah;
        cout<<"total harga : Rp. "<<total<<endl;
        cout << endl;
 
        if ((total >= 25000) && (total < 50000)) {
        harga_akhir = total - (3000);
        cout << "Selamat, anda mendapat diskon 3000" << endl;
        }
        else if ((total >= 50000) && (total < 150000)) {
        harga_akhir = total - (5000) - (0.15*bayar);
        cout << "Selamat, anda mendapat diskon 15% - 5000" << endl;
        }
        else if (bayar >= 150000) {
        harga_akhir = bayar - (8000) - (0.35*bayar);
        cout << "Selamat, anda mendapat diskon 35% - 5000" << endl;
        } 
        else {
        harga_akhir = bayar;
        }
        
            cout<<"Berapa uang anda : Rp. ";
            cin>>bayar;
            kembalian=bayar-harga_akhir;
        
        cout<<"KEMBALI : Rp. "<<kembalian<<endl;
        break;
    case 4:
        cout<<'\n'<<"CUMI GORENG"<<endl;
            harga=20000;
        cout<<"jumlah pembelian :";
        cin>>jumlah;
            total=harga*jumlah;
        cout<<"total harga : Rp. "<<total<<endl;
         cout << endl;
 
        if ((total >= 25000) && (total < 50000)) {
        harga_akhir = total - (3000);
        cout << "Selamat, anda mendapat diskon 3000" << endl;
        }
        else if ((total >= 50000) && (total < 150000)) {
        harga_akhir = total - (5000) - (0.15*bayar);
        cout << "Selamat, anda mendapat diskon 15% - 5000" << endl;
        }
        else if (bayar >= 150000) {
        harga_akhir = bayar - (8000) - (0.35*bayar);
        cout << "Selamat, anda mendapat diskon 35% - 5000" << endl;
        } 
        else {
        harga_akhir = bayar;
        }
        
            cout<<"Berapa uang anda : Rp. ";
            cin>>bayar;
            kembalian=bayar-harga_akhir;
        
        cout<<"KEMBALI : Rp. "<<kembalian<<endl;
        break;
    case 5:
        cout<<'\n'<<"AYAM BAKAR"<<endl;
            harga=25000;
        cout<<"jumlah pembelian :";
        cin>>jumlah;
            total=harga*jumlah;
        cout<<"total harga : Rp. "<<total<<endl;
        cout << endl;
 
        if ((total >= 25000) && (total < 50000)) {
        harga_akhir = total - (3000);
        cout << "Selamat, anda mendapat diskon 3000" << endl;
        }
        else if ((total >= 50000) && (total < 150000)) {
        harga_akhir = total - (5000) - (0.15*bayar);
        cout << "Selamat, anda mendapat diskon 15% - 5000" << endl;
        }
        else if (bayar >= 150000) {
        harga_akhir = bayar - (8000) - (0.35*bayar);
        cout << "Selamat, anda mendapat diskon 35% - 5000" << endl;
        } 
        else {
        harga_akhir = bayar;
        }
        
            cout<<"Berapa uang anda : Rp. ";
            cin>>bayar;
            kembalian=bayar-harga_akhir;
        
        cout<<"KEMBALI : Rp. "<<kembalian<<endl;
        break;
		default:
			cout<<"error"<<endl;
		}
		cout<<"Lagi [Y/N]? ";
        cin>> status;
        }while(status=='Y'||status=='y');
        cout<<"Keluar dari loop"<<endl;
     return 0;
}
