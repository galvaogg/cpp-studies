#include <iostream>

int main () {
    int numero;
    std::cout << "Digite um numero inteiro: " << std::endl;
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "Numero positivo" << std::endl;
    } else if (numero < 0) {
        std::cout << "Numero negativo" << std::endl;
    } else {
        std::cout << "Numero e zero" << std::endl;
    }

    return 0;
}