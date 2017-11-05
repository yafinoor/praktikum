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
	cout << "awal bekerja di minggu ke-2 = "; cin >> waktu[1];
	if (waktu[1]>40){
		gjl=(waktu[1]-40)*1.5*gj;
		gjt[1]=(gjp+gjl)*0.85;
		gja=gjp*0.85;
	}else{
		gjt[1]=gjp*0.85;
	}
	cout <<"awal bekerja di minggu ke-3 = "; cin >> waktu[2];
	if (waktu[2]>40){
		gjl=(waktu[2]-40)*1.5*gj;
		gjt[2]=(gjp+gjl)*0.85;
		gja+gjp*0.85;
	} else{
		gjt[2]=gjp*0.85;
	}
}
