#include <iostream>
#include "Triangle.h"
#include <string.h>

using namespace std;

Triangle makeTriangle(double a, double b, double c, double A, double B, double C) {
	Triangle tr;
	tr.set_a(a);
	tr.set_b(b);
	tr.set_c(c);
	tr.set_A(A);
	tr.set_B(B);
	tr.set_C(C);
	return tr;
}

int main() {
	Triangle tr1 = makeTriangle(3, 4, 6, 90, 30, 60);
	if (!tr1.init()) {
		cout << "Wrong triangle" << endl;
		return 0;
	}

	Triangle tr2;
	string type;

	tr2.read();    tr2.display();

	if (!tr2.init()) {
		cout << "Wrong triangle" << endl;
		return 0;
	}

	cout << "S = " << tr2.S() << endl;
	cout << "P = " << tr2.P() << endl;
	tr2.H();
	
	cout << "triangle type: " << tr2.type() << endl;

	return 0;
}