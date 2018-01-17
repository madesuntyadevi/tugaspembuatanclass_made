#include <iostream>
#include <string>
using namespace std;

class bola{
	public:
		void kencang(string warna);	
		void kempis(int diameter);
		int beratBola;
		int diameterBola;
		int hargaBola;
		string jenisbola;
		string merkBola;
};

int main(){
	bola menggelinding,memantul,lempar;
	
	//jenis bola
	menggelinding.jenisbola = "BOLA KECIL ";
	memantul.jenisbola = "BOLA SEDANG ";
	lempar.jenisbola = "BOLA BESAR ";
	
	//harga bola
	menggelinding.hargaBola = 15.000 ;
	memantul.hargaBola = 180.000 ;
	lempar.hargaBola = 450.000 ;
	
	//merk bola
	menggelinding.merkBola = "PROTEAM ";
	memantul.merkBola = "MIKASA ";
	lempar.merkBola = "MOLTEN ";
	
	//berat bola
	menggelinding.beratBola = 260;
	memantul.beratBola = 600 ;
	lempar.beratBola = 70 ;
	
	//kencang warna
	cout << (menggelinding.jenisbola);
	menggelinding.kencang("HIJAU STABILO ");
	cout << "Merk Bola  : " <<menggelinding.merkBola<<endl;
	cout << "Berat Bola : " <<menggelinding.beratBola<<" gram"<<endl;
	
	cout << (memantul.jenisbola);
	memantul.kencang("COKLAT ");
	cout << "Merk Bola  : " <<memantul.merkBola<<endl;
	cout << "Berat Bola : " <<memantul.beratBola<<" gram"<<endl;
	
	cout << (lempar.jenisbola);
	lempar.kencang("BIRU KUNING ");
	cout << "Merk Bola  : " <<lempar.merkBola<<endl;
	cout << "Berat Bola :" <<lempar.beratBola << " gram"<<endl;
	
	//kempis ukuran
	cout << " Untuk "<<lempar.jenisbola<<endl;
}

void bola::kencang(string warna){
	cout << "Jika kencang maka warnanya "<<warna<< " !!"<<endl;

}
void bola::kempis(int diameter){
	cout << "Jika kempis ukuran diameter <cm> adalah "<<diameter<< " !!"<<endl;
}
