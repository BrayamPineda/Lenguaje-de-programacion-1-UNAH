/*
Nombre: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>

using namespace std;

int sumar (int a,int b)
{
	return a + b;
}

int restar (int a,int b)
{
	return a - b;
}

int main ()
{
	system ("cls");
	
	int numero1 = 0, numero2 = 0;
	
	cout <<"Ingrese el valor de A: "<<endl;
	cin >> numero1;
	
	cout <<"Ingrese el valor de B: "<<endl;
	cin >> numero2;
	
	cout << "El resultado de la suma es: "<< sumar(numero1,numero2)<<endl;
	
	cout << "El resultado de la resta es:"<< restar(numero1,numero2)<<endl;
	return 0;
}


