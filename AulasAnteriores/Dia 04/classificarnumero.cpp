#include <iostream>

// Funcao para pedir numero
int pedirNumero()
{
    int numero;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;
    return numero;
}

// Função para classificar o numero como negativo ou positivo
void classificarNum(int numero)
{
    if (numero > 0)
    {
        std::cout << "Numero positivo" << std::endl;
    }
    else if (numero < 0)
    {
        std::cout << "Numero negativo" << std::endl;
    }
    else
    {
        std::cout << "Numero e zero" << std::endl;
    }
}

int main()
{
    int numero = pedirNumero(); // Armazena o valor
    classificarNum(numero);     // Passa funcao de classificar o numeru
    return 0;
}
