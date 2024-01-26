#include <iostream>
using namespace std;

char opcion;
string cadena1,cadena2;


void Submenu()
{
	cout<<"SUBMENU DE NUMEROS"<<endl;
	cout<<"1)--Suma de 2 numeros"<<endl;
	cout<<"1)--Division de 2 numeros"<<endl;
	cout<<"m/M)--Volver al Menu Principal"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	opcion=tolower(opcion);
}

void concatenar()
{
	cout<<"Ingrese la primera cadena:";
	cin>>cadena1;
	cout<<"Ingrese la segunda cadena:";
	cin>>cadena2;
	cout<<"La concatenacion es:"<<cadena1+" "+cadena2<<endl;
}


void elejir_opcion(char opcion)
{
	if(opcion == '1')
	{
		Submenu();
	}
	else if(opcion == '2')
	{
		concatenar();
	}
	else if(opcion == 's')
	{
		cout<<"Saliendo del programa";
	}
	else
	{
		cout<<"Opcion incorrecta vuelva a intentarlo" "\n";
	}
}

void MenuPrincipal()
{
	cout<<"MENU PRINCIPAL" "\n";
	cout<<"(1)--Operaciones con Numeros" "\n";
	cout<<"(2)--Concatenar dos cadenas" "\n";
	cout<<"(s/S)--Salir" "\n";
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	opcion=tolower(opcion);
	elejir_opcion(opcion);
}



int main(int argc, char *argv[]) {
	MenuPrincipal();
	
	return 0;
}

