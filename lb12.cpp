#include <iostream>
using namespace std;
 
struct nodo
{
    int nro;
    struct nodo *sgte;
};
 
struct cola
{
    nodo *delante;
    nodo *atras  ;
};
 
void encolar( struct cola &q, int valor )
{
     struct nodo *aux = new(struct nodo);
     
     aux->nro = valor;
     aux->sgte = NULL;
     
     if( q.delante == NULL)
         q.delante = aux;   
     else
         (q.atras)->sgte = aux;
         
     q.atras = aux;        
     
}

int desencolar( struct cola &q )
{
     int num ;
     struct nodo *aux ;
     
     aux = q.delante;     
     num = aux->nro;
     q.delante = (q.delante)->sgte;
     delete(aux);        
     
     return num;
}
 

void muestraCola( struct cola q )
{
     struct nodo *aux;
     
     aux = q.delante;
         
     while( aux != NULL )
     {
            cout<<"   "<< aux->nro ;
            aux = aux->sgte;
     }    
}

 
void menu()
{
    cout<<"COLAS"<<endl;
    cout<<" 1. AGREGAR                               "<<endl;
    cout<<" 2. ELIMINAR                              "<<endl;
    cout<<" 3. MOSTRAR COLA                          "<<endl;
    cout<<" 4. SALIR                                 "<<endl;
 
    cout<<"INGRESE OPCION: ";
}
 
int main()
{
    struct cola q;
   
    q.delante = NULL;
    q.atras   = NULL;
   
   
    int dato; 
    int op;    
    int x ;    
 
    do
    {
        menu();  cin>> op;
 
        switch(op)
        {
            case 1:
 
                 cout<< "NUMERO A AGREGAR: "; cin>> dato;
                 encolar( q, dato );
                 cout<<"Numero " << dato << " agregado ";
            break;
 
 
            case 2:
 
                 x = desencolar( q );
                 cout<<"Numero "<< x <<" eliminado";
            break;
                 
 
            case 3:
 
                 cout << "MOSTRANDO COLA";
                 if(q.delante!=NULL) muestraCola( q );
                 else   cout<<"Cola vacia"<<endl;
            break;
           
         }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=4);
   
   
    return 0;
}