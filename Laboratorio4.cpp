#include <iostream>
#include <string>

using namespace std;
/*
int main()
{
int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};
int limite = (sizeof(edades)/sizeof(edades[0])); //sizeof devuelve la memoria ocupada
for (int i = 0; i < limite; i++)
{
cout<<"Posicion "<<i<<" =  "<<edades[i]<<endl;
}
}
*/
//Ejercicio 1 
/*
int main(){
	string nombre[3];
	string apellido[3];
	string edad[3];
	string dni[3];
	cout<<"Ingrese los siguientes datos "<<endl;
	for(int i=0;i<3;i++){
		cout<<"Datos de la persona "<<i+1<<endl;
		cout<<"Nombre : ";
		cin>>nombre[i];
		cout<<"apeliido : ";
		cin>>apellido[i];
		cout<<"Edad : ";
		cin>>edad[i];
		cout<<"DNI : ";
		cin>>dni[i];
		
	}
	return 0;
}
*/
//Ejercicio 2

/*
bool buscar(int n [], int x){
	for (int i=0; i < 8; i++){
		if(n[i] == x){
			return true;
		}	
	}
	return false;
}

int main(){
	int n[7];
	int x;
	cout << "Ingrese 8 valores : "<<endl;
	for (int i=0; i < 8; i++){
		cin >> n[i];
	}
	cout << "Valor a  buscar : ";
	cin >> x;
	if (buscar(n, x) == true)
		cout << "TRUE"<<endl;
	else
		cout << "FALSE"<<endl;
}
*/
/*
bool primo(int i){
	int aux = 0;
	for (int j = 1; j <= i; j++){
		if (i % j == 0)
			aux++;
	}
	if (aux == 2)
		return true;
	else
		return false;
}

void decendente(int n[], int z){
	int aux;
	for (int i=0; i < z; i++){
		for(int j=0; j < z; j++){
			if (n[j] > n[j+1]){
				aux = n[j];
				n[j] = n[j+1];
				n[j+1] = aux;
			}
		}
	}
	cout << "Orden descendente : "<<endl;
	for (int i=z; i > 0; i--){
		cout <<"primo  " <<i<<" : "<< n[i] << endl;
	}
}
int main(){
	
	int n[100], z=0;
	for (int i=1; i < 101; i++){
		if (primo(i) == true){
			n[z] = i;
			z++;
		}
	}
	decendente(n, z);
	return 0;	
}
*/



