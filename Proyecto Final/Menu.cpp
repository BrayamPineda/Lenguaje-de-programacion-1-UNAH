/*
Alumno: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>
#include "habitaciones.h"

using namespace std;

void Menu()
{
	setlocale(LC_CTYPE, "Spanish");
	string nombre, apellido, nombreCompleto;
	int edad = 0, sexo = 0, hombres = 0, mujeres = 0,totalpersonas = 0,salir = 1;
	
	system ("COLOR E0");
	cout <<"                                                  *** HOTEL NIRVANA ***"<<endl<<endl;
	
	
	while (salir==1)
	{
		cout<<" Ingrese el primer nombre del cliente : "<<endl;
	cin>>nombre;
	
	cout<<endl;
	cout<<" Ingrese el primer apellido de "<<nombre<<": "<<endl;
	cin>>apellido;
	
	nombreCompleto = nombre +" "+ apellido;
	
	cout<<endl;
	cout<<" ¡Nombre registrado con éxito!"<<endl<<endl;
	
	cout<<" Ingrese la edad de "<<nombreCompleto <<" : "<<endl;
	cin>>edad;
	
	while (edad < 18 || edad > 120)
	{
	
		if(edad < 18)
		{
			cout<<" ¡ El huesped debe ser mayor de 18 años para reservar una habitación !"<<endl<<endl;
			cout<<" Ingrese la edad de "<<nombreCompleto <<" : "<<endl;
	        cin>>edad;
		}
		else
		if (edad > 120)
		{
			cout<<" ¡ La edad del huesped es incorrecta !"<<endl<<endl;
			cout<<" Ingrese la edad de "<<nombreCompleto <<" : "<<endl;
	        cin>>edad;
		}
	    
	}
	
	
	cout<<endl;
	cout<< " Ingrese el sexo de "<<nombre<<endl;
	cout<<" 1 - Si es hombre "<<endl;
	cout<<" 2 - Si es mujer "<<endl<<endl;
	cin>>sexo;
	
	
	if(sexo==1)
	{
		cout<<" ¡ Usted eligió la opción 1 (Hombre) !"<<endl<<endl;
		hombres ++;
	}
	else
	if(sexo==2)
	{
		cout<<" ¡ Usted eligió la opción 2 (Mujer) !"<<endl<<endl;
		mujeres ++;
	}
	
	while (sexo<1||sexo>2)
	{
	    if (sexo<1||sexo>2)
	   {
		cout<<" ¡ Carácter invalido !"<<endl<<endl;
		cout<<" Las opciones validas son :"<<endl;
		cout<<" 1 - Si es hombre "<<endl;
	    cout<<" 2 - Si es mujer "<<endl<<endl;
	    cin>>sexo;
	    if(sexo==1)
	{
		cout<<" ¡ Usted eligió la opción 1 (Hombre) !"<<endl<<endl;
		hombres ++;
	}
	else
	if(sexo==2)
	{
		cout<<" ¡ Usted eligió la opción 2 (Mujer) !"<<endl<<endl;
		mujeres ++;
	}
	   }
	}
	
		
	habitaciones();
	
	    cout <<endl;
	    cout << " ¿Desea continuar con otro cliente? " << endl;
		cout << " Presiona 1 para si " << endl;
		cout << " Presiona 2 para no " << endl;
		cin >> salir;
		system("cls");
	}
	
	totalpersonas= mujeres+hombres;
	cout<<endl;
	cout<<"La cantidad de hombres hospedados es de : "<<hombres<<endl;
	cout<<"La cantidad de mujeres hospedadas es de : "<<mujeres<<endl;
	cout<<"El total de personas hospedadas es de : "<<totalpersonas<<endl<<endl;
    cout<<"¡Gracias por preferirnos!"<<endl<<endl;

}

	

