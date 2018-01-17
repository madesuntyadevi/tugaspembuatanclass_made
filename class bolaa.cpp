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
	
}
