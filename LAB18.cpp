
//Laboratorio 18
#include <iostream>;
#include <string>
using namespace std;


//Ejercicio 1
/*
int sum_Dig(int x, int sum){
	sum += x % 10;
	if(x / 10 == 0){
		return sum;
	}	
	return sum_Dig(x / 10, sum);
}

int main(int argc, char *argv[]) {
	int x;	
	cout << "Ingrese valor: ";
	cin >> x;
	cout << "La suma de sus digitos es: " << sum_Dig(x, 0);	
	return 0;
}

*/

//Ejercicio 3
/*
int my_pow(int base, int exponent){
	if(exponent == 1){
		return base;
	}
	else{
		base = base * my_pow(base,exponent-1);
		return base;
	}
}
int main(int argc, char *argv[]){
	int ba, exp;
	cout << "base: ";
	cin >> ba;
	cout << "exponente: ";
	cin >> exp;
	cout << "potencia de " << ba << " con exponente " << exp << " : " << my_pow(ba,exp);	
	return 0;
}
*/


//Ejercicio 4

/*

string reverse_str(string& str){
	string temp;
	for(int i=str.length()-1; i>=0; i--){
		temp += str[i];
	}
	return temp;
}
string convert_Hex(int num, string& rpt){
	int x = num % 16;
	if(num == 0){
		if(rpt.length()==0){
			return "0";
		}
		return reverse_str(rpt);
	}
	else if(num == 10){
		rpt += "A"; 
	}
	else if(num == 11){ 
		rpt += "B"; 
	}
	else if(num == 12){
		rpt +=  "C"; 
	}
	else if(num == 13){
		rpt +=  "D"; 
	}
	else if(num == 14){
		rpt +=  "E"; 
	}
	else if(num == 15){
		rpt +=  "F"; 
	}
	else{
		rpt +=  to_string(x);    
	}
		
	return convert_Hex(num / 16, rpt);	
}

int main(int argc, char *argv[]){
	
	int num;
	string rpta;
	cout << "Valor en base 10: ";
	cin >> num;
	cout << "Valor pasado a base 16: ";
	cout << convert_Hex(num, rpta);
		
	return 0;
}
*/
//Ejercicio 5




void convert_Bin(int n, string& rpt){
	if (n!=0){
		convert_Bin(n/2, rpt);
		rpt += to_string(n%2);
	}
}
int main(int argc, char *argv[]){

	int num;
	string rpta;
	cout << "Valor decimal: ";
	cin >> num;
	cout << "Valor en binario: ";
	convert_Bin(num, rpta);
	cout << rpta;
	
	return 0;
}
