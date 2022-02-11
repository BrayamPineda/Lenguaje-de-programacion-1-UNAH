/*
Alumno: Brayam Ovidio Pineda Hernandez
cuenta: 20182002211
*/

#include <iostream>

using namespace std;

int main ()
{
	//Datos de entrada
	double subtotal = 0, total = 0;
	double impuesto = 0.15;
	
	cout << " Ingrese el subtotal de la factura : "<<endl;
	cin >> subtotal;
	
	//Proceso
	total = subtotal + (subtotal * 0.15);
	
	//Salida
	
	cout << " Total a pagar : "<<total <<endl;
	
	return 0;
}
