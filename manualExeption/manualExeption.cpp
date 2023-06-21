#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0, 5; //melemparkar sebuah interger maka
		cout << "pertanyaan tidak akan dieksekusi " << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
}