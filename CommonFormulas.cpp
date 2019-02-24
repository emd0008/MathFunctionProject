#include <iostream>
#include <string>

using namespace std;

bool common;
char input_i;
int i_x, i_y;
double d_x, d_y, d_h;
float f_x, f_y, f_h;

float circumFormula(float d) {
	float pie = 3.14;
	float result;

	result = d * pie;
	return result;
}

double triAreaFormula(double a, double b) {
	double result;

	result = (a * b) / 2;
	return result;
}

double sqAreaFormula(double a) {
	return a * a;
}

double rectAreaFormula(double a, double b) {
	double result;

	result = a * b;
	return result;
}

double trapAreaFormula(double h, double a, double b) {
	double result;

	result = (h * (a * b)) / 2;
	return result;
}

double pentAreaFormula(double a) {
	float side = 1.720;
	double result;

	result = side * (a * a);
	return result;
}

double hexAreaFormula(double a) {
	float side = 2.598;
	double result;

	result = side * (a * a);
	return result;
}

double octAreaFormula(double a) {
	float side = 4.828;
	double result;

	result = side * (a * a);
	return result;
}

double cirAreaFormula(double r) {
	float pie = 3.14;
	double result;

	result = pie * (r * r);
	return result;
}

float cubeVolFormula(float a) {
	return (a * a * a);
}

float rectVolFormula(float a, float b, float c) {
	return (a * b * c);
}

float pyrVolFormula(float A, float h) {
	return ((A * h) / 3);
}

float cylVolFormula(float r, float h) {
	float pie = 3.14;
	float radius = r * r;
	float result;

	result = pie * radius * h;
	return result;
}

float coneVolFormula(float r, float h) {
	float pie = 3.14;
	float radius = r * r;
	float result;

	result = (pie * radius * h) / 3;
	return result;
}

float sphVolFormula(float r) {
	float pie = 3.14;
	float radius = r * r * r;
	float result;

	result = (4 * pie * radius) / 3;
	return result;
}

void commonFunction() {
	common = true;
	while (common) {
		cout << "Which formula would you like to use" << endl;
		cout << "Press 1 for circumference formula." << endl;
		cout << "Press 2 for triangle area formula." << endl;
		cout << "Press 3 for square area formula." << endl;
		cout << "Press 4 for rectangle area formula." << endl;
		cout << "Press 5 for trapezoid area formula." << endl;
		cout << "Press 6 for pentagon area formula." << endl;
		cout << "Press 7 for hexagon area formula." << endl;
		cout << "Press 8 for octagon area formula." << endl;
		cout << "Press 9 for circle area formula." << endl;
		cout << "Press A for cube volume formula." << endl;
		cout << "Press B for rectangular prism volume formula." << endl;
		cout << "Press C for pyramid volume formula." << endl;
		cout << "Press D for cylinder volume formula." << endl;
		cout << "Press E for cone volume formula." << endl;
		cout << "Press F for sphere volume formula." << endl;
		cout << "Press q to quit" << endl;
		cin >> input_i;
		switch (input_i) {
		case '1':
			cout << "What is diameter of the circle?" << endl;
			cin >> f_x;
			cout << "The circumference of the circle is ";
			cout << circumFormula(f_x) << endl;
			break;
		case '2':
			cout << "What is length of the triangle?" << endl;
			cin >> d_x;
			cout << "What is the width of the triangle?" << endl;
			cin >> d_y;
			cout << "The area of the triangle is ";
			cout << triAreaFormula(d_x, d_y) << endl;
			break;
		case '3':
			cout << "What is the length?" << endl;
			cin >> d_x;
			cout << "The area of the square is ";
			cout << sqAreaFormula(d_x) << endl;
			break;
		case '4':
			cout << "What is length of the rectangle?" << endl;
			cin >> d_x;
			cout << "What is the width of the rectangle?" << endl;
			cin >> d_y;
			cout << "The area of the rectangle is ";
			cout << rectAreaFormula(d_x, d_y) << endl;
			break;
		case '5':
			cout << "What is the height of the trapezoid?" << endl;
			cin >> d_h;
			cout << "What is the length of the trapezoid?" << endl;
			cin >> d_x;
			cout << "What is the width of the trapezoid?" << endl;
			cin >> d_y;
			cout << "The area of the trapezoid is ";
			cout << trapAreaFormula(d_h, d_x, d_y) << endl;
			break;
		case '6':
			cout << "What is the length?" << endl;
			cin >> d_x;
			cout << "The area of the pentagon is ";
			cout << pentAreaFormula(d_x) << endl;
			break;
		case '7':
			cout << "What is the length?" << endl;
			cin >> d_x;
			cout << "The area of the hexagon is ";
			cout << hexAreaFormula(d_x) << endl;
			break;
		case '8':
			cout << "What is the length?" << endl;
			cin >> d_x;
			cout << "The area of the octagon is ";
			cout << octAreaFormula(d_x) << endl;
			break;
		case '9':
			cout << "What is the radius?" << endl;
			cin >> d_x;
			cout << "The area of the circle is ";
			cout << cirAreaFormula(d_x) << endl;
			break;
		case 'A':
			cout << "What is the height/base/depth of the cube?" << endl;
			cin >> f_x;
			cout << "The volume of the cube is ";
			cout << cubeVolFormula(f_x) << endl;
			break;
		case 'B':
			cout << "What is height of the rectangular prism?" << endl;
			cin >> f_x;
			cout << "What is the base of the rectangular prism?" << endl;
			cin >> f_y;
			cout << "What is the depth of the rectangular prism?" << endl;
			cin >> f_h;
			cout << "The volume of the rectangular prism is";
			cout << rectVolFormula(f_x, f_y, f_h) << endl;
			break;
		case 'C':
			cout << "What is area of the pyramid?" << endl;
			cin >> f_x;
			cout << "What is the height of the pyramid?" << endl;
			cin >> f_y;
			cout << "The volume of the pyramid is " << endl;
			cout << pyrVolFormula(f_x, f_y) << endl;
			break;
		case 'D':
			cout << "What is the radius of the cylinder?" << endl;
			cin >> f_x;
			cout << "What is the height of the cylinder?" << endl;
			cin >> f_y;
			cout << "The volume of the cylinder is " << endl;
			cout << cylVolFormula(f_x, f_y) << endl;
			break;
		case 'E':
			cout << "What is the radius of the cone?" << endl;
			cin >> f_x;
			cout << "What is the height of the cone?" << endl;
			cin >> f_y;
			cout << "The volume of the cone is ";
			cout << coneVolFormula(f_x, f_y) << endl;
			break;
		case 'F':
			cout << "What is the radius of the sphere?" << endl;
			cin >> f_x;
			cout << "The volume of the sphere is ";
			cout << sphVolFormula(f_x) << endl;
			break;
		case 'q':
			common = false;
			cin.get();
			break;
		default:
			cout << "invalid command";
			break;
		}
	}
}
