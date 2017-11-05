#include <iostream>
using namespace std;

int main(){
	
	int x;
	cout << "Inputkan Angka = "; cin >> x;
	if (x>0){
		cout << x << " ini bilangan Positif coy !";
	}else if(x<0){
		cout << x << " ini bilangan Negatif coy !";
	}else if(x==0){
		cout << x << " ini bilangan Nol coy !";
	}
}
