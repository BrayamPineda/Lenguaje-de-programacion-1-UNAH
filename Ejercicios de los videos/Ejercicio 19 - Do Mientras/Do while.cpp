/*	
	Autor: Brayam Ovidio Pineda Hernandez.
	N?mero de cuenta : 20182002211
*/

 
#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 10;
	
	
	cout << "...."
	while (a > b)
	{
		cout << "(while) a > b"<<endl;
		break;
	}
	
	do {
		cout << "(do while a > b)"<<endl;
		break;
	} while (a > b);
	
	return 0;
}
