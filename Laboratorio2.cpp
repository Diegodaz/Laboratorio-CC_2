#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
//Ejercicio 1
/*
int main (){
	int suma=0;
	
	for (int i=2; i<=100;i=i+2){
		suma=suma+i;	
	}
	cout<<"la suma de pares que estan entre 2 y 100 es :"<<suma<<endl;
	
	return 0;
}*/
//Ejercicio 2
/*int main (){
	
	
}*/

//Ejercicio 3
/*
int main(){
	for(int i=1;i<=20;i++){
		cout<<"5 x "<<i<<" = "<<i*5<<endl;	
	}
	
	return 0;
}
*/


//Ejercicio 4
//Ejercicio 5
//Ejercicio 6
/*
int main(){
	int a=1;
	int b=1;
	int n;
	int contador;
	cout<<"cantida de valores fibonacci : ";
	cin>>n;
	if (n<=1){
		cout<<"0"<<endl;
	}
	if (n<=2){
		cout<<"0"<<endl;
		cout<<"1"<<endl;
	}
	if (n>=3){
		cout<<"0"<<endl;
		cout<<"1"<<endl;
		cout<<"1"<<endl;
		for(int i=1;i<=n-3;i++){
			contador=a+b;
			b=a;
			a=contador;
			cout<<contador<<endl;
		}
			
	}
	return 0;
}
*/
//Ejercicio 7
/*
int main(){
	int contador=1;
	int n;
	int nota1;
	int nota2;
	int nota3;
	float promedio;
	cout<<"numero de estudiantes :";
	cin>>n;
	do{
		cout<<"estudiante "<<contador<<endl;
		cout<<"nota 1 : ";
		cin>>nota1;
		cout<<"nota 2 : ";
		cin>>nota2;
		cout<<"nota 3 : ";
		cin>>nota3;	
		promedio= nota1+nota2+nota3;
		promedio=promedio/3.;
		cout<<"El promedio del estudiante "<<contador<<" es : "<<promedio<<endl;
		contador++; 		
	}while(n==contador);
	
	return 0;	
}
*/
//Ejercicio 8
/*
int main(){
	int n;
	cout<<"tabla de multiplicar del : ";
	cin>>n;
	for(int i=1;i<=12;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}
*/
//Ejercicio 9
/*
int main(){
	int n;
	char a;
	
	cout<<"altura del triangulo : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}
*/

//Ejercicio 10
/*
int main(){
	char palabra[];
	int n;
	cout<<"Ingresar frase : ";
	cin>>palabra[];
	n=palabra.length();
	for(int i=n;i=1;i--){
		cout<<palabra[i];	
	}
	return 0;
}

*/
