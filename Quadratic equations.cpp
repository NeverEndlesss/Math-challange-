#include <iostream>
#include <cmath>

double obliczdelte(double a, double b, double c) {
    return b * b - 4 * a * c;
}
int main() {
    double a, b, c;

    std::cout << "Podaj wartosc a: ";
    std::cin >> a;
    std::cout << "Podaj wartosc b: ";
    std::cin >> b;
    std::cout << "Podaj wartosc c: ";
    std::cin >> c;

    double delta = obliczdelte(a, b, c);

    if (delta < 0) {
        std::cout << "Delta jest ujemna zatem brak rozwiazan." << std::endl;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        std::cout << "Delta ma tylko jedno rozwiazanie: " << x << "." << std::endl;
    }
    else {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        std::cout << "Delta ma dwa rozwiazania ktore wynosza: " << x1 << " oraz " << x2 << "." << std::endl;
    }
    return 0;
}
