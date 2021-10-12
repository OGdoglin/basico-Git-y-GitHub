#include <iostream>
using namespace std;

/*
* Funcion Sumar
*   párametros x e y de tipo double
*   devuleve x + y
*/

double sumar(double x, double y)
{
    double resultado = 0;
    resultado = x + y;
    return resultado;
}

int main()
{
    double a = 10, b = 20, r = 0;
    r = sumar(a, b);
    cout << "Suma = " <<  r << '\n';
}