/*
Nombre: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>

using namespace std;


int sumar()
{
	return 5 + 7;
}

string nombrecompleto ()
{
	return "Juan Perez";
}

int main ()
{
	int resultado = 0;
	string nombreyapellido = nombrecompleto();
	resultado = sumar();
	
	cout << resultado <<endl;
	cout << nombreyapellido<<endl;
	
	return 0;
}
