#include "stdafx.h"
#include <iostream>
using namespace std;

struct nodo {
	int dato;
	nodo *sig;
};

class ListaSimple {
private:
	nodo * pInicio;

public:
	ListaSimple(void);
	void insertarInicioLista(int);
	void mostrarLista(void);
	void mostrarListaRec(void);
	void mostrarListaRec(nodo *);
	void mostrarListaRecD(void);
	void mostrarListaRecD(nodo *);
	void insFinal(int);
	void eliminarNodo(int);
};

ListaSimple::ListaSimple(void) {
	pInicio = NULL;
}

void ListaSimple::eliminarNodo(int dato)
{
	nodo *p = pInicio, *q = NULL;

	while (p != NULL && p->dato != dato) {
		q = p;
		p = p->sig;
	}
	if (p != NULL) {
		if (q != NULL) {
			q->sig = p->sig;
		}
		else {
			pInicio->sig = p->sig;
			delete p;
		}
	}
	else {
		cout << "Dato a borrar NO existe" << endl;
	}
}



void ListaSimple::insertarInicioLista(int dato) {
	nodo *nuevo;

	nuevo = new nodo;
	nuevo->dato = dato;
	nuevo->sig = pInicio;
	pInicio = nuevo;
}

void ListaSimple::mostrarLista(void) {
	nodo *s = pInicio;

	cout << "Los elementos de la lista son:" << endl;
	while (s != NULL) {
		cout << s->dato << " ";
		s = s->sig;
	}
}

void ListaSimple::mostrarListaRec(void) {
	mostrarListaRec(pInicio);
}

void ListaSimple::mostrarListaRec(nodo *s) {
	if (s != NULL) {
		mostrarListaRec(s->sig);
		cout << s->dato << " ";
	}
}

void ListaSimple::mostrarListaRecD(void) {
	mostrarListaRecD(pInicio);
}

void ListaSimple::mostrarListaRecD(nodo *s) {
	if (s != NULL) {
		cout << s->dato << " ";
		mostrarListaRecD(s->sig);
	}
}

void ListaSimple::insFinal(int dato) {
	nodo *p, *q;

	nodo *nuevo = new nodo;
	nuevo->dato = dato;
	nuevo->sig = NULL;
	if (pInicio == NULL) {
		pInicio = nuevo;
	}
	else {
		p = pInicio;
		q = NULL;
		while (p != NULL) {
			q = p;
			p = p->sig;
		}
		q->sig = nuevo;
	}
}

int main(void)
{
	ListaSimple miLista;
	char resp;
	int dato, datoRef, datoBuscar;
	int datoEliminar;

	cout << "Desea meter un dato (s/n)?";
	cin >> resp;
	while (resp == 's') {
		cout << "Digite el dato: ";
		cin >> dato;
		miLista.insertarInicioLista(dato);
		cout << "Desea meter un dato (s/n)?";
		cin >> resp;
	}

	cout << "\nMostrar lista (sentido directo):" << endl;
	miLista.mostrarLista();
	cout << "\nMostrar lista (sentido inverso):" << endl;
	miLista.mostrarListaRec();
	cout << "\nQue dato vas a eliminar? ";
	cin >> datoEliminar;
	miLista.eliminarNodo(datoEliminar);
	miLista.mostrarListaRec();

	system("pause");
	return 0;
}