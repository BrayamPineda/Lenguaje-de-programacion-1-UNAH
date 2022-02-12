/*	
	
	Autor: Brayam Ovidio Pineda Hernandez.
	Número de cuenta : 20182002211

*/

 
#include <iostream>

using namespace std;

int main()
{
	int opcion = 0;
	
	cout << " Ingrese una opcion: "<<endl;
	cin >> opcion;
	
	switch (opcion)
	{
	case 1:
		cout << "Escogiste 1"<<endl;
		break;
	case 2:
		cout << "Escogiste 2"<<endl;
		break;
	case 3:
		cout << "Escogiste 3"<<endl;
		break;
		
	default:
		cout << "Ingrese una opcion entre 1 y 3 "<<endl;
		break;
	}
	
	return 0;
}
