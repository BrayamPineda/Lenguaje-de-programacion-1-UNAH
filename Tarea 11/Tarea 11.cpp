/*
Nombre: Brayam Ovidio Pineda Hernandez.
Numero de cuenta: 20182002211.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand (time(NULL));	
	int totalSuma = 0;
	int a[5][5];
	
	//Fila 0
	a[0][0] = rand () % 20 + 1;
	a[0][1] = rand () % 20 + 1;
	a[0][2] = rand () % 20 + 1;
	a[0][3] = rand () % 20 + 1;
	a[0][4] = rand () % 20 + 1;
	
	
	//Fila 1
	a[1][0] = rand () % 20 + 1;
	a[1][1] = rand () % 20 + 1;
	a[1][2] = rand () % 20 + 1;
	a[1][3] = rand () % 20 + 1;
	a[1][4] = rand () % 20 + 1;
	
	
	//Fila 2
	a[2][0] = rand () % 20 + 1;
	a[2][1] = rand () % 20 + 1;
	a[2][2] = rand () % 20 + 1;
	a[2][3] = rand () % 20 + 1;
	a[2][4] = rand () % 20 + 1;
	
	//Fila 3
	a[3][0] = rand () % 20 + 1;
	a[3][1] = rand () % 20 + 1;
	a[3][2] = rand () % 20 + 1;
	a[3][3] = rand () % 20 + 1;
	a[3][4] = rand () % 20 + 1;
	
	//Fila 4
	a[4][0] = rand () % 20 + 1;
	a[4][1] = rand () % 20 + 1;
	a[4][2] = rand () % 20 + 1;
	a[4][3] = rand () % 20 + 1;
	a[4][4] = rand () % 20 + 1;
	
	cout<<"***Suma de números ramdom***"<<endl<<endl;
	
    for (int y = 0;y < 5;y++)
    {
    	for(int x = 0;x < 5;x++)
    	{
    		cout<<"y:"<<y <<" |" <<" x:"<<x<<endl;
    		cout<<a[y][x];
    		totalSuma = totalSuma + a[y][x];
    		cout<<endl<<endl;
		}
	}
	
	
	cout<<"La suma de todos los valores del arreglo es: "<<totalSuma<<endl;
	
	return 0;
}
