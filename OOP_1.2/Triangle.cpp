#include "Triangle.h"

bool Triangle::init() {
	if (a >= b + c || b >= a + c || c >= b + a || A + C + B != 180|| a <= 0 || b <= 0 || b <= 0 || A <= 0 || B <= 0 || C <= 0) {
		return false;
	}
	else {
		return true;
	}
}

void Triangle::read() {
	double a1;
	cout << "a = "; cin >> a1;
	set_a(a1);

	double b1;
	cout << "b = "; cin >> b1;
	set_b(b1);
	
	double c1;
	cout << "c = "; cin >> c1;
	set_c(c1);
	
	double A1;
	cout << "A = "; cin >> A1;
	set_A(A1);
	
	double B1;
	cout << "B = "; cin >> B1;
	set_B(B1);
	
	double C1;
	cout << "C = "; cin >> C1;
	set_C(C1);
}

void Triangle::display() {
	cout << "a = " << get_a() << endl;
	cout << "b = " << get_b() << endl;
	cout << "c = " << get_c() << endl;
	cout << "A = " << get_A() << endl;
	cout << "B = " << get_B() << endl;
	cout << "C = " << get_C() << endl;
}

double Triangle::S() {
	return a * b * sin(C* 3.14159 / 180) * 0.5;
}

double Triangle::P() {
	return a + b + c;
}

void Triangle::H() {
	cout << "h to a: " << b * sin(C * 3.14159 / 180) << endl;
	cout << "h to b: " << a * sin(C * 3.14159 / 180) << endl;
	cout << "h to c: " << a * sin(B * 3.14159 / 180) << endl;
}


string Triangle::type() {
	if (a == b || a == c) {
		return "equilateral triangle";
	}
	else if (a == b || a == c || b == c) {
		return "isosceles triangle";
	}
	else if (A == 90 || B == 90 || C == 90) {
		return "right triangle";
	}	
	else {
		return "none";
	}
}