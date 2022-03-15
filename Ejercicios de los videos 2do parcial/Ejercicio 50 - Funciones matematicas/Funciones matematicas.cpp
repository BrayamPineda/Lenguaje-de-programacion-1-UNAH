 /*
Nombre: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>
#include <math.h>
#define Pi 3.1416

using namespace std;

int main()
{
	double numero = 0;
	double seno = 0;
	double coseno = 0;
	double tangente = 0;
	
	numero = 2*Pi;
	seno = sin(numero);
	coseno = cos(numero);
	tangente = tan(numero);
	
	cout<<"Numero: "<< numero <<endl;
	cout<<"seno: "<< seno <<endl;
	cout<<"Coseno: "<< coseno <<endl;
	cout<<"Tangente: "<< tangente <<endl;
	
	return 0;
}
