# include <iostream>

using namespace std;

double subtotal;
double impuesto = 0;
double totalPagar = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n' ;
	subtotal = subtotal + (cantidad * precio);
	impuesto = subtotal * 0.15;
	totalPagar= subtotal + impuesto;
}

 void imprimirFactura()
 {
 	system ("cls");
 	cout<<"*******"<<endl;
 	cout<<"Factura"<<endl;
 	cout<<"*******"<<endl;
 	cout <<endl;
 	
 	cout<<"Productos: "<<endl;
	cout<< listaProductos;
 	
 	cout<<endl;
	cout<<"Subtotal: "<<subtotal;
	cout<<endl;
	cout<<"Impuesto (15%) : "<<impuesto;
	cout<<endl;
	cout<<"Total a pagar: "<<totalPagar;
	cout<<endl;
	
	system("pause");
 }
