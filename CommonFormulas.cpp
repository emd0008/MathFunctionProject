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