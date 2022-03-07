/*
Nombre: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>

using namespace std;

int sumar (int a, int b)
{
	return a + b;
}

int calculadora (int a, int b, char operador)
{
	if (operador == '+')
	{
	return sumar (a,b);
	}
	
	return -1;
}

int main()
{
	int n1 = 0, n2 = 0;
	char operador;
	
	cout << "Ingrese el valor de A : "<<endl;
	cin >> n1;
	cout << "Ingrese el valor de B : "<<endl;
	cin >> n2;
	
	cout << "ingrese el operador (+,-,*,/):" <<endl;
	cin >> operador;
	
	cout << "El resultado de "<<n1 << operador << n2 << " es : " << endl;
	cout << calculadora (n1,n2,operador);
	
	return 0;
}
