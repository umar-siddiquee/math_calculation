//============================================================================
// Name        : Math_calculation.cpp
// Author      : Umar Siddiquee
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Some math calculations in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "Enters the sides of the triangle:\n";
	cin >> a >> b;
	c= 0.5*a*b;
	cout << "Area of a triangle is: " << c;
	return 0;
}
