#include <iostream>
using namespace std;
char caracter[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int numero[10];
char c[25];
//DEFINIMOS FUNCIONES

char generarCaracter()
{
	return caracter[rand()%26
		];
}

int generarNumero()
{
	return rand()%51;
}

void imprimir()
{
	cout<<"CAR\tNUM"<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<c[i]<<"\t"<<numero[i]<<endl;
	}
}

void generarDatos()
{
	for(int i=0; i<10;i++)
	{
		numero[i] = generarNumero();
		c[i]=generarCaracter();
		string elemento = c{i];
		if((c.find(elemento,0)))
		{
			c[i]=generarCaracter();
		}
	}
}


int main(int argc, char *argv[]) 
{
	generarDatos();
	imprimir();
	
	return 0;
}
