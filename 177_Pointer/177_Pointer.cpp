#include <iostream>
using namespace std;

class mahasiswa {
public :
	int nim;
	void showNim();									//Deklarasi methode
};


void mahasiswa::showNim() {							//Implememtasi methode diluar class
	cout << "No Induk = " << nim << endl;
}

int main() {
	//1. Penulisan cara ke 1
	mahasiswa mhs{ 1 };								//object mhs
	mhs.showNim();									//Member access operator


	//2. Penulisan cara ke 2
	mahasiswa& refMhs = mhs;						//Pointer Reference refMhs
	refMhs.nim = 2;									//Member access operator


	//3.Penulisan cara ke 3
	mahasiswa* pMhs = &mhs;							//Pointer Deference pMhs
	pMhs->nim = 3;									//Arrow Operator
	mhs.showNim();
	system("pause");
	return 0;
}