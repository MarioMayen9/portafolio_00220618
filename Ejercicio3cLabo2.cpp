#include "stdafx.h"
#include <math.h>
#include <iostream>

using namespace std;

double logS(double);
int main(){
    double p = 0.2;
	cout << "El calculo  de logaritmo natural 1: " << endl;
	cout << log(p) << endl;
    cout << "El calculo  de logaritmo natural por sumatoeia 2: " << endl;
    cout << logS(p) << endl;


	system("pause");
	return 0;
}

double logS(double p) {
	double resultado = 0;
	int x = 10;
	for (int i = 1; i <= x; i++) {
		resultado += pow(-1, i + 1) * pow(p - 1.0, i) / i;
	}
     return resultado;
}


