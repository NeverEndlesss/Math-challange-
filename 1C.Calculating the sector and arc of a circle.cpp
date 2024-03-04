#include <iostream>
#include <string>
#include <cmath>

double wycinekkola(double a, double r) {
	double pi = 3.141592;
	return a / 360 * pi * r * r;
}

double lukkola(double a, double r) {
	double pi = 3.141592;
	return a / 360 * 2 * pi * r;
}

int main() {
	std::string wybor;

	std::cout << "Jezeli chcesz obliczyc pole wycinka kola wpisz \"wycinek\", a jezeli dlugosc fragmentu luku kola to wpisz \"luk\""<<std::endl;
	std::cin >> wybor;

	if (wybor == "wycinek") {
		double a, r;
		std::cout << "Podaj kat alfa wycinka kola."<<std::endl;
		std::cin >> a;
		std::cout << "Podaj promien kola." << std::endl;
		std::cin >> r;
		std::cout << "Pole wycinka kola dla a = " << a << " oraz r = " << r << " jest rowne: P = " << wycinekkola(a, r) << std::endl;
	}
	else if (wybor == "luk") {
		double a, r;
		std::cout << "Podaj kat alfa wycinka kola." << std::endl;
		std::cin >> a;
		std::cout << "Podaj promien kola." << std::endl;
		std::cin >> r;
		std::cout << "Dlugosc luku wybranego fragmentu kola dla a = " << a << " oraz dla r = " << r << " jest rowne: L = " << lukkola(a, r) << std::endl;
	}
	else {
		std::cout << "Blednie wpisane dane" << std::endl;
	}
	return 0;
}
