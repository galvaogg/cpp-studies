#include <iostream>

int main()
{
    // Declaração de variáveis
    int estoqueAtual;
    int quantidadeMinima;
    double precoUnitario; // Usei double porque é mais exato, mas vi na wiki que o long long ou int é melhor pra dinheiro. Não usei porque o long long não aceita números decimais e não sei realizar a conversão.

    // Entrada de dados
    std::cout << "Informe a quantidade atual de estoque: ";
    std::cin >> estoqueAtual;
    std::cout << "Informe a quantidade minima ideal: ";
    std::cin >> quantidadeMinima;
    std::cout << "Informe o preco unitario do produto: ";
    std::cin >> precoUnitario;

    // Verificação do estoque
    if (quantidadeMinima > estoqueAtual)
    {

        // Cálculos e exibição dos resultados
        int quantidadeFaltante = quantidadeMinima - estoqueAtual;
        double valorNecessario = quantidadeFaltante * precoUnitario;

        // Exibição dos resultados
        std::cout << "Reposicao necessaria\n";
        std::cout << "Quantidade a comprar: " << quantidadeFaltante << "\n";
        std::cout << "O valor minimo para reposicao e: " << valorNecessario << "\n";
    }
    else
    {
        // Exceçoã ao caso
        int quantidadeSobrando = estoqueAtual - quantidadeMinima;
        std::cout << "Nao e necessaria a reposicao\n";
        std::cout << "Voce ainda tem: " << quantidadeSobrando << " de produtos!";
    }

    // Pausa do sistema
    system("pause");

    return 0;
}