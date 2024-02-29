#include <iostream>
#include <cmath>

double objstozka(double r, double h) {
	double pi = 3.141592;
	return (1.0 / 3.0) * pi * r * r * h;
}

double objprostopadloscianu(double a, double b, double c) {
	return a * b * c;
}

double objgraniastoslupa(double pp, double h) {
	return pp * h;
}

double objostroslupa(double pp, double h) {
	return (1.0 / 3.0) * pp * h;
}

double objwalca(double r, double h) {
	double pi = 3.141592;
	return pi * r * r * h;
}

double objkuli(double r) {
	double pi = 3.141592;
	return (4.0 / 3.0) * pi * r * r * r;
}
double objszeczianu(double a) {
	return pow(a, 3);
 }

int main() {
	int wybor;
	double a, b, c, h, r, pp;

	std::cout << "Wybierz bryle geometryczna do obliczenia: " << std::endl;
	std::cout << "1. Stozek" << std::endl;
	std::cout << "2. Prostopadloscian" << std::endl;
	std::cout << "3. Graniastoslup" << std::endl;
	std::cout << "4. Ostroslup" << std::endl;
	std::cout << "5. Walec" << std::endl;
	std::cout << "6. Kula" << std::endl;
	std::cout << "7. Szescian" << std::endl;
	std::cout << "Wybierz opcję (1-7): ";
	std::cin >> wybor;

	switch (wybor) {
	case 1:
		std::cout << "Podaj promien podstawy i wysokosc stozka: ";
		std::cin >> r >> h;
		std::cout << "Objetosc stozka wynosi: " << objstozka(r, h) << std::endl;
		break;
	case 2:
		std::cout << "Podaj dlugosci bokow prostopadloscianu (a, b, c): ";
		std::cin >> a >> b >> c;
		std::cout << "Objetosc prostopadloscianu wynosi: " << objprostopadloscianu(a, b, c) << std::endl;
		break;
	case 3:
		std::cout << "Podaj pole podstawy oraz wysokosc graniastoslupa: ";
		std::cin >> pp >> h;
		std::cout << "Objetosc graniastoslupa wynosi: " << objgraniastoslupa(pp, h) << std::endl;
		break;
	case 4:
		std::cout << "Podaj pole podstawy oraz wysokośc ostroslupa: ";
		std::cin >> pp >> h;
		std::cout << "Objetosc ostroslupa wynosi: " << objostroslupa(pp, h) << std::endl;
		break;
	case 5:
		std::cout << "Podaj promien podstawy oraz wysokosc walca: ";
		std::cin >> r >> h;
		std::cout << "Objetosc walca wynosi: " << objwalca(r, h) << std::endl;
		break;
	case 6:
		std::cout << "Podaj promien kuli: ";
		std::cin >> r;
		std::cout << "Objetosc kuli wynosi: " << objkuli(r) << std::endl;
		break;
	case 7:
		std::cout << "Podaj bok szescianu: ";
		std::cin >> a;
		std::cout << "Objetosc szescianu wynosi: " << objszeczianu(a) << std::endl;
		break;
	}
	return 0;
}