#include <iostream>
using namespace std;
//Variables globales.
string palabras;

void cambiarVocales(char vocal, char numero)
{	int site = 0;
	do
	{
		site = palabras.find(vocal,site);
		if (site != -1)
			palabras[site]=numero;
		site++;
	} while(site !=0);
}

int main(int argc, char *argv[]) {
	palabras = "Hola mundo, aeiou";
	cambiarVocales('a','4');
	cambiarVocales('e','3');
	cambiarVocales('i','1');
	cambiarVocales('o','0');
	cambiarVocales('u','5');
	cout<<"Palabra cambiada:"<<palabras;
	return 0;
}

