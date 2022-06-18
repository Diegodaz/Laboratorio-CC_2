#include <iostream>
using namespace std;
 /*
struct nodo{
    int nro;
    struct nodo *sgte;
};
 
typedef nodo *ptrPila;  
//APILAR ELEMENTO
void push( ptrPila &p, int valor )
{
     ptrPila aux;
     aux = new(struct nodo);  
     aux->nro = valor;
     
     aux->sgte = p ;
     p = aux ;
}
 
//ELIMINAR ELEMENTO
int pop( ptrPila &p )
{
     int num ;
     ptrPila aux;
     
     aux = p ;
     num = aux->nro;   
     
     p = aux->sgte ;
     delete(aux);
     
     return num;
}
 
//MOSTRAR PILA
void mostrar_pila( ptrPila p )
{
     ptrPila aux;
     aux = p;     
     
     while( aux !=NULL )
     {
            cout<<"\t"<< aux->nro <<endl;
            aux = aux->sgte;
     }    
}
 

void menu()
{
    cout<<"PILAS "<<endl;
    cout<<" 1. AGREGAR                          "<<endl;
    cout<<" 2. ELIMINAR ULTIMO ELEMENTO AGREGADO"<<endl;
    cout<<" 3. MOSTRAR                          "<<endl;
    cout<<" 4. SALIR                            "<<endl;
 
    cout<<"INGRESE OPCION: ";
}
 

int main()
{
    ptrPila p = NULL;  
    int dato;
    int op;
    int x ; 
   
    
 
    do
    {
        menu();  cin>> op;
 
        switch(op)
        {
            case 1:
 
                 cout<< "NUMERO A APILAR: "; 
				 cin>> dato;
                 push( p, dato );
            break;
 
 
            case 2:
 
                 x = pop( p );
                 cout<<"Numero "<< x <<" eliminado "<<endl;
            break;
            case 3:
 
                 cout << "MOSTRANDO PILA"<<endl;
                 if(p!=NULL)
                    mostrar_pila( p );
                 else
                    cout<<"Pila vacia..!"<<endl;
            break;
 

           
         }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=4);
   
   
    return 0;
}
*/

void hanoi(int num,char A,char C,char B)
{
    if(num==1)
    {
            cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
             
    }
    else
    {
        hanoi(num-1,A,B,C);
        cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
        hanoi(num-1,B,C,A);
    }
}
 
int main()
{
        int n;
        char A,B,C;
 
        cout<<"Bases A B C\n";
        cout<<"Numero de discos: ";
        cin>>n;
        hanoi(n,'A','C','B');
         
}