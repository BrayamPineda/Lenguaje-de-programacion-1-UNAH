
#include <iostream>
#include "AgregarProducto.h"

using namespace std;

void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system ("cls");
	
	int opcionProducto = 0;
	switch (opcion)
	{
		case 1:
		{
			cout<<"Bebidas calientes"<<endl;
		    cout<<"*****************"<<endl;
		    cout<<"1 - Capuccino "<<endl;
		    cout<<"2 - Expresso" <<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Capuccino - L.40.00",1,40);
					break;
				case 2:
					agregarProducto("1 Expresso - L.30.00",1,30);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado! "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 2:
		{
			cout<<"Bebidas frias"<<endl;
			cout<<"*************"<<endl;
			cout<<"1 - Granita de cafe "<<endl;
		    cout<<"2 - Te helado " <<endl;
		    cout<<"3 - Limonada "<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Granita de cafe - L.45.00",1,45);
					break;
				case 2:
					agregarProducto("1 Te helado - L.25.00",1,25);
					break;
				case 3:
					agregarProducto("1 Limonada - L.30.00",1,30);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado! "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 3:
		{
			cout<<"Reposteria"<<endl;
			cout<<"**********"<<endl;
			cout<<"1 - Pastel de limon "<<endl;
		    cout<<"2 - Pan de canela " <<endl;
		    cout<<"3 - Semita "<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Pastel de limon - L.30.00",1,30);
					break;
				case 2:
					agregarProducto("1 Pan de canela - L.15.00",1,15);
					break;
				case 3:
					agregarProducto("1 Semita - L.5.00",1,5);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado! "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		{
			default:
			break;
		}
		
	}
}
