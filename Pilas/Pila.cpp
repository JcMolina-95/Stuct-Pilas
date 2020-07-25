#include <iostream>
using namespace std;
 
struct pila{
    int nro;
    struct pila *sgte;
};
 
typedef pila *Pila;  
 
void push( Pila &p, int valor )
{
     Pila aux;
     aux = new(struct pila);  
     aux->nro = valor;
     
     aux->sgte = p ;
     p = aux ;
}
 

int pop( Pila &p )
{
     int num ;
     Pila aux;
     
     aux = p ;
     num = aux->nro;  
     
     p = aux->sgte ;
     delete(aux);
     
     return num;
}
 

void mostrar_pila(Pila p )
{
     Pila aux;
     aux = p;     
     
     while( aux !=NULL )
     {
            cout<<"\t"<< aux->nro <<endl;
            aux = aux->sgte;
     }    
}
 

void destruir_pila( Pila &p)
{
     Pila aux;
     
     while( p != NULL)
     {
           aux = p;
           p = aux->sgte;
           delete(aux);
     }
}
 

void menu()
{
    cout<<"\n\t IMPLEMENTACION DE PILAS EN C++\n\n";
    cout<<" 1. APILAR                                "<<endl;
    cout<<" 2. DESAPILAR                             "<<endl;
    cout<<" 3. MOSTRAR PILA                          "<<endl;
    cout<<" 4. DESTRUIR PILA                         "<<endl;
    cout<<" 5. SALIR                                 "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}
 

int main()
{
    Pila p = NULL;  
    int dato;
    int op;
    int x ; 
   
    system("color 0a");
 
    do
    {
        menu();  cin>> op;
 
        switch(op)
        {
            case 1:
 
                 cout<< "\n NUMERO A APILAR: "; cin>> dato;
                 push( p, dato );
                 cout<<"\n\n\t\tNumero " << dato << " apilado...\n\n";
            break;
 
 
            case 2:
 
                 x = pop( p );
                 cout<<"\n\n\t\tNumero "<< x <<" desapilado...\n\n";
            break;
                 
 
            case 3:
 
                 cout << "\n\n MOSTRANDO PILA\n\n";
                 if(p!=NULL)
                    mostrar_pila( p );
                 else
                    cout<<"\n\n\tPila vacia..!"<<endl;
            break;
 
 
            case 4:
 
                 destruir_pila( p );
                 cout<<"\n\n\t\tPila eliminada...\n\n";
            break;
           
         }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=5);
   
   
    return 0;
}
