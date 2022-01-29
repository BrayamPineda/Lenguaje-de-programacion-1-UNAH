/*	
	Proposito: Crear un programa que sume, reste, multiplique y divida.

	Autor: Brayam Ovidio Pineda Hernandez.
	Número de cuenta : 20182002211

*/

 
#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_CTYPE, "Spanish");
	
	float Primernumero = 0, Segundonumero = 0,suma = 0, resta = 0, multiplicacion = 0, division = 0; // Declaro las variables.
	
	
	cout << " ***Programa que suma, resta, multiplica y divide dos números*** \n\n"; // Titulo del programa.
	
	cout << " Ingrese el primer número :  ";
	cin >> Primernumero;
	
	cout << " Ingrese el segundo número :  ";
	cin >> Segundonumero;
	
	suma = Primernumero + Segundonumero; // Se relizan las operaciones aritmeticas.
	resta = Primernumero - Segundonumero;
	multiplicacion = Primernumero * Segundonumero;
	division = Primernumero / Segundonumero;
		
	cout << " La suma de los dos números ingresados es de : " << suma <<endl;	// Variables de salida.
	cout << " La resta de los dos números ingresados es de : " << resta <<endl;
	cout << " La multiplicacion de los dos números ingresados es de : " << multiplicacion <<endl;
	cout << " La division de los dos números ingresados es de : " << division <<endl;
	
	
	system ("pause");
	return 0;
}
