#include<iostream>
using namespace std;
   
int factorial(int n)
{
  
   if(n == 1)
      return 1;
  
   else
      return n*factorial(n-1);
}
  
int main(void)
{
   int val;
   int result; 
  
   cout << "\nIntroduce valor: ";
   cin >> val;
  
   result = factorial(val); 
  
   cout << "El resultado de " << val << "! es: " << result;
  
   return 0;
  
}
