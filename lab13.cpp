#include <iostream>
#include <ctime>

//Ejercicio 1
/*
using namespace std;
struct fecha {
		int dia;
		int mes;
		int anio;
		char nombre_mes[9];
	}; 
	struct companero{
		char nombre[10];
		fecha fc;
	};

int main(){	

	int n;
	cout<<"Numero de alumnos:";
	cin>>n;
	
	struct companero cn[n];
	
	for(int i=0;i<n;i++){
		cin.ignore();
		cout<<"Ingrese el nombre:";
		cin>>cn[i].nombre;
		cout<<"Fecha de nacimiento "<<endl;
		cout<<"Dia: ";
		cin>>cn[i].fc.dia;
		cout<<"Mes: " ;
		cin>>cn[i].fc.mes;
		cout<<"Anio: ";
		cin>>cn[i].fc.anio;
	}
	time_t t;
	struct tm *fecha;
	fecha=localtime(&t);

	cout<<"Cumplenios de este mes : "<<endl;
	for(int i=0;i<n;i++){
		if(cn[i].fc.mes==6 ){
			cout<<"Datos"<<endl;
			cout<<"Nombre: "<<cn[i].nombre<<endl;
			cout<<"Dia: "<<cn[i].fc.dia<< endl;
		}
		
		"Ninguno";
	}
	system("pause");
	return 0;
}

*/

//Ejercicio2
/*
using namespace std;

struct alumno{
    string nombre;
    char grupo;
    float n1, n2, n3, PF;
};

int main(){
    int n;
    cout << "Numero de alumnos: ";
    cin >> n;
    cout<<endl<<endl;

    struct alumno a[n];
    float promedio[n];
    
    for(int i=0; i<n; i++){
        cout << "Alumno  [" << i+1 << "] :" ;
        cout<<endl<<endl;
        cout << "Nombre del alumno [" << i+1 << "]: " ;
        cin.ignore();
        getline(cin,a[i].nombre);
        cout << "Ingrese el grupo de estudios 'A' o 'B' : ";
        cin >> a[i].grupo;
        cout<<"Ingresar notas"<<endl;
        cout << "Primera fase: ";
        cin >> a[i].n1;
        cout << "Segunda fase: ";
        cin >> a[i].n2;
        cout << "Tercera fase: ";
        cin >> a[i].n3;
        cout << "Proyecto Final: ";
        cin >> a[i].PF;
        cout << endl<<endl;

        promedio[i] = (a[i].n1*(15/100.)) + (a[i].n2*(20/100.)) + (a[i].n3*(25/100.)) + (a[i].PF*(40/100.));
    }
    cout << endl<<endl;
    cout << "Notas: "<<endl;
    for(int i=0; i<n; i++){
        cout << "Alumno [" << i+1 << "]" << endl;
        cout << "Nombre : " << a[i].nombre <<endl;
		cout<<"Grupo : " << a[i].grupo << endl;
        cout << "Promedio de Notas : " << promedio[i] << endl;
        cout << endl;
    }
    
    return 0;
}


*/

//Ejercicio 4

using namespace std;

struct empleado{
    string nombre;
    char sexo;
    float sueldo;
};

int main(){
    int n;
    int mayor, menor;
    int MayorSueldo, MenorSueldo;
    cout << "Numero de empleados: ";
    cin >> n;
    struct empleado em[n];
    cout << endl<<endl;
    cout << "Ingrese los datos de los empleados: "<<endl;
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        cout << "Empleado [" << i+1 << "]" << endl;
        cout << "Ingrese el nombre del empleado [" << i+1 << "] : " ;
        cin.ignore();
        getline(cin,em[i].nombre);
        cout << "Ingrese el sexo del empleado 'H' o 'M' : ";
        cin >> em[i].sexo;
        cout << "Ingrese el sueldo del empleado[" << i+1 << "] : " ;
        cin >> em[i].sueldo;
        cout<< endl<<endl;
        
    }
    menor = em[0].sueldo;
    mayor = em[0].sueldo;
    for(int i=0; i<n; i++){
        if(em[i].sueldo >= mayor){
            mayor = em[i].sueldo;
            MayorSueldo = i;
        }
        if(em[i].sueldo <= menor){
            menor = em[i].sueldo;
            MenorSueldo = i;
        }
    }
    cout << endl<<endl;
    cout << "Datos del empleado con menor sueldo : "<<endl;
    cout << "Nombre: " << em[MenorSueldo].nombre << endl;
    cout << "Sueldo: " << em[MenorSueldo].sueldo << endl;
    cout << endl<<endl;
    cout << "Datos del empleado con mayor sueldo : "<<endl;
    cout << "Nombre: " << em[MayorSueldo].nombre << endl;
    cout << "Sueldo: " << em[MayorSueldo].sueldo << endl;
    
    return 0;
}


 
 
