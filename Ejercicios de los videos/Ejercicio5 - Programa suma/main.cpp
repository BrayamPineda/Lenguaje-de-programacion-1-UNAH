/*
Alumno: Brayam Ovidio Pineda Hernandez
cuenta: 20182002211
*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	//Datos de entrada
	int a = 0;
	int b = 0;
	int resultado = 0;
	
	cout << " Ingrese el valor de a :"<<endl;
	cin >> a;
	
	cout << " Ingrese el valor de b :"<<endl;
	cin >> b;
	
	//Proceso
	resultado = a + b;
	//Salida
	cout<<"La suma de a + b es: "<<resultado <<endl;
	
	return 0;
}
