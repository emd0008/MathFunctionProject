#include <iostream>
#include <string>

using namespace std;

bool basic;
char input_c;
int b_x, b_y;
double bd_x, bd_y;

int additionFunc(int x, int y) {
	return x + y;
}

int subtractionFunc(int x, int y) {
	return x - y;
}

int divisionFunc(int x, int y) {
	return x / y;
}

int multiplyFunc(int x, int y) {
	return x * y;
}

double powerFunc(double x, int y) {
	double result = 1.0;
	for (int i = 0; i < y; i++) {
		result = result * x;
	}
	return result;
}

double fractionFunc(double x) {
	return 1 / x;
}

double rootFunc(double x, double y) {
	double i;
	double A(x);
	double di;
	double eps(0.000001);
	double n(y);

	i = A * 0.5;
	di = (A / powerFunc(i, n - 1) - i) / n;
	while (di >= eps || di <= -eps) {
		i = i + di;
		di = (A / powerFunc(i, n - 1) - x) / n;
	}
	return i;
}

void basicFunction() {
	basic = true;
	while (basic) {
		cout << "which function would you like to use?" << endl;
		cout << "Press 1 for addition." << endl;
		cout << "Press 2 for subtraction." << endl;
		cout << "Press 3 for division." << endl;
		cout << "Press 4 for multiplication." << endl;
		cout << "Press 5 for power." << endl;
		cout << "Press 6 for fraction." << endl;
		cout << "Press 7 for root." << endl;
		cout << "Press q to quit" << endl;
		cin >> input_c;
		switch (input_c) {
		case '1':
			cout << "what numbers do you want to add?" << endl;
			cin >> b_x;
			cin >> b_y;
			cout << additionFunc(b_x, b_y) << endl;
			break;
		case '2':
			cout << "what numbers do you want to subtract?" << endl;
			cin >> b_x;
			cin >> b_y;
			cout << subtractionFunc(b_x, b_y) << endl;
			break;
		case '3':
			cout << "what numbers do you want to divide?" << endl;
			cin >> b_x;
			cin >> b_y;
			cout << divisionFunc(b_x, b_y) << endl;
			break;
		case '4':
			cout << "what numbers do you want to multiply?" << endl;
			cin >> b_x;
			cin >> b_y;
			cout << multiplyFunc(b_x, b_y) << endl;
			break;
		case '5':
			cout << "what numbers do you want to power?" << endl;
			cin >> bd_x;
			cin >> bd_y;
			cout << powerFunc(bd_x, bd_y) << endl;
			break;
		case '6':
			cout << "what numbers do you want to fraction?" << endl;
			cin >> bd_x;
			cout << fractionFunc(bd_x) << endl;
			break;
		case '7':
			cout << "what numbers do you want to root?" << endl;
			cin >> bd_x;
			cin >> bd_y;
			cout << rootFunc(bd_x, bd_y) << endl;
			break;
		case 'q':
			basic = false;
			cin.get();
			break;
		default:
			cout << "invalid command";
			break;
		}
	}
}