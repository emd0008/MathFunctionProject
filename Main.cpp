#include <iostream>
#include "Basic.h"
#include "CommonFormulas.h"

using namespace std;

int main() {
	char input_i;
	int i_x;
	int i_y;
	double d_x;
	double d_y;
	double d_h;
	float f_x;
	float f_y;
	float f_h;

	do {
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
			cout >> cirAreaFormula(d_x);
			break;
		case 'A':
			cout << "What is the height/base/depth of the cube?" << endl;
			cin >> f_x;
			cout << "The volume of the cube is ";
			cout << cubeVolFormula(f_x);
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
			cout << pyrVolFormula(f_x, f_y);
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
			cout << coneVolFormula(f_x, f_y);
			break;
		case 'F':
			cout << "What is the radius of the sphere?" << endl;
			cin >> f_x;
			cout << "The volume of the sphere is ";
			cout << sphVolFormula(f_x);
			break;
		case 'q':
			break;
		default:
			cout << "invalid command";
			break;
		}
	} while (input_i != 'q');

		//do{
		//	cout << "which function would you like to use?" << endl;
		//	cout << "press 1 for addition.\npress 2 for subtraction.\npress 3 for division.\npress 4 for multiplication.\npress 5 for power.\npress 6 for fraction.\npress 7 for root.\npress q to quit\n";
		//	cin >> input_i;

		//	switch (input_i) {
		//	case '1':
		//		cout << "what numbers do you want to add?" << endl;
		//		cin >> i_x;
		//		cin >> i_y;
		//		cout << additionfunc(i_x, i_y) << endl;
		//		break;
		//	case '2':
		//		cout << "what numbers do you want to subtract?" << endl;
		//		cin >> i_x;
		//		cin >> i_y;
		//		cout << subtractionfunc(i_x, i_y) << endl;
		//		break;
		//	case '3':
		//		cout << "what numbers do you want to divide?" << endl;
		//		cin >> i_x;
		//		cin >> i_y;
		//		cout << divisionfunc(i_x, i_y) << endl;
		//		break;
		//	case '4':
		//		cout << "what numbers do you want to multiply?" << endl;
		//		cin >> i_x;
		//		cin >> i_y;
		//		cout << multiplyfunc(i_x, i_y) << endl;
		//		break;
		//	case '5':
		//		cout << "what numbers do you want to power?" << endl;
		//		cin >> d_x;
		//		cin >> d_y;
		//		cout << powerfunc(d_x, d_y) << endl;
		//		break;
		//	case '6':
		//		cout << "what numbers do you want to fraction?" << endl;
		//		cin >> d_x;
		//		cout << fractionfunc(d_x) << endl;
		//		break;
		//	case '7':
		//		cout << "what numbers do you want to root?" << endl;
		//		cin >> d_x;
		//		cin >> d_y;
		//		cout << rootfunc(d_x, d_y) << endl;
		//		break;
		//	case 'q':
		//		break;
		//	default:
		//		cout << "invalid command";
		//		break;
		//	}
		//} while (input_i != 'q');
}
