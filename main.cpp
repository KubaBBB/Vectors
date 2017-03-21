#include "plik.h"
//#include "macierz.h"
#include <iostream>
#include <new>
#include <stdlib.h>
using namespace std;

int main(void)
{
//Do zrobienia jeszcze a*3 i 3*a oraz a*=3


vector a(3);
vector b(3);		//konstruktory
cin >> a;			//wejscie
cin >> b ;
int torf;
cout << "A : " << a << endl;	//wyjscie
cout << "B : " << b << endl;


cout << "A + B = " << a+b<<endl;	//+ -
cout << "A - B = " << a-b << endl; //   SPRAWDZIC NULLE w funkcji  

cout << "Czy A == B : ";		//!= i ==
torf = a == b;

cout << torf << endl;
cout << "Czy A != B : " ;
torf = a !=b;

cout <<torf<<endl;
vector wynik(3);
cout<<"\n_______________________________________________\n";
cout<<"wynik"<<endl<<wynik<<endl<<"a"<<endl<<a<<endl;

wynik=a;
			//=
cout<<"wynik"<<endl<<wynik<<endl<<"a"<<endl<<a<<endl;
//b*5;

a+=b;					//+= i -=
cout<<"a+=b"<<endl<<a<<endl;
b-=a;
cout<<"b-=a"<<endl<<b<<endl;

//cout<<(3*a);

/*
cout<< "A += B : ";
wynik+=a;
cout<<a<<endl;
cout<<"wynik"<<endl<<wynik;

for (int k=0; k<3 ; k++)
	cout << "a["<<k<<"] = " << a[k]<<endl;
cout<<endl<<"najpierw a potem b"<<endl<<a<<endl<<b<<endl;

*/

return 0;


}
