#include "stdafx.h"
#include <iostream>
#include <string.h>
void murcielago(char *p, int longitud);
using namespace std;
int main()
{

	char arreglo[50];
	cout << " Introduzca una palabra para ver su clave murcielago. ";
	cin.getline(arreglo, 50);
	int longitud = sizeof(arreglo);
	char *p = arreglo;
	murcielago(p, longitud);
	system("pause");
    return 0;
}

void murcielago(char *p, int longitud) {
	for (int i = 0; i < longitud; i++) {
		if (*p == 'm' || *p == 'u' || *p == 'r' || *p == 'c' || *p == 'i' || *p == 'e' || *p == 'l' || *p == 'a' || *p == 'g' || *p == 'o') {
			switch (*p) {
			case 'm': cout << "0"; break;
			case 'u': cout << "1"; break;
			case 'r': cout << "2"; break;
			case 'c': cout << "3"; break;
			case 'i': cout << "4"; break;
			case 'e': cout << "5"; break;
			case 'l': cout << "6"; break;
			case 'a': cout << "7"; break;
			case 'g': cout << "8"; break;
			case 'o': cout << "9"; break;
			}
		}
		else {
			cout << *p; 
		}
		*p++;
	}
}
	
