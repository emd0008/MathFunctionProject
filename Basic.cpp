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