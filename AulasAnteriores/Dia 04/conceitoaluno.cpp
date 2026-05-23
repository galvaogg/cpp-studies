#include <iostream>

int pedirNota() // Funcao que verifica a nota
{
    int nota;
    std::cout << "Digite uma nota do aluno: ";
    std::cin >> nota;
    return nota;
}

char verificarConceito(int nota) // Funcao que verifica o conceito conforme a nota
{
    char conceito; // Define qual o conceito
    if (nota >= 9)
    {
        return conceito = 'A';
    }
    else if (7 <= nota || nota < 9)
    {
        return conceito = 'B';
    }
    else if (5 <= nota || nota < 7)
    {
        return conceito = 'C';
    }
    else
    {
        return conceito = 'D';
    }
}

int main()
{
    char conceito; // variavel conceito
    int nota;      // variavel nota

    nota = pedirNota(); // Define nota como o retorno da function pedirNota

    conceito = verificarConceito(nota); // Passa a variavel nota pra funcao verificarConceito e define o conceito como o retorno da function verificarConceito

    std::cout << "O conceito do aluno eh " << conceito << std::endl; // Exibe conceito e nota

    return 0;
}