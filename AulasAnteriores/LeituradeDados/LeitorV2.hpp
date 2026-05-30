#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional> // Necessário para std::function

class Leitor {
public:
    // 1. Base: Limpeza de buffer em caso de erro
    static void limparBuffer() {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    // 2. Leitura Simples com Validação Customizada (Lambda)
    // Permite passar uma função que diz se o dado é válido ou não
    template <typename T>
    static T lerComValidacao(const std::string& mensagem, std::function<bool(T)> condicao, const std::string& msgErro = "Dado invalido! Tente novamente.\n") {
        T dado;
        while (true) {
            std::cout << mensagem;
            if (std::cin >> dado && condicao(dado)) {
                std::cin.ignore(10000, '\n');
                return dado;
            }
            limparBuffer();
            std::cout << msgErro;
        }
    }

    // 3. Leitura com Limites (Min / Max)
    template <typename T>
    static T lerNoIntervalo(const std::string& mensagem, T min, T max) {
        std::string erro = "Erro: O valor deve estar entre " + std::to_string(min) + " e " + std::to_string(max) + ".\n";
        return lerComValidacao<T>(mensagem, [min, max](T valor) {
            return valor >= min && valor <= max;
        }, erro);
    }

    // 4. Leitura de Texto Completo (Frases com espaços)
    static std::string lerLinha(const std::string& mensagem) {
        std::string texto;
        std::cout << mensagem;
        std::getline(std::cin, texto);
        return texto;
    }

    // 5. Super Escalável: Transforma uma string de números em um Vector automaticamente
    // Exemplo de entrada do usuário: "10 20 30 40 50" -> Transforma em std::vector<int>
    template <typename T>
    static std::vector<T> lerLinhaParaVetor(const std::string& mensagem) {
        std::string linha = lerLinha(mensagem);
        std::stringstream ss(linha);
        std::vector<T> vetor;
        T temp;
        
        while (ss >> temp) {
            vetor.push_back(temp);
        }
        return vetor;
    }
};

