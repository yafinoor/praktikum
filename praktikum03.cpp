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
	if (waktu[2]>40){
 			gjl=(waktu[2]-40)*1.5*gj;
 			gjt[2]=(gjp+gjl)*0.85;
 			gja=gjp*0.85;
 		}else{
 			gjt[2]=gjp*0.85;
 		}
 	cout << "waktu anda bekerja minggu ke-4 = "; cin >> waktu[3];
 		if (waktu[3]>40){
 			gjl=(waktu[3]-40)*1.5*gj;
 			gjt[3]=(gjp+gjl)*0.85;
 			gja=gjp*0.85;
 			cout << endl << "----------<Gaji Awal Pajak>----------" << endl;
			cout << "INFO : " << endl;
			cout << "Gaji Awal(+Pajak) = " << gja << endl;
			cout << "Pajak tiap Karyawan = 15%" << endl;
			cout << endl << "----------<GGaji Bersih>----------" << endl;
			cout << "Gaji Bersih Minggu ke-1 = " << gjt[0] << endl;
			cout << "Gaji Bersih Minggu ke-2 = " << gjt[1] << endl;
			cout << "Gaji Bersih Minggu ke-3 = " << gjt[2] << endl;
			cout << "Gaji Bersih Minggu ke-4 = " << gjt[3] << endl;
			gjt[4]=gjt[0]+gjt[1]+gjt[2]+gjt[3];
			cout << "Gaji Bersih Bulan Ini   = " << gjt[4];
}else{
			gjt[3]=gjp*0.85;
			cout << endl << "----------<Gaji Awal Pajak>----------" << endl;
			cout << "INFO : " << endl;
			cout << "Gaji Awal(+Pajak) = " << gja << endl;
			cout << "Pajak tiap Karyawan = 15%" << endl;
			cout << endl << "========[ GAJI BERSIH ]========" << endl;
			cout << "Gaji Bersih Minggu ke-1 = " << gjt[0] << endl;
			cout << "Gaji Bersih Minggu ke-2 = " << gjt[1] << endl;
			cout << "Gaji Bersih Minggu ke-3 = " << gjt[2] << endl;
			cout << "Gaji Bersih Minggu ke-4 = " << gjt[3] << endl;
			gjt[4]=gjt[0]+gjt[1]+gjt[2]+gjt[3];
			cout << "Gaji Bersih Bulan Ini   = " << gjt[4];
	}
  }

