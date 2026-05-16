#include <iostream>

int main() {
    double a, b, c;
    while (true) {
    std::cout << "Digite o valor do primeiro lado: " << std::endl;
    std::cin >> a;

    std::cout << "Digite o valor do segundo lado: " << std::endl;
    std::cin >> b;
    
    std::cout << "Digite o valor do terceiro lado: " << std::endl;
    std::cin >> c;

    if (a <= 0 || b <= 0 || c <= 0){
        std::cout << "Entrada invalida, digite um numero positivo" << std::endl;
    } else {
        break;
    }
    }


    if (a + b <= c || b + c <= a || a + c <= b) {
        std::cout << "Nao e um triangulo" << std::endl;
    } else {
        std::cout << "E um triangulo" << std::endl;
    }

    return 0;
}