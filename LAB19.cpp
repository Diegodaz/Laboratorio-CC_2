#include <iostream> 
#include <algorithm> 
#include <random> 
#include <ctime> 
#include <vector>
using namespace std;

//Ejercicio 1 
class RLineal {
public:
	void operator()(vector<pair<float, float>> v) {
		float sumXY{}, promX{}, promY{}, sumX2{};
		auto n{v.size()};
		for (auto i : v) {
			sumXY += i.first * i.second;
			promX += i.first;
			promY += i.second;
			sumX2 += i.first * i.first;
		}
		promX /= n;
		promY /= n;
		float a, b;
		b = (sumXY - (n * promX * promY)) / (sumX2 - (n * promX * promX));
		a = promY - (b * promX);
		cout << "El valor de a es: " << a << "\nEl valor de b es: " << b << endl;
	}
};

int main()
{
	vector<pair<float, float>> v { {3, 5}, {3, 3}, {2, 9.5} , {1, 2} , {1, 7} , {9, 3.8} };
	RLineal r;
	r(v); 
	return 0;
}
//Ejercicio 2
/*
template <class A, class X>
class myfind{
public:
	vector<int> operator()(A ini, A end, X val){
		vector<int> pos;
		int n = 0;
		
		for(auto i = ini; i <= end; i++){
			if(*i == val){
				pos.push_back(n);
			}
			n++;
		}
		return pos;
	}
};
int main(int argc, char *argv[]){
	vector<int> x = {1,9,2,1,3,5,4,10,4,5,1};
	cout<<"Vector x\n";
	cout<<"[";
	for(auto i = x.begin(); i < x.end(); i++){
		if(i <  x.end()-1){
			cout << *i << ", ";
		}
		else{
			cout << *i << "]";
		}
	}
	cout<<endl<<endl;
	myfind<vector<int>::iterator,int> a;
	vector<int> posf = a(x.begin(), x.end(), 3);
	cout<<"FIND\n";
	cout<<"[";
	for(auto i = posf.begin(); i < posf.end(); i++){
		if(i <  posf.end()-1){
			cout << *i << ", ";
		}
		else{
			cout << *i << "]";
		}
	}	
	return 0;
}
*/

//Ejercicio 3

/*
mt19937 gen(time(0));
uniform_int_distribution<> rand_digits(1,100);

class Elementos{
public:
	Elementos(){
		val1 = rand_digits(gen);
		val2 = rand_digits(gen);
	}
	int val1;
	int val2;
};

class sort_Functor{
public:
	bool operator()(Elementos a, Elementos b){
		return (a.val1 + a.val2) < (b.val1 + b.val2);
	}
};

void imprimir(vector<Elementos> lista){
	cout << "[";
	for(auto i = lista.begin(); i<lista.end(); i++){
		if(i != lista.end()-1){
			cout << "(" << i->val1 << ", " << i->val2 << "), ";
		}
		else{
			cout << "(" << i->val1 << ", " << i->val2 << ")" << "]";
		}
	}
}
	
int main(int argc, char *argv[]){

	vector<Elementos> lista;
	for(int i=0; i<20; i++){
		Elementos x;
		x.val1 = rand_digits(gen);
		x.val2 = rand_digits(gen);
		lista.push_back(x);
	}
	cout<<"RANDOM\n";
	imprimir(lista);
	cout<<endl<<endl;
	sort(lista.begin(), lista.end(), sort_Functor());
	cout<<"ORDENADO\n";
	imprimir(lista);
		
	return 0;
}
*/
