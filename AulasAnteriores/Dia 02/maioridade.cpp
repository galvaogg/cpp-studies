#include <iostream>
#include <string>

int main()
{
    // Definição de variáveis
    int idade;

    while (true)
    {
        std::cout << "Digite sua idade: ";
        std::cin >> idade;
        if (idade < 0)
        {
            std::cout << "Entrada invalida Digite um número inteiro positivo" << std::endl;
        }
        else
        {
            break; // entrada válida
        }
    }

    // Verifica maioridade
    if (idade >= 18)
    {
        std::cout << "Maior de idade" << std::endl;
    }
    else
    {
        std::cout << "Menor de idade" << std::endl;
    }
    std::string classificacao;

    // Classificao
    if (idade <= 12)
    {
        classificacao = "Crianca";
        std::cout << classificacao << std::endl;
    }
    else if (20 > idade && idade > 12)
    {
        classificacao = "Adolescente";
        std::cout << classificacao << std::endl;
    }
    else
    {
        classificacao = "Adulto";
        std::cout << classificacao << std::endl;
    }

    // entrar num  lugar idade
    bool ingresso = false;

    if (idade >= 18 && ingresso == true)
    {
        std::cout << "Seja bem vindo ao clube" << std::endl;
    }
    else
    {
        std::cout << "Voce precisa de ingresso pro clube" << std::endl;
    }

    return 0;
}
