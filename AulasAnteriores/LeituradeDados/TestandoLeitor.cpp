#include <iostream>
#include <vector>
#include "LeitorV2.hpp"

int main() {
    std::cout << "--- SISTEMA DE LEITURA AVANCADO ---\n" << std::endl;

    // ---- 1. Validação com Regra Customizada (Apenas números pares) ----
    int numeroPar = Leitor::lerComValidacao<int>(
        "Digite um numero PAR: ",
        [](int n) { return n % 2 == 0; }, // Regra em formato Lambda
        "Ops! Esse numero nao eh par. "   // Mensagem de erro customizada
    );

    // ---- 2. Validação por Intervalo (Ex: Notas de 0 a 10) ----
    double nota = Leitor::lerNoIntervalo<double>("Digite a nota do aluno (0.0 a 10.0): ", 0.0, 10.0);

    // ---- 3. Lendo uma frase inteira (Aceita espaços) ----
    std::string nomeCompleto = Leitor::lerLinha("Digite seu nome completo: ");

    // ---- 4. Magia Pura: Lendo uma linha inteira e gerando um vetor ----
    // O usuário digita tudo na mesma linha separado por espaço. Ex: 1.5 2.7 3.9 8.2
    std::cout << "\nDigite uma lista de numeros decimais separados por espaco: " << std::endl;
    std::vector<double> meusDados = Leitor::lerLinhaParaVetor<double>("> ");

    // Clonando o vetor facilmente para outro
    std::vector<double> dadosCopiados = meusDados;

    // ---- Exibindo os Resultados ----
    std::cout << "\n--- Relatorio de Dados ---" << std::endl;
    std::cout << "Nome cadastrado: " << nomeCompleto << std::endl;
    std::cout << "Numero par escolhido: " << numeroPar << std::endl;
    std::cout << "Nota validada: " << nota << std::endl;
    
    std::cout << "Vetor copiado com sucesso. Elementos: ";
    for (double x : dadosCopiados) {
        std::cout << "[" << x << "] ";
    }
    std::cout << std::endl;

    return 0;
}