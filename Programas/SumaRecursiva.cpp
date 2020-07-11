#include <iostream>

using namespace std;

int sumar(int n)
{
	int suma = 0;
	if(n ==1)
	{
		suma = 1;
	}
	else {
		suma = n + sumar(n-1);
	}
	return suma;
}
int main(){
	int numero;
	
	cout<<"Ingresa Un Numero: "; cin>>numero;
	cout<<"La suma es: "<<sumar(numero);
	return 0;
}
