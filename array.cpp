#include <iostream>
using namespace std;

int main (){
	/* NAMA  : SITI AYUNI
	   KELAS : ILKOMP B
	   NPM  : 2117051068
	   */
	 
   int n_hari;
   float rata_rata, jumlah;
   
   // input
   cin >> n_hari;
    for (int j=0; j<n_hari; j++){
    	float n[j];
    	cin >> n[j];
    	jumlah += n[j];
	}
   cout << endl;
   
   rata_rata = jumlah / n_hari;
   
   // output
   
   cout << " Rata-rata : " << rata_rata << " ETH" << endl;
   cout << " Total ETH : " << jumlah << " ETH"<< endl;
   cout << " Dalam USD : $" << jumlah*4000 << endl;
   
	return 0;
}
