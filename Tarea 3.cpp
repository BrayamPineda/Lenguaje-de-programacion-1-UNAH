/*	
	Proposito: Crear un programa que evaluae una nota usando el sistema de calificaciones de China y Japón.

	Autor: Brayam Ovidio Pineda Hernandez.
	Número de cuenta : 20182002211

*/

 
#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_CTYPE, "Spanish"); // Código para usar idioma español.
	
	int nota = 0;
	cout <<" Programa para calcular notas usando el Sistema de China y Japón " <<endl <<endl;
	
	cout <<" Ingrese la nota del estudiante : " << endl; // Variable de entrada.
	cin >> nota;
	
	if (nota > 100 || nota < 0) 
	{
		cout << " Ingrese una nota de 0 a 100 "; // Condición en caso de que el usuario ingrese un número mayor a 100 o menor a 0.
		return 0;
	}
	else
	if (nota == 100) // if para ealuar la nota con el sistema de China y Japón.
	{
		cout<< " El alumno obtuvo una A++"<<endl; // Variable de salida.
	}
	else
	if (nota >= 95 && nota <= 99)
	{
		cout<< " El alumno obtuvo una A+ " <<endl;
	}
	else
	if (nota >= 90 && nota <= 94)
	{
		cout<< " El alumno obtuvo una A " <<endl;
	}
	else
	if (nota >= 85 && nota <= 89)
	{
		cout<< " El alumno obtuvo una A- " <<endl;
	}
	else
	if (nota >= 80 && nota <= 84)
	{
		cout<< " El alumno obtuvo una B+ " <<endl;
	}
	else
	if (nota >= 75 && nota <= 79)
	{
		cout<< " El alumno obtuvo una B " <<endl;
	}
	else
	if (nota >= 70 && nota <= 74)
	{
		cout<< " El alumno obtuvo una B- " <<endl;
	}
	else
	if (nota >= 65 && nota <= 69)
	{
		cout<< " El alumno obtuvo una C+ " <<endl;
	}
	else
	if (nota >= 60 && nota <= 64)
	{
		cout<< " El alumno obtuvo una C " <<endl;
	}
	else
	if (nota >= 55 && nota <= 59)
	{
		cout<< " El alumno obtuvo una C- " <<endl;
	}
	else
	if (nota >= 50 && nota <= 54)
	{
		cout<< " El alumno obtuvo una D+ " <<endl;
	}
	else
	if (nota >= 45 && nota <= 49)
	{
		cout<< " El alumno obtuvo una D " <<endl;
	}
	else
	if (nota >= 40 && nota <= 44)
	{
		cout<< " El alumno obtuvo una D- " <<endl;
	}
	else
	if (nota >= 35 && nota <= 39)
	{
		cout<< " El alumno obtuvo una E+ " <<endl;
	}
	else
	if (nota >= 30 && nota <= 34)
	{
		cout<< " El alumno obtuvo una E " <<endl;
	}
	else
	if (nota >= 25 && nota <= 29)
	{
		cout<< " El alumno obtuvo una E- " <<endl;
	}
	else
	if (nota >= 20 && nota <= 24)
	{
		cout<< " El alumno obtuvo una F+ " <<endl;
	}
	else
	if (nota >= 15 && nota <= 19)
	{
		cout<< " El alumno obtuvo una F " <<endl;
	}
	else
	if (nota >= 10 && nota <= 14)
	{
		cout<< " El alumno obtuvo una F " <<endl;
	}
	else
	if (nota >= 5 && nota <= 9)
	{
		cout<< " El alumno obtuvo una F- " <<endl;
	}
	else
	if (nota >= 0 && nota <= 4)
	{
		cout<< " El alumno obtuvo una F-- " <<endl;
	}
	

	system ("pause");
	return 0;
}
