// lab_5_2
// Кузьмич Максим  
// Лабораторна робота 
// Обчислення суми ряду Тейлораза допомогою функцій
// Варіант 27 

#include <iostream>
#include <cmath>
#include <iomanip>
#include <numbers>

using namespace std;

//double arcctg(double x);
//double sprochenya(double x, double esp, int& n);
//
//int main()
//{
//	double xp;
//	cout << "Enter xp = ";
//	cin >> xp;
//
//	double xk;
//	cout << "Enter xk = ";
//	cin >> xk;
//
//	double dx;
//	cout << "Enter dx = ";
//	cin >> dx;
//
//	double eps;
//	cout << "Enter eps = ";
//	cin >> eps;
//
//	double x;
//	int n = 0;
//
//	x = xp;
// 
// cout << fixed;
//	cout << "-----------------------------------------" << endl;
//	cout << "|" << setw(7) << "x" << " |"
//		<< setw(10) << "arcctg(x)" << " |"
//		<< setw(10) << "S" << " |"
//		<< setw(5) << "n" << " |"
//		<< endl;
//	cout << "-----------------------------------------" << endl;
//
//	while (x <= xk) {
//		double use = sprochenya(x, eps, n);
//
//		cout << "|" << setw(7) << setprecision(2) << x << " |"
//			<< setw(10) << setprecision(5) << arcctg(x) << " |"
//			<< setw(10) << setprecision(5) << use << " |"
//			<< setw(5) << n << " |"
//			<< endl;
//		x += dx;
//	}
// cout << "-----------------------------------------" << endl;
//}
//
//double arcctg(double x) {
//	double pi = numbers::pi;
//	x = pi / 2 - atan(x);
//
//	return x;
//} 
//
//double sprochenya(double x, double esp, int& n) {
//	n = 0;
//	double pi = numbers::pi;
//	double dodatok = -x;
//	double resul = pi / 2;
//
//	while (abs(dodatok) >= esp) {
//		resul += dodatok;
//		n++;
//		dodatok = dodatok * (-x * x) * ((2.0 * n - 1.0) / (2.0 * n + 1.0));
//	}
//
//	return resul;
//}


double arcctg(double x);
void sprochenya(double x, double esp, int& n, double& dodatok);

int main()
{
	double xp;
	cout << "Enter xp = ";
	cin >> xp;

	double xk;
	cout << "Enter xk = ";
	cin >> xk;

	double dx;
	cout << "Enter dx = ";
	cin >> dx;

	double eps;
	cout << "Enter eps = ";
	cin >> eps;

	double x;
	int n = 0;
	double resul;

	x = xp;
	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "arcctg(x)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;

	while (x <= xk) {
		sprochenya(x, eps, n, resul);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << arcctg(x) << " |"
			<< setw(10) << setprecision(5) << resul << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;

}

double arcctg(double x) {
	double pi = numbers::pi;
	return pi / 2 - atan(x);
}

void sprochenya(double x, double esp, int& n, double& resul) {
	n = 0;
	double pi = numbers::pi;
	double dodatok = -x;
	resul = pi / 2;

	while (abs(dodatok) >= esp) {
		resul += dodatok;
		n++;
		dodatok = dodatok * (-x * x) * ((2.0 * n - 1.0) / (2.0 * n + 1.0));
	}
}

