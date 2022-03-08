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

int restar (int a, int b)
{
	return a - b;
}

int multiplicar (int a, int b)
{
	return a * b;
}

int dividir (int a, int b)
{
	if (b==0){
		throw "No se puede dividir entre 0";
	}
	return a / b;
}

int calculadora (int a, int b, char operador)
{
	switch(operador)
	{
		case '+':
			return sumar(a,b);
		break;
		case '-':
			return restar(a,b);
		break;
		case '*':
			return multiplicar(a,b);
		break;
		case '/':
			return dividir(a,b);
		break;
		
		default:
			break;
	}
	
	throw "El operador no existe";
}

int main()
{
	int n1 = 0, n2 = 0;
	int  resultado = 0;
	char operador;
	
	cout << "Ingrese el valor de A : "<<endl;
	cin >> n1;
	cout << "Ingrese el valor de B : "<<endl;
	cin >> n2;
	
	cout << "ingrese el operador (+,-,*,/):" <<endl;
	cin >> operador;
	
	try
	{
	resultado = calculadora (n1,n2,operador);
	cout << "El resultado de "<<n1 << " " << operador << " "<< n2 << " es : ";
	cout << resultado;
	}
	catch(const char* error)
	{
		cout << error;
	}
	
	return 0;
}
