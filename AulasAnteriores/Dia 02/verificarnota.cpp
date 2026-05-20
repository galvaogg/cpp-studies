#include <iostream>

int main()
{
    double nota;

    while (true)
    {
        std::cout << "Digite sua nota: ";
        std::cin >> nota;
        if (0 > nota || nota > 10)
        {
            std::cout << "Entrada invalida Digite uma nota inteira positiva" << std::endl;
        }
        else
        {
            break; // entrada válida
        }
    }

    if (nota >= 6)
    {
        std::cout << "Aprovado" << std::endl;
    }
    else
    {
        std::cout << "Retido" << std::endl;
    }

    return 0;
}