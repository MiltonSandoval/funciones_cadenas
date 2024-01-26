#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	string Lyu_2, Lyu;
	Lyu = "I love C++";
	//Concatenando una cadena con la variable.
	cout<< "La cadena es:" + Lyu << endl;
	
	cout<< "La longitud de la cadena es:" << Lyu.length()<<endl;
	//Si el valor de retorno es 0, significa que la cadena no esta vacia.
	cout<< "¿Está vacío? " << Lyu.empty() <<endl;
	
	Lyu.append("!"); //Agrega el caracter al final de la cadena.
	cout<< "La cadena modificada es:" <<Lyu <<endl<<endl;
	
	Lyu_2 = "I lolve too";
	
	Lyu.swap(Lyu_2);//Intercambio de datos de cadena;
	
	cout <<"Cambie la cadena modificada como:" <<Lyu <<endl<<endl;
	
	int site;
	site = Lyu.find('l',0); //Encuentra la posicion donde aparece la l.
	cout<<"La posicion donde aparece l en la cadena es:" <<site <<endl;
	site = Lyu.find("oo",0); //Encuentra la posicion donde aparece oo desde 0 y regresa la posicion.
	cout<<"La posicion donde aparece oo en la cadena es:" <<site <<endl;
	site = 0;
	do
	{
		site = Lyu.find('o',site);
		if (site == -1)
			cout << "Busqueda completa, no hay otros elementos" <<endl;
		else
			cout << "La posicion donde aparece o en la cadena es:" <<site <<endl;
		site++;
	} while(site !=0);
	
	
	
	return 0;
}

