#include<iostream>
#include <math.h>

using namespace std;

void RaizCuadrada()
{
	double Numero = 0, Resultado = 0;
	
	cout<<"************************"<<endl;
	cout<<"CALCULO DE RAIZ CUADRADA"<<endl;
	cout<<"************************"<<endl;
	
	cout<<"Ingrese el valor a calcular: "<<endl;
	cin>>Numero;
	
	Resultado = sqrt(Numero);
	
	cout<<"La raiz cuadrada de "<<Numero<<" es igual a : "<<Resultado<<endl;
	system("pause");
}
