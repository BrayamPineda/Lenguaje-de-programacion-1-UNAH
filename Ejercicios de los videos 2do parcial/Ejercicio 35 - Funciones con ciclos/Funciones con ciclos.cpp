/*
Nombre: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>

using namespace std;

void imprimirCaracteres (char caracter,int ciclos)
{
	int i=0;
	
	for (i=0;i<ciclos;i++)
	{
		cout<< caracter;
	}
	cout<<endl;
}

int main ()
{
	imprimirCaracteres ('@',10);
	imprimirCaracteres ('#',5);
	cout<<"Hola Mundo"<<endl;
	imprimirCaracteres ('*',1000);
	return 0;
}
