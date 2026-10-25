#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
	ifstream Entrada("input/Entrada.txt");
	
	if(Entrada.is_open())
	{
		cout<<"Archivo Abierto"<<endl;
		string linea;
		
		while (getline(Entrada, linea))
		{
		}
	}
}