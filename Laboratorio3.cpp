#include <iostream>

using namespace std;

//Ejercicio 1
/*
int potencia(int n,int p){
	int resultado=1;
	for(int i =1;i<=p;i++){
		resultado=resultado*n;
	}
	return resultado;
}

int main(){
	int n;
	int p;
	int respuesta;
	cout<<"ingrese numero : ";
	cin>>n;
	cout<<"ingresa potencia : ";
	cin>>p;
	respuesta=potencia(n,p);
	cout<<"Respuesta : "<<respuesta<<endl;
	return 0;
}
*/
//Ejercicio 2
/*
int bisiesto(int anio){
	if (anio%4==0){
		if(anio%100==0){
			if(anio%400==0){
				return 1;
			}
			else{
				return 0;
			}
		}
		else{
			return 1;
		}
	}
	return 0;		
}

int main(){
	int anio;
	int respuesta;
	cout<<"Ingrese Anio : ";
	cin>>anio;
	respuesta=bisiesto(anio);
	if(respuesta==1){
		cout<<"El anio es bisiesto "<<endl;
	}
	else{
		cout<<"El  anio no es bisiesto"<<endl;
	}
	
	return 0;
}
*/

//Ejercicio 3


//Ejercicio 4

int primo(int n){
	
	int p;	
	 for(int i=2;i<=n;i++)
   {
       p=0;
       for(int d=2;d<i-1 && p==0;d++)
       {

        if(i%d==0) p=1;
        }
       if(p==0)
         cout<<"El valor "<<i<<endl;
   }
	
}
int main(){
	int n;
	
	cout<<"Ingrese valor : ";
	cin>>n;
	primo(n);
	return 0;
	
}


//Ejercicio 5

