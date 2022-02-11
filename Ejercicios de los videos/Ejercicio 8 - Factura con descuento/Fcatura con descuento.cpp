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
	int descuento = 0;
	double calculoDescuento = 0, calculoImpuesto = 0;
	
	cout << " Ingrese el subtotal de la factura : "<<endl;
	cin >> subtotal;
	
	cout << " Ingrese el descuento (0, 10, 15, 20): "<<endl;
	cin >> descuento;
	
	//Proceso
	calculoDescuento = (subtotal * descuento) / 100;
	calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	//Salida
	cout << " Total a pagar : "<<total <<endl;
	
	return 0;
}
