#include <iostream>
using namespace std;

int main(){
	int gj = 5000, gjp = 840000;
	int waktu[3],gjl,gja,gjt[4];
	cout << "awal bekerja minggu ke-1 = "; cin >> waktu[0];
	if (waktu[0>40]){
		gjl=(waktu[0]-40)*1.5*gj;
		gjt[0]=(gjp+gjl)*0.85;
		gja=gjp*0.85;
	}else{
		gjt[0]=gjp*0.85;
	}
}
