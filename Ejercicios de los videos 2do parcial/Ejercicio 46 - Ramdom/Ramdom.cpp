/*
Nombre: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int numero = 0;
	
	//Iniciaiza el numero ramdom
	srand(time(NULL));
	
	for(int i = 0; i < 20; i++)
	{
	//Genera un numero entre 1 y 10
	numero = rand() % 5 + 1;
	
	cout<< " Numero al azar : "<<numero<<endl;
	}


	
	return 0;
}
