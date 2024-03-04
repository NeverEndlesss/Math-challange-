//Program liczacy wartosci dla wzoru: (𝑎 − 𝑏)(𝑎𝑛−1 + 𝑎𝑛−2𝑏 + … + 𝑎𝑛−𝑘𝑏𝑘−1 + … + 𝑎𝑏𝑛−2 + 𝑏𝑛−1)
#include <iostream>
#include <cmath>
#include <limits>

long double wzor(int n, double a, double b) {
    long double suma = 0.0L;

    for (int i = 0; i < n; i++) {
        suma += pow(a, n - i - 1) * pow(b, i);
    }

    return (a - b) * suma;
}

int main() {
    long double a, b;
    int n;

    while (true) {
        std::cout << "Podaj a: ";
        std::cin >> a;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Blad: Niepoprawny format. Spróbuj ponownie." << std::endl;
        }
        else {
            break;
        }
    }

    while (true) {
        std::cout << "Podaj b: ";
        std::cin >> b;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Blad: Niepoprawny format. Sprobuj ponownie." << std::endl;
        }
        else {
            break; 
        }
    }

    while (true) {
        std::cout << "Podaj n: ";
        std::cin >> n;
        if (std::cin.fail() || n <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Blad: Niepoprawny format lub n <= 0." << std::endl;
        }
        else {
            break;
        }
    }

    long double wynik = wzor(n, a, b);
    std::cout << "Twoj wynik wynosi: " << wynik << std::endl;
    return 0;
}
