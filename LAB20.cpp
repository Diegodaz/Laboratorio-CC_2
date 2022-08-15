#include <iostream>
#include <memory>
using namespace std;
//Ejercicio 1
/*
class Point{
public:
	Point(double x, double y) : x(x), y(y) {};
	void print(){
		cout << "(" << x << ", " << y << ")\n";
	}
	void X(double x){
		this->x = x;
	}
	void Y(double y){
		this->y = y;
	}
	double x{}, y{};
};
int main(int argc, char *argv[]) {
	//Se crea un valor de tipo double(1.0) y su direccion de memoria es guardada en el puntero d 
	double* d = new double(1.0);
	cout<<"Double *d: "<<*d<<"\n";
	
	//Se crea un valor de tipo Point(1.0, 2.0) y su direccion de memoria es guardada en el puntero pt
	Point* pt = new Point(1.0, 2.0);
	cout<<"Punto *pt: ";
	pt->print();
	
	//Se modifica el valor del double que esta en la dirección de memoria guardada por el puntero d de 1.0 a 2.0
	*d = 2.0;
	cout<<"Double *d: "<<*d<<"\n";
	
	//modifican valores del Point  en la dirección de memoria guardada 
	//por el puntero pt mediante una desrefencia
	(*pt).X(3.0);
	(*pt).Y(3.0);
	cout<<"Punto *pt: ";
	pt->print();
	
	//modifican valores del Point  en la dirección de memoria guardada 
	//por el puntero pt mediante una desrefencia
	pt->X(3.0);
	pt->Y(3.0);
	cout<<"Punto *pt: ";
	pt->print();
	
	//Se elimina los valores almacenados 
	//en la direcciones de memoria almacenadas por los punteros d y pt
	delete d;
	delete pt;
	
	return 0;
}
*/

//Ejercicio 2
/*

class Punto{
public:
	Punto(double x, double y) : x(x), y(y) {};
	void print(){
		std::cout << "(" << x << ", " << y << ")\n";
	}
	void X(double n) { x = n; }
	void Y(double n) { y = n; }
private:
	double x{}, y{};
};
int main()
{
	std::unique_ptr<double> d{ new double(1.0) };
	std::unique_ptr<Punto> pt{ new Punto(1.0, 2.0) };
	std::cout << "Valor de d inicial: "<<*d<<"\n";
	std::cout << "Punto inicial: "; pt->print();
	*d = 2.0;
	std::cout << "Valor de d cambiado: " << *d << "\n";
	(*pt).X(3.0);
	(*pt).Y(3.0);
	pt->X(3.0);
	pt->Y(3.0);
	std::cout << "Punto cambiado: "; pt->print();
	return 0;
}
*/
//Ejercicios 3
/*
class C1{
private:
	shared_ptr<double> d;
public:
	C1(shared_ptr<double> value) : d(value) {}
	virtual ~C1() { 
		cout << "C1 destructor\n"; 
	}
	void print() const { 
		cout << "Valor " << *d; 
	}
};
class C2{
private:
	shared_ptr<double> d;
public:
	C2(shared_ptr<double> value) : d(value) {}
	virtual ~C2() { 
		cout << "C2 destructor\n"; 
	}
	void print() const { 
		cout << "Valor " << *d; 
	}
};
int main(int argc, char *argv[]){
	
	shared_ptr<double> valp = make_shared<double>(0.5); 
	C1 c1(valp);
	C2 c2(valp);
	
	c1.print();
	cout<<"\n";
	c2.print();
	cout<<"\n";
	
	return 0;
}
*/
//Ejercicio 4
/*
class Point{
public:
	Point(double x, double y) : x(x), y(y) {};
	~Point(){
		cout << "Destructor de Point";
	}
	void print(){
		cout << "(" << x << ", " << y << ")";
	}
	void X(double x){
		this->x = x;
	}
	void Y(double y){
		this->y = y;
	}
private:
	double x{}, y{};
};
class C1{
private:
	shared_ptr<Point> d;
public:
	C1(shared_ptr<Point> value) : d(value) {}
	virtual ~C1() { 
		cout << "C1 destructor\n"; 
	}
	void print() const { 
		cout << "Valor "; 
		(*d).print();
	}
};
class C2{
private:
	shared_ptr<Point> d;
public:
	C2(shared_ptr<Point> value) : d(value) {}
	virtual ~C2() { 
		cout << "C2 destructor\n"; 
	}
	void print() const { 
		cout << "Valor "; 
		(*d).print();
	}
};
int main(int argc, char *argv[]){
	
	shared_ptr<Point> valp = make_shared<Point>(0.5, 2.5); 
	C1 c1(valp);
	C2 c2(valp);
	
	c1.print();
	cout<<"\n";
	c2.print();
	cout<<"\n";
	
	return 0;
}
*/

//Ejercicio 5

class Point{
public:
	Point(double x, double y) : x(x), y(y) {};
	~Point(){
		cout << "Destructor de Point";
	}
	void print(){
		cout << "(" << x << ", " << y << ")";
	}
	void X(double x){
		this->x = x;
	}
	void Y(double y){
		this->y = y;
	}
private:
	double x{}, y{};
};
class C1{
private:
	weak_ptr<Point> d;
public:
	C1(shared_ptr<Point> value) : d(value) {}
	virtual ~C1() { 
		cout << "C1 destructor\n"; 
	}
	void print() const {
		shared_ptr<Point> pd = d.lock();
		cout << "Valor "; 
		(*pd).print();
	}
};
class C2{
private:
	weak_ptr<Point> d;
public:
	C2(shared_ptr<Point> value) : d(value) {}
	virtual ~C2() { 
		cout << "C2 destructor\n"; 
	}
	void print() const {
		shared_ptr<Point> pd = d.lock();
		cout << "Valor "; 
		(*pd).print();
	}
};
int main(int argc, char *argv[]){
	
	shared_ptr<Point> valp = make_shared<Point>(0.5, 2.5); 
	C1 c1(valp);
	C2 c2(valp);
	
	c1.print();
	cout<<"\n";
	c2.print();
	cout<<"\n";
	
	return 0;
}	
