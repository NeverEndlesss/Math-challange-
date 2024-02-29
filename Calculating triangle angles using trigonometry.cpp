#include <iostream>
#include <cmath>

int main() {
	double a, b, c;

	std::cout << "Podaj wartosc przyprostokatnej naprzeciw kata: " << std::endl;
	std::cin >> a;
	std::cout << "Podaj wartosc przyprostokatnej znajdujacej sie kolo kata: " << std::endl;
	std::cin >> b;
	std::cout << "Podaj wartosc przeciwprostokatnej trojkata: " << std::endl;
	std::cin >> c;

	if (c >= a + b) {
		std::cout << "Podany trojkat nie istnieje, poniewaz najdluzszy bok jest dluzszy lub rowny sumie pozostalych dwoch bokow!" << std::endl;
	}
	else if (c < std::max(a,b)) {
		std::cout << "Trojkat nie istnieje, poniewaz podany bok (lub dwa boki) jest dluzszy niz przeciwprostokatna!" << std::endl;
	}
	else {
		if (std::fabs(c * c - (a * a + b * b))) { 
			std::cout << "Sinus kata wynosi: " << a / c << std::endl;
			std::cout << "Cosinus kata wynosi: " << b / c << std::endl;
			std::cout << "Tangens kata wynosi: " << a / b << std::endl;
			std::cout << "Cotangens kata wynosi: " << b / a << std::endl;
		}
		else {
			std::cout << "Podane dlugosci nie tworza trojkata prostokatnego." << std::endl;
		}
	}

	return 0;
}
