#include <iostream>;
using namespace std;

int main(){
	int luas,lebar,alas,tinggi;
	char bidang;
	cout << "jenis bidang (P atau S) ? "; cin >> bidang;
	if (bidang=='P'){
		cout <<"nilai tinggi = "; cin >> tinggi;
		cout << "nilai lebar = "; cin >> lebar;
		luas = tinggi*lebar;
		cout << "luas persegi panjang adalah " << luas;
	}
}
