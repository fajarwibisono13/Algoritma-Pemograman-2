#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void prosesbaca();
int proseshitung();
void prosestampil();


int bil,fak=1;

int main () {
	
	prosesbaca();
	proseshitung();
	prosestampil();
	
}

void prosesbaca () {
	
	cout << "Masukan Nilai : ";
	cin >>  bil;
	
}

int proseshitung () {
	
	for(int a=bil;a>=2;a--) {
	 	 
		fak=a*fak;
		
		
	}
	
	
}


void prosestampil(){
	
	cout << "Hasil Faktorisasinya adalah = " ; 
	cout << fak;
	
	
}
