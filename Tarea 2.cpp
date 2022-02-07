/*	
	Proposito: Crear un programa que Modificar el programa Factura con Descuento para incluir una condici�n
	que calcule el impuesto cuando la factura esta exenta o no de impuestos.

	Autor: Brayam Ovidio Pineda Hernandez.
	N�mero de cuenta : 20182002211

*/

 
#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_CTYPE, "Spanish"); // C�digo para usar idioma espa�ol.
	
	float subtotal = 0, total = 0, impuesto = 0; // Variables de entrada.
	char estaexenta; // Variable char ya que se usara letras en vez de n�meros.
	
	cout << " C�lculo de impuesto a facturas "<< endl << endl; 
	
	cout <<" Ingrese el subtotal de la factura : " <<endl; // El subtotal es el total a pagar sin sumar el impuesto.
	cin >> subtotal;
	
	cout << "�La factura est� exenta de impuestos? S/N " <<endl;
	cin >> estaexenta;
	
	if ( estaexenta == 'N' || estaexenta == 'n') // Ciclo para evaluar si la factura esta exenta de impuesto o no.
	{
		impuesto = subtotal * 0.15; // C�lculo del impuesto.
		total = subtotal + impuesto; // C�lculo del total sumando el impuesto.
		cout << " El impuesto es de : " << impuesto <<endl;
	} 
	else
	if ( estaexenta == 'S' || estaexenta == 's')
	{
		total = subtotal; 
	} 
	

	cout <<" El total a pagar es de : " << total <<endl; // Variables de salida.
	
	system ("pause");
	return 0;
}
