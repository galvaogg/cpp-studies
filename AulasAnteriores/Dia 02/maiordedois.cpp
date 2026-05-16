#include <iostream>

int main() {
    int a;
    int b;
    std::cout << "Digite um numero inteiro: " << std::endl;
    std::cin >> a;

    std::cout << "Digite outro numero inteiro: " << std::endl;
    std::cin >> b;

    if (a > b) {
        std::cout << "O maior numero e:" << a << std::endl;
    } else if (b > a) {
        std::cout << "O maior numero eh: " << b << std::endl;
    } else {
        std::cout << "Os numeros sáo iguais" << std::endl;
    }
    return 0;
}