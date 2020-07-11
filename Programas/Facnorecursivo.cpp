#include <iostream>

using namespace std;

int main (){
	
	int i, f = 1, numero;
	
	cout<<"Ingresa un numero: "; cin>>numero;
	
	if(numero <0) f = 0;
	else if(numero==0) f =1;
	else{
		for(i=1; i<=numero; i++){
			f = f*i;
		}
	} 
	
	cout<<"El Factorial de "<<numero<<"!"<<"es: "<<f;
	return 0;
}
