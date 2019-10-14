/*Mario Ernesto Mayen Castro - 00220618 Ejercicio Listas MI VERSION. */
#include "stdafx.h"
#include <iostream>

using namespace std;
struct nodo {
	int dato;
	nodo *siguiente;

};
void insertarLista(nodo *&, int);
void mostrarLista(nodo *);
void AgregarNodo(nodo *&lista, int, int);
int dato2;
int despues;
int x;
int main()
{
	nodo *lista = NULL;
	int dato;
	int x;
	int resp;
	int despues;
	int dato2;
	cout << "cuantos datos desea ingresar a la lista? ";
	cin >> x;

	for (int i = 0; i < x; i++) {
		cout << "Digite un numero. ";
		cin >> dato;
		insertarLista(lista, dato);
	}
	mostrarLista(lista);
	cout << endl;
	cout << "Desea agregar otro valor: ";
	cout << "1 = SI y 2 = NO ";
	cin >> resp;
	if(resp == 1){
		cout << "Que valor desea agregar: ";
		cin >> dato2;
		cout << endl;
		cout << "Despues de que valor lo quiere agregar? ";
		cin >> despues;
	}
	cout << endl;
	AgregarNodo(lista,dato2, despues);
		mostrarLista(lista);

	system("pause");
    return 0;
}

void insertarLista(nodo *&lista, int n) {
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	
	nodo *aux1 = lista;
	nodo *aux2 = new nodo();

	while ((aux1 != NULL) && (aux1->dato < n)) {
		aux2 = aux1;
		aux1 = aux1->siguiente;

	}

	if (lista == aux1) {
		lista = nuevo_nodo;
	}
	else {
            aux2->siguiente = nuevo_nodo;

	}
	nuevo_nodo->siguiente = aux1;

}

void mostrarLista(nodo *lista) {
	nodo *actual = new nodo();
	actual = lista;
	while (actual != NULL){
		cout << actual->dato << "->";
		actual = actual->siguiente;
	}

}
/*Creo que la funcion AgregarNodo no funciona del todo bien.*/

void AgregarNodo(nodo *&lista, int, int) {
	nodo *actual = new nodo();
	actual = lista;
	while ((actual != NULL) && (actual->dato <= despues)) {
		if (actual->dato == despues) {
			nodo *nuevo_nodo = new nodo();
			nuevo_nodo->dato = dato2;
			nodo *aux1 = actual;
			nodo *aux2 = new nodo();
			actual->siguiente = nuevo_nodo;
			nuevo_nodo->siguiente = aux2;


		}
		actual = actual->siguiente;
	}
}

	