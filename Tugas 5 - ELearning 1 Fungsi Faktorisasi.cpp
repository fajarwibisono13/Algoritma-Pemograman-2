#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
 int bil,fak=1;
 cout<<"masukkan bilangan = ";
 cin>>bil;
cout << bil <<"!= ";
cout << bil;
 for(int a=bil;a>=2;a--)
 {
	 	 
  fak=a*fak;
  
  cout  << "x" << a-1;

 }
 
 
 
 cout<<"= "<<fak;
 return 0;
}