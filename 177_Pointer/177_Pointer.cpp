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
	mahasiswa mhs{ 1 };
	mhs
}