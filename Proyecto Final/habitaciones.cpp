/*
Alumno: Brayam Ovidio Pineda Hernandez
Numero de cuenta: 20182002211
*/

#include <iostream>

using namespace std;

void habitaciones()
{
	setlocale(LC_CTYPE, "Spanish");
	string arreglo[20][2];
	
	
		//Habitaciones Económicas.
		
		arreglo[0][0] = "N1";
		arreglo[0][1] = "Libre";
		
		arreglo[1][0] = "N2";
		arreglo[1][1] = "Libre";
		
		arreglo[2][0] = "N3";
		arreglo[2][1] = "Libre";
		
		arreglo[3][0] = "N4";
		arreglo[3][1] = "Libre";
		
		arreglo[4][0] = "N5";
		arreglo[4][1] = "Libre";
		
		
		//Habitaciones Suite
		
		arreglo[5][0] = "N6";
		arreglo[5][1] = "Libre";
		
		arreglo[6][0] = "N7";
		arreglo[6][1] = "Libre";
		
		arreglo[7][0] = "N8";
		arreglo[7][1] = "Libre";
		
		arreglo[8][0] = "N9";
		arreglo[8][1] = "Libre";
		
		arreglo[9][0] = "N10";
		arreglo[9][1] = "Libre";
		
		
		//Habitaciones Junior Suite
		
		arreglo[10][0] = "N11";
		arreglo[10][1] = "Libre";
		
		arreglo[11][0] = "N12";
		arreglo[11][1] = "Libre";
		
		arreglo[12][0] = "N13";
		arreglo[12][1] = "Libre";
		
		arreglo[13][0] = "N14";
		arreglo[13][1] = "Libre";
		
		arreglo[14][0] = "N15";
		arreglo[14][1] = "Libre";
		
		
		//Habitaciones Gran Suite
		arreglo[15][0] = "N16";
		arreglo[15][1] = "Libre";
		
		arreglo[16][0] = "N17";
		arreglo[16][1] = "Libre";
		
		arreglo[17][0] = "N18";
		arreglo[17][1] = "Libre";
		
		arreglo[18][0] = "N19";
		arreglo[18][1] = "Libre";
		
		arreglo[19][0] = "N20";
		arreglo[19][1] = "Libre";
		
		int opcion = 0;
		int factura = 700;
		string habitacion = "";
		
		while(true)
		{
			cout<<" *** Ingrese una opción ***"<<endl;
			cout<<" 1 - Ver habitaciones"<<endl;
			cout<<" 2 - Ingreso (Ingreso de nuevos huespedes)"<<endl;
			cout<<" 3 - Salida (Salida de huespedes)"<<endl;
			cout<<" 4 - Salir del menú"<<endl;
			cin>>opcion;
			
			if (opcion == 4)
			{
				break;
			}
			else
			if(opcion < 1||opcion > 4)
			{
				cout<<" ¡ Opción Invalida !"<<endl;
				break;
			}
			system("cls");
			
	switch (opcion)
	{
		case 1: 
		{
			for(int i = 0; i < 20; i++)
			{
				cout<<" Habitación "<<arreglo[i][0]<<" Estado: "<<arreglo[i][1]<<endl;
			}
			system("pause");
			break;
		}
		
		case 2:
			{
				cout<< " Ingrese el número de la habitación que desea reservar "<<endl;
				cout<< " El precio de cada habitación es de 700 lps por un dia"<<endl;
				cin>>habitacion;
				
				for(int i = 0; i <20; i++)
				{
					if(habitacion == arreglo[i][0])
					{
						cout<<"  ¡ Habitación reservada con exito !" <<endl;
						cout<<" El total a pagar es de: "<<factura<<".00 Lps."<<endl<<endl;
						
						cout<<"¡Gracias por preferirnos!"<<endl<<endl;
						arreglo[i][1] = "Ocupada";
					}
				}
				break;
			}
			
		case 3:
			{
				cout<< " Ingrese el número de la habitación que desea desocupar "<<endl;
				cout<< " El precio de cada habitación es de 700 lps por un dia"<<endl;
				cin>>habitacion;
				
				for(int i = 0; i <20; i++)
				{
					if(habitacion == arreglo[1][0])
					{
						arreglo[i][1] = "Libre";
					}
				}
				break;
			}
	      }
	}
	
	

}
