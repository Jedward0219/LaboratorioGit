#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
	ifstream Entrada("input/Entrada.txt");
	ofstream Salida("output/Salida.txt");
	
	if(Entrada.is_open() && Salida.is_open())
	{
		cout<<"Archivo Abierto"<<endl;
		string linea;
		
		while (getline(Entrada, linea))
		{
			Salida<<linea;
		}
		cout<<"Archivo copiado exitosamente"<<endl;
	}
}