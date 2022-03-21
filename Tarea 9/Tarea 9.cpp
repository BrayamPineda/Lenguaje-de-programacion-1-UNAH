/*
Nombre: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
	int opcion = 0 , numero1 = 0, numero2 = 0,sumaDados;
	
	cout << "***************************** "<<endl;
	cout << "Programa para tirar los dados "<<endl;
	cout << "***************************** "<<endl;
	
	cout << "Ingrese 1 para tirar los dados " <<endl;
	cout << "Ingrese 0 para salir "<<endl;
	cout <<endl;
	cin>>opcion;
	cout <<endl;
	
	if (opcion == 1)
	{
	srand(time(NULL));
	
	numero1 = rand() % 6 + 1;
	cout << " Dado 1 : "<< numero1<<endl;
	
	numero2 = rand() % 6 + 1;
	cout << " Dado 2 : "<< numero2<<endl;
	
	sumaDados = numero1 + numero2;
	
	cout <<endl; 
	cout << "El resultado de la suma de los dados es de : "<<sumaDados<<endl;
	}
	else
	{
	cout <<endl;
	cout << "Gracias por jugar! ";
	}
	
	return 0;
}
