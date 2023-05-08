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
	mahasiswa mhs{ 1 };								//object mhs
	mhs.showNim();									//Member access operator

	mahasiswa& refMhs = mhs;						//Pointer Reference refMhs
	refMhs.nim = 2;									//Member access operator

	mahasiswa* pMhs = &mhs;							//Poibnter Deference pMhs
	pMhs->nim = 3;									//Arrow Operator
	mhs.showNim();
	system("pause");
	return 0;
}