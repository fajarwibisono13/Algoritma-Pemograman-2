#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main (){
	
	int jmlh_a = 0;
	int jmlh_bukan = 0;
	char a[10];
	char z = 'a';
	
	for (int i=0;i<10;i++){
		
		cout << "masukan karakter = " ;
		gets(a);
		
		if(a[i] == z) {
			jmlh_a++;
		} else {
			
			jmlh_bukan++;
		}
	}
	
	cout << "Banyaknya Jumlah karakter A = " << jmlh_a << endl;
	cout << "Banyaknya Jumlah bukan A = " << jmlh_bukan << endl;
}