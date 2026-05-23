#include <iostream>
#include <string>

int main()
{
    const std::string nome = "Gabriel";
    const int idade = 16;
    const double altura = 1.75;
    const bool estudante = true;

    std::cout << std::boolalpha;

    std::cout << "--- Perfil do Usuario ---" << std::endl;
    std::cout << "Nome:      " << nome << std::endl;
    std::cout << "Idade:     " << idade << " anos" << std::endl;
    std::cout << "Altura:    " << altura << "m" << std::endl;
    std::cout << "Estudante: " << (estudante ? "Sim" : "Nao") << std::endl;

    return 0;
}