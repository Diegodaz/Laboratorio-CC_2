//Laboratorio 09
#include <iostream>
using namespace std;

//ejercicio 1
/*
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
template <typename T> T myMin(T x, T y)
{
    return (x < y) ? x : y ;
}
  
int main()
{
	
    cout << myMax<int>(3, myMax<int>(6,12)) << endl;
    cout<< myMin<int>(3, myMin<int>(6,12))<<endl;
    
    return 0;
}
*/

//ejercicio 2
/*
template <class T>
class Calcula {
   private:
    T num1, num2;

   public:
    Calcula(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numeros: " << num1 << " y " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << ad() << endl;
        cout << num1 << " - " << num2 << " = " << sustra() << endl;
        cout << num1 << " * " << num2 << " = " << multi() << endl;
        cout << num1 << " / " << num2 << " = " << divi() << endl;
    }

    T ad() { return num1 + num2; }
    T sustra() { return num1 - num2; }
    T multi() { return num1 * num2; }
    T divi() { return num1 / num2; }
};

int main() {
    Calcula<int> intCalc(3, 6);
    Calcula<float> floatCalc(3.4, 4.2);

    cout << "Resultado entero:" << endl;
    intCalc.displayResult();

    cout << endl
         << "Resultado flotante:" << endl;
    floatCalc.displayResult();

    return 0;
}
*/
//ejercicio 3
//ejercicio 4

template <class T, int max> int arrMin(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];
  
    return m;
}
template <class T, int max> int arrMax(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] > m)
            m = arr[i];
  
    return m;
}
template <class T, int max> float arrMinf(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];
  
    return m;
}
  
int main()
{
    int arr1[] = { 10, 7, 2, 8, 6 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
  
    float arr2[] = { 12.1,8.7, 5.6,8.4,1.2 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << arrMin<int, 10000>(arr1, n1) << endl;
    cout << arrMax<int, 1>(arr1, n1) << endl;
    cout << arrMin<float, 256>(arr2, n2)<<endl;
    cout << arrMax<float, 1>(arr2, n2);
    
    return 0;
}
