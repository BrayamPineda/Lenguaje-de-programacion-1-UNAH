/*
   Autor: Brayam Ovidio Pineda Hernandez
   Cuenta: 20182002211
*/

#include <iostream>

using namespace std;

int main ()
{
	
	int pares = 0;
	
	for (int i = 1; i <= 10; i++) 
	{
		if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10) 
		{
			pares = pares + i;
		}
		cout << i << " ";
	}
	
    cout <<endl;
    cout <<endl; 
	cout << " Total pares : "<<pares;
	
	return 0;
}
