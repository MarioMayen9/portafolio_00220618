#include "stdafx.h"
#include <iostream>

using namespace std;
int func(int);
int funci(int);
int v;
int main() {


	cout << func(5);
	cout << endl;
	cout << funci(5);
	cout << endl;
	system("pause");
	return 0;
}

int func(int m) {

	if (m == 0) {
		return (0);
	}
	else {
		return (m + func(m - 1));
	}

}

int funci(int m) {
	int v = func(5);
	int r = 0;
	for (int i = v; i<v; i--) {
		r += i;
		return r;
		cout << endl;
	}
}
