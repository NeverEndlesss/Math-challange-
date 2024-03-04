#include <iostream>
#include <string>
#include <cmath>

//Długość odcinka AB o końcach w punktach A = (xa, ya) oraz B = (xb, yb) w układzie współrzędnych
double dlugoscodcinka(double xa, double xb, double ya, double yb) {
	int potega = 2;
	return std::sqrt(std::pow(xb - xa, potega) + std::pow(yb - ya, potega));
}

//Środek odcinka AB o końcach w punktach A = (xa, ya) oraz B = (xb, yb) w układzie współrzędnych
void srodekodcinka(double xa, double xb, double ya, double yb, double&wynikx, double &wyniky) {
	int mianownik = 2;
	wynikx = (xa + xb) / mianownik;
	wyniky = (ya + yb) / mianownik;
	
}

int main() {
	std::string wybor;

	std::cout << "Jezeli chcesz policzyc dlugosc odcinka AB wpisz \"dlugosc\", a jezeli srodek odcinka AB to wpisz \"srodek\"." << std::endl;
	std::cin >> wybor;

	if (wybor == "dlugosc") {
		double xa, xb, ya, yb;
		std::cout << "Wpisz wartosc punktu xa: ";
		std::cin >> xa;
		std::cout << "Wpisz wartosc punktu ya: ";
		std::cin >> ya;
		std::cout << "Wpisz wartosc punktu xb: ";
		std::cin >> xb;
		std::cout << "Wpisz wartosc punktu yb: ";
		std::cin >> yb;
		std::cout << "Dlugosc odcinka AB wynosi: " << dlugoscodcinka(xa, xb, ya, yb) << std::endl;
	}
	else if (wybor == "srodek") {
		double xa, xb, ya, yb;
		std::cout << "Wpisz wartosc punktu xa: ";
		std::cin >> xa;
		std::cout << "Wpisz wartosc punktu ya: ";
		std::cin >> ya;
		std::cout << "Wpisz wartosc punktu xb: ";
		std::cin >> xb;
		std::cout << "Wpisz wartosc punktu yb: ";
		std::cin >> yb;

		double wynikx, wyniky;
		srodekodcinka(xa, xb, ya, yb, wynikx, wyniky);
		std::cout << "Srodek odcinka AB wynosi: (" << wynikx << "," << wyniky << ")" << std::endl;
	}
	else {
		std::cout << "Blednie dodane dane :O" << std::endl;
	}

	return 0;
}
