#include <iostream>
#include <string>
#include <cmath>

//Permutacje oraz silnia
unsigned long long silnia(unsigned long long n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * silnia(n - 1);
	}
}
//Kombinacje (dwumian Newtona)
unsigned long long kombinacje(unsigned long long n, unsigned long long k) {
	if (n < 0) {
		std::cout << "n nie moze byc mniejsze niz 0"<<std::endl;
		return 0;
	}
	else if (k < 0 || n < k) {
		std::cout << "k nie moze byc mniejsze niz 0 oraz wieksze niz n" << std::endl;
		return 0;
	}
	return silnia(n) / (silnia(k) * silnia(n - k));
}
//Wariacje z powtorzeniami
double wariacja1(double n1, double k1) {
	return std::pow(n1, k1);
}
//Wariacje bez powtorzen
unsigned long long wariacja2(unsigned long long n, unsigned long long k) {
	if (n < 1) {
		std::cout << "n nie moze byc mniejsze niz 1." << std::endl;
		return 0;
	}
	else if (k < 1 || k > n) {
		std::cout << "k nie moze byc mniejsze niz 1 lub wieksze niz n." << std::endl;
		return 0;
	}
	return silnia(n) / silnia(n - k);
}

int main() {

	char decyzja;
	do {
		double n1, k1;
		unsigned long long n, k;

		std::string wybor;
		std::cout << "Wybierz co chcesz policzyc wpisujac:\n " << "1. Permutacja\n" << "2. Kombinacje\n" << "3. Wariacjezp\n" << "4. Wariacjebezp" << std::endl;
		std::cin >> wybor;

		if (wybor == "Permutacja" || wybor == "permutacja") {
			std::cout << "Podaj liczbe wszystkich sposobow, na które n różnych elementów można ustawic w ciag: ";
			std::cin >> n;
			std::cout << "Permutacja wynosi: " << silnia(n) << std::endl;
		}
		else if (wybor == "Kombinacje" || wybor == "kombinacje" || wybor == "kombinacja" || wybor == "Kombinacja") {
			std::cout << "Podaj wartosc n dwumianu Newtona: ";
			std::cin >> n;
			std::cout << "Podaj wartosc k dwumianu Newtona: ";
			std::cin >> k;
			std::cout << "Kombinacja wynosi: " << kombinacje(n, k) << std::endl;
		}
		else if (wybor == "Wariacjezp" || wybor == "wariacjezp") {
			std::cout << "Liczba wszystkich sposobow, na ktore z n roznych elementow mozna utworzyc ciag: ";
			std::cin >> n1;
			std::cout << "Liczba wyrazow k: ";
			std::cin >> k1;
			std::cout << "Wariacja z powtorzeniem wynosi: " << wariacja1(n1, k1) << std::endl;
		}
		else if (wybor == "Wariacjebezp" || wybor == "wariacjebezp") {
			std::cout << "Liczba wszystkich sposobow, na ktore z n roznych elementow mozna utworzyc ciag: ";
			std::cin >> n;
			std::cout << "Liczba roznych wyrazow k: ";
			std::cin >> k;
			std::cout << "Wariacja bez powtorzenia wynosi: " << wariacja2(n, k) << std::endl;
		}
		else {
			std::cout << "Blednie podane dane!" << std::endl;
		}
		std::cout << "Jezeli chcesz jeszcze raz policzyc napisz litere \"t\"" << std::endl;
		std::cin >> decyzja;
	} while (decyzja == 't'|| decyzja=='T');

	return 0;
}
