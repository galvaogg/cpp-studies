#include <iostream>

int pedirIdade()  // Funcao para pedir idade 
{
    int idade;
    std::cout << "Digite a idade de uma pessoa: ";
    std::cin >> idade;
    return idade;
}

std::string classificarIdade(int idade)  // Funcao para classificar idade
{
    std::string classe;
    if (idade < 0) return "Idade invalida";
    switch (idade) // Casos para definir classe
    {
        case 0 ... 11:
        classe = "Crianca";
        break;
        case 12 ... 17:
        classe = "Adolescente";
        break;
        case 18 ... 59:
        classe = "Adulto";
        break;
        default: // Nao sei como fazer o maior que 60 no switch.
        classe = "Idoso" ; 
        break; 
    }    

    return classe;
}

int main() {
    int idade;
    std::string classe;

    idade = pedirIdade(); // Define a idade atraves da funcao pedir idade 
    classe = classificarIdade(idade); // Passa a variavel idade pra funcao e define a classe com o retorno da funcao de classificar

    std::cout << "A idade " << idade << "eh: " << classe << std::endl; // Exibe idade e classe

    return 0;
}