#include <iostream>  // Biblioteca padrão
using namespace std; // Mostra aonde que deve procurar (pra não ficar usando std::)

// Função para ler um número digitado/dado
int lerDados(string mensagem)
{
    int dado;

    cout << mensagem;
    cin >> dado;

    return dado;
}

// Função para calcular total, percorre loop por cada unidade e soma ao total de água
int calcularTotal(int quantidadeAguaPorSetor[], int numSetores)
{
    int totalAgua = 0;

    for (int i = 0; i < numSetores; i++)
    {
        totalAgua = totalAgua + quantidadeAguaPorSetor[i];
    }

    return totalAgua;
}

// Função que mostra o relatório, pega o total de água e exibe
void mostrarRelatorio(int totalAgua)
{
    cout << "Total de agua utilizada na fazenda: " << totalAgua << " litros" << endl;
}

int main()
{
    int numSetores;                                                 // Variável da quantidade de setores
    numSetores = lerDados("Qual o numero de setores da fazenda: "); // Ler dados para descobrir número de setores
    int quantidadeAguaPorSetor[numSetores];                         // Vetor com quantidade de água, onde o tamanho do vetor é o numSetores.

    // Loop que percorre cada setor para agregar uma quantidade de água.
    for (int i = 0; i <= numSetores; i++)
    {
        cout << "Qual a quantidade de água do setor " << i + 1 << ": ";
        cin >> quantidadeAguaPorSetor[i];
    }

    int totalAgua = calcularTotal(quantidadeAguaPorSetor, numSetores);

    mostrarRelatorio(totalAgua);

    return 0;
}