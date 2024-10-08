// Lab_5.3.cpp
// Lab_5.3
// Function with recurention
// Variant 0.22


#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;

double S(const double x, int& n, double s);
void A(const double x, const int n, double& a);
double h(const double x);

int main() {
	cout << fixed;
	cout << "|" << setw(12) << "Values" << setw(8) << "|" << endl;
	cout << "---------------------" << endl;
	cout << "|" << setw(4) << "x" << "   |  "
		<< setw(5) << "result" << "   |" << endl;
	cout << "---------------------" << endl;

	double rs, rf, n, res = 0;

	cout << "Start r = "; cin >> rs;
	cout << "Stop r = "; cin >> rf;
	cout << "n = "; cin >> n;

	double dr = (rf - rs) / n;

	for (double r = rs; r <= rf; r += dr) {
		//p1 = h(r); 
		//p2 = h(1 + r + pow(p1, 2));  
		//k = h(1 + sqrt(r)) + pow(p2, 2);  
		double k = h(1 + sqrt(r)) + pow((1 + r + pow(h(r), 2)), 2);

		cout << "---------------------" << endl;
		cout << "|  " << setw(2); cout << setprecision(1) << r << "  |  " << setw(4);
		cout << setprecision(1) << k << "  |" << setw(6) << endl;
	}
	cout << "---------------------" << endl;

	system("pause");
	cin.get();
	return 0;
}

double h(const double x) {
	double res = 0;
	if (abs(x) >= 1) {
		double res = (1 - cos(x) / exp(-2 * x));
	}
	else {
			int n = 0, s = 0;
			res = S(x, n, s);

		}
	return res;
}

double S(const double x, int& n, double s) {
	n = 0;
	double a = x;
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (n <= 5);
	return s;
}

void A(const double x, const int n, double& a) {
	double w = pow(x, 3) / ((3 * n + 1) * (3 * n) * (3 * n + 1)); 
	a *= w;
}