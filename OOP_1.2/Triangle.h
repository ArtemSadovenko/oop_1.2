#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Triangle
{
	private:
		double a, b, c;
		double A, B, C;
	public:
		void read();
		void display();

		double get_a() const { return a; };
		double get_b() const { return b; };
		double get_c() const { return c; };
		double get_A() const { return A; };
		double get_B() const { return B; };
		double get_C() const { return C; };

		void set_a(double a1) { a = a1; };
		void set_b(double b1) { b = b1; };
		void set_c(double c1) { c = c1; };
		void set_A(double A1) { A = A1; };
		void set_B(double B1) { B = B1; };
		void set_C(double C1) { C = C1; };

		bool init();

		double S();
		double P();
		void H();

		string type();
};

