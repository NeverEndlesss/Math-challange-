#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
	int n;
	std::cout << "Podaj ilosc wczytywanych liczb: " << std::endl;
	std::cin >> n;

	if (n <= 0) {
		std::cout << "Ilosc liczb musi byc wieksza niz 0" << std::endl;
		return 1;
	}

	double* liczby = new double[n];

	for (int i = 0; i < n; i++) {
		std::cout << "Podaj liczbe " << (i + 1) << ": ";
		std::cin >> liczby[i];
	}

	char decyzja;

	do {

		int wybor;
		std::cout << "Wybierz co chcesz obliczyc wpisujac odpowieni numer:\n";
		std::cout << "1. Mediana\n";
		std::cout << "2. Srednia arytmetyczna\n";
		std::cout << "3. Srednia geometryczna\n";
		std::cout << "4. Srednia kwadratowa\n";
		std::cout << "5. Odchylenie standardowe sredniej arytmetycznej\n";
		std::cin >> wybor;

		switch (wybor) {
		case 1: {
			std::sort(liczby, liczby + n);
			double mediana;
			if (n % 2 == 0) {
				mediana = (liczby[n / 2 - 1] + liczby[n / 2]) / 2.0;
			}
			else {
				mediana = liczby[n / 2];
			}
			std::cout << "Mediana wynosi: " << mediana << std::endl;
			break;
		}
		case 2: {
			double suma = 0.0;
			for (int i = 0; i < n; i++) {
				suma += liczby[i];
			}
			double srednia = suma / n;
			std::cout << "Srednia arytmetyczna wynosi: " << srednia << std::endl;
			break;
		}
		case 3: {
			double iloczyn = 1.0;
			for (int i = 0; i < n; ++i) {
				iloczyn *= liczby[i];
			}
			double sredniageo = std::pow(iloczyn, 1.0 / n);
			std::cout << "Srednia geometryczna wynosi: " << sredniageo << std::endl;
			break;
		}
		case 4: {
			double suma = 0.0;
			for (int i = 0; i < n; i++) {
				suma += std::pow(liczby[i], 2);
			}
			double sredniakwa = std::sqrt(suma / n);
			std::cout << "Srednia kwadratowa wynosi: " << sredniakwa << std::endl;
			break;
		}
		case 5: {
			double suma = 0.0;
			for (int i = 0; i < n; i++) {
				suma += liczby[i];
			}
			double srednia = suma / n;

			double roznica = 0.0;
			for (int i = 0; i < n; i++) {
				roznica += std::pow(liczby[i] - srednia, 2);
			}
			double odchylenie = std::sqrt(roznica / (n - 1));
			std::cout << "Odchylenie standardowe wynosi: " << odchylenie << std::endl;
			break;
		}
		}
		std::cout << "Czy chcesz cos jeszcze policzyc? (t/n): " << std::endl;
		std::cin >> decyzja;
	} while (decyzja == 't' || decyzja == 'T');

	delete[] liczby;

	return 0;
}
