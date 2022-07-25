#include <iostream>
#include <vector>
using namespace std;

class Automovil{
public:
	vector<string> componentes;
	void ListaComp()const {
		cout << "Componentes: ";
		for (size_t i = 0; i < componentes.size(); i++) {
			if (componentes[i] == componentes.back()) {
				cout << componentes[i];
			}
			else {
				cout << componentes[i] << ", ";
			}
		}
		cout << endl<<endl;
	}
};

class IBuilder{
public:
	virtual ~IBuilder() {}
	virtual void ProducirPuerta(string) const = 0;
	virtual void ProducirLlanta(string) const = 0;
	virtual void ProducirTimon(string) const = 0;
	virtual void ProducirAsiento(string) const = 0;
	virtual void ProducirMotor(string) const = 0;
	virtual void ProducirEspejo(string) const = 0;
	virtual void ProducirVidrio(string) const = 0;
};

class BuilderEspecifico : public IBuilder{
private:
	Automovil* product;
public:
	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete product;
	}
	void Reset() {
		this->product = new Automovil();
	}
	
	void ProducirPuerta(string color)const override{
		string temp = "Puerta["+color+"]";
		this->product->componentes.push_back(temp);
	}
	void ProducirLlanta(string color)const override{
		string temp = "Llanta["+color+"]";
		this->product->componentes.push_back(temp);
	}
	void ProducirTimon(string color)const override{
		string temp = "Timon["+color+"]";
		this->product->componentes.push_back(temp);
	}
	void ProducirAsiento(string color)const override{
		string temp = "Asiento["+color+"]";
		this->product->componentes.push_back(temp);
	}
	void ProducirMotor(string color)const override{
		string temp = "Motor["+color+"]";
		this->product->componentes.push_back(temp);
	}
	void ProducirEspejo(string color)const override{
		string temp = "Espejo["+color+"]";
		this->product->componentes.push_back(temp);
	}
	void ProducirVidrio(string color)const override{
		string temp = "Vidrios["+color+"]";
		this->product->componentes.push_back(temp);
	}
	
	Automovil* GetProducto(){
		Automovil* resultado = this->product;
		this->Reset();
		return resultado;
	}
};

int main(){
	BuilderEspecifico* builder = new BuilderEspecifico();
	Automovil* p; 
	int op_p;
	int op_ps1;
	int op_ps2;
	int op_ps3;
	int op_ps4;
	int op_ps5;
	int op_ps6;
	int op_ps7;
	int op_ps8;
	int op_ps9;
	int op_ps10;
	
	bool comp_ps8 = true; 
	while(true){
		cout<<"MENU PARA FABRICAR UN AUTOMOVIL"<<endl;
		cout<<"1. Agregar puerta"<<endl;
		cout<<"2. Agregar llanta"<<endl;
		cout<<"3. Agregar timon"<<endl;
		cout<<"4. Agregar asiento"<<endl;
		cout<<"5. Agregar motor"<<endl;
		cout<<"6. Agregar espejo"<<endl;
		cout<<"7. Agregar vidrios"<<endl;
		cout<<"8. Construir vehiculo"<<endl;
		cout<<"9. Mostrar componentes "<<endl;
		cout<<"10. Salir"<<endl;
		do{
			cout<<"Ingrese opcion: ";
			cin>>op_p;
			if(op_p==1||op_p==2||op_p==3||op_p==4||op_p==5||op_p==6||op_p==7||op_p==8||op_p==9||op_p==10){
				break;
			}
			else{
				cout<<"Error, volver a intentar"<<endl<<endl;
			}
		}while(true);
		cout<<endl;
		//Puerta
		if(op_p==1){
			cout<<"COLOR DE LA PUERTA:"<<endl;
			cout<<"1. Azul "<<endl;
			cout<<"2. Plomo"<<endl;
			cout<<"3. Blanco"<<endl;
			do{
				cout<<"Ingrese opcion: ";
				cin>>op_ps1;
				if(op_ps1==1||op_ps1==2||op_ps1==3){
					break;
				}
				else{
					cout<<"Error,volver a intentar"<<endl<<endl;
				}
			}while(true);
			cout<<endl;
			if(op_ps1==1){
				builder->ProducirPuerta("Azul");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps1==2){
				builder->ProducirPuerta("Plomo");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps1==3){
				builder->ProducirPuerta("Blanco");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
		}
		//Llanta
		if(op_p==2){
			cout<<"COLOR DE LA LLANTA:"<<endl<<endl;
			cout<<"1. Negro"<<endl;
			cout<<"2. Gris"<<endl;
			cout<<"3. Plomo"<<endl;
			cout<<"4. Blanco"<<endl;
			do{
				cout<<"Ingrese  opcion: ";
				cin>>op_ps2;
				if(op_ps2==1||op_ps2==2||op_ps2==3||op_ps2==4){
					break;
				}
				else{
					cout<<"Error, volver a intentar"<<endl<<endl;
				}
			}while(true);
			cout<<endl;
			if(op_ps2==1){
				builder->ProducirLlanta("Negro");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps2==2){
				builder->ProducirLlanta("Gris");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps2==3){
				builder->ProducirLlanta("Plomo");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps2==4){
				builder->ProducirLlanta("Blanco");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
		}
		//Timon
		if(op_p==3){
			cout<<"COLOR DEL TIMON"<<endl;
			cout<<"1. Cafe"<<endl;
			cout<<"2. Negro"<<endl;
			do{
				cout<<"Ingrese opcion: ";
				cin>>op_ps3;
				if(op_ps3==1||op_ps3==2){
					break;
				}
				else{
					cout<<"Error, volver a intentar"<<endl<<endl;
				}
			}while(true);
			cout<<endl;
			if(op_ps3==1){
				builder->ProducirTimon("Cafe");
				cout<<"COLOR AGREGADO"<<endl;
			}
			else if(op_ps3==2){
				builder->ProducirTimon("Negro");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
		}
		//Asiento
		if(op_p==4){
			cout<<"MENU PARA ELEGIR EL COLOR DEL ASIENTO:"<<endl;
			cout<<"1. Cafe"<<endl;
			cout<<"2. Negro"<<endl;
			cout<<"3. Plomo"<<endl;
			do{
				cout<<"Ingrese opcion: ";
				cin>>op_ps4;
				if(op_ps4==1||op_ps4==2||op_ps4==3){
					break;
				}
				else{
					cout<<"Error, volver a intentar"<<endl<<endl;
				}
			}while(true);
			cout<<endl;
			if(op_ps4==1){
				builder->ProducirAsiento("Cafe");
				cout<<"COLOR AGREGADO"<<endl;
			}
			else if(op_ps4==2){
				builder->ProducirAsiento("Negro");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps4==3){
				builder->ProducirAsiento("Plomo");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
		}
		//Motor
		if(op_p==5){
			cout<<"MENU DEL MOTOR:"<<endl;
			cout<<"1. Negro"<<endl;
			cout<<"2. Plomo"<<endl;
			do{
				cout<<"Ingrese opcion: ";
				cin>>op_ps5;
				if(op_ps5==1||op_ps5==2){
					break;
				}
				else{
					cout<<"Error, volver a intentar"<<endl<<endl;
				}
			}while(true);
			cout<<endl;
			if(op_ps5==1){
				builder->ProducirMotor("Negro");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps5==2){
				builder->ProducirMotor("Plomo");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
		}
		//Espejo
		if(op_p==6){
			cout<<"COLOR DEL ESPEJO:"<<endl;
			cout<<"1. Azul "<<endl;
			cout<<"3. Blanco"<<endl;
			do{
				cout<<"Ingrese el numero de la opcion: ";
				cin>>op_ps6;
				if(op_ps6==1||op_ps6==2){
					break;
				}
				else{
					cout<<"Error, volver a intentar"<<endl<<endl;
				}
			}while(true);
			cout<<endl;
			if(op_ps6==1){
				builder->ProducirEspejo("Azul ");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}

			else if(op_ps6==2){
				builder->ProducirEspejo("Blanco");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
		}

		//Vidrio
		if(op_p==7){
			cout<<"COLOR DE LA VIDRIOS:"<<endl;
			cout<<"1. Transparente"<<endl;
			cout<<"2. Opaco"<<endl;
			do{
				cout<<"Ingrese  opcion: ";
				cin>>op_ps7;
				if(op_ps7==1||op_ps7==2){
					break;
				}
				else{
					cout<<"Error, volver a intentar"<<endl<<endl;
				}
			}while(true);
			cout<<endl;
			if(op_ps7==1){
				builder->ProducirVidrio("Transparente");
				cout<<"COLOR AGREGADO"<<endl<<endl;
			}
			else if(op_ps7==2){
				builder->ProducirVidrio("Opaco");
				cout<<"COLOR AGREGADO"<<endl;
			}
		}
		
		//Construir Vehiculo
		else if(op_p==8){
			if(comp_ps8==false){
				delete p;
				p = builder->GetProducto();
			}
			else{
				p = builder->GetProducto();
				comp_ps8=false;
			}
			cout<<"Vehiculo Construido"<<endl<<endl;
		}
		//Ver componentes del auto construido
		else if(op_p==9){
			p->ListaComp();
		}
		//Salir del programa
		else if(op_p==10){
			if(comp_ps8==false){
				delete p;
			}
			delete builder;
			break;
		}
	}
	return 0;
}