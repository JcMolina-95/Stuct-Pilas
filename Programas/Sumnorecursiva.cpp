#include <iostream>
using namespace std;
int main() {
   
   int n,i=1,suma=0;
   cout<<"Introduce un numero: ";
   cin>>n;
   
   while(i<=n)
   {
   	suma=suma+i;
   	i++;
   }
   
   cout<<"La suma es: "<<suma;
    return 0;
}
