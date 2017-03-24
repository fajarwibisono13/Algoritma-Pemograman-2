#include <iostream>
using namespace std;

int tambahkan(int a, int b);

int main () {
	int a,b;
cout << "Masukan nilai A :";
cin >> a;
cout << "Masukan Nilai B :";
cin >> b;
cout << "======================= \n"; 
cout << "HASIL : " << tambahkan (a, b) << "\n";
cout << "======================= \n"; 
return 0;

}

int tambahkan (int a, int b) {

return a + b;


} 