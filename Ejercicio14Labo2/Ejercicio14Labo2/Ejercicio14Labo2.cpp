#include "stdafx.h"
#include <iostream>

using namespace std;
int nfilas;
int ncolumnas;
int elfilas, elcolumnas;
int Mat[50][50];
int MatFinal[50][50];
int main()
{
	cout << "Digite el numero de filas. ";
	cin >> nfilas;
	cout << "Digite el numero de columnas. ";
	cin >> ncolumnas;

	for (int i = 0; i < nfilas; i++) {
		for (int j = 0; j < ncolumnas; j++) {
			cout << "Digite un valor. [" << i + 1 << "][" << j + 1 << "]";
			cin >> Mat[i][j];

		}
	}
	for (int i = 0; i < nfilas; i++) {
		for (int j = 0; j < ncolumnas; j++) {
			cout << Mat[i][j] << " ";


		}
		cout << endl;
	}

	cout << "Digite que fila y que columna quiere eliminar. ";
	cin >> elfilas;
	cin >> elcolumnas;
	cout << "Mostrando nueva matriz.";
	cout << endl;
	elfilas = elfilas - 1;
	elcolumnas = elcolumnas - 1;

	for (int i = 0; i <nfilas; i++) {
		for (int j = 0; j < ncolumnas; j++) {
			if (i == elfilas || j == elcolumnas) {
				Mat[i][j] = 0;

			}
			else {
				cout << Mat[i][j] << " ";
			}
		}
		cout << endl;

	}
	system("pause");
	return 0;
}

