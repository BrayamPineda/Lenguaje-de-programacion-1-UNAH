
# include <iostream>

using namespace std;

void menu()
{
	setlocale (LC_CTYPE, "Spanish");
	int opcion = 0;
	
	while (true)
	{
		system ("cls");
		cout<<"******";
		cout<<"Menú";
		cout<<"******";
		cout<<endl;
		cout<<endl;
		cout<<endl;
		
		cout<<" 1 - Bebidas calientes"<<endl;
		cout<<" 2 - Bebidas frias"<<endl;
		cout<<" 3 - Reposteria"<<endl;
		cout<<" 0 - Salir"<<endl;
		
		cin >> opcion;
		
		if(opcion==0)
		{
			break;
		}
		
	}
	
}
