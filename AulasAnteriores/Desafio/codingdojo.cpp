#include <iostream>

using namespace std;

int main() {
    int opcao = 0;

    // Loop do menu principal (continua até o usuário digitar 2)
    while (opcao != 2) {
        cout << "\n=== SISTEMA DE RECURSOS HUMANOS ===" << endl;
        cout << "1 - Calcular Bonificacao" << endl;
        cout << "2 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cout.flush();
        cin >> opcao;

        if (opcao == 1) {
            char nome[100];
            int nivel = 0;
            double vendas = 0.0;

            cout << "\nDigite o nome do vendedor: ";
            cout.flush();
            cin >> nome; // Lê o nome (sem espaços)

            cout << "Digite o nivel do vendedor (1, 2 ou 3): ";
            cout.flush();
            cin >> nivel;

            cout << "Digite o valor total de vendas: R$ ";
            cout.flush();
            cin >> vendas;

            // --- PROCESSAMENTO NÍVEL I ---
            if (nivel == 1) {
                if (vendas > 80000.0) {
                    cout << "[ALERTA] O vendedor " << nome << ", nivel I foi promovido ao nivel II." << endl;
                } 
                else if (vendas > 50000.0) {
                    double bonus = vendas * 0.35;
                    cout << "O vendedor " << nome << ", nivel I, devera receber uma bonificacao de R$ " << bonus << "." << endl;
                } 
                else if (vendas > 20000.0) {
                    double bonus = vendas * 0.20;
                    cout << "O vendedor " << nome << ", nivel I, devera receber uma bonificacao de R$ " << bonus << "." << endl;
                } 
                else if (vendas < 5000.0) {
                    cout << "[ALERTA] O vendedor " << nome << ", nivel I, esta em risco de demissao." << endl;
                }
                else {
                    cout << "O vendedor " << nome << " nao atingiu metas de bonificacao, mas esta seguro." << endl;
                }
            }
            // --- PROCESSAMENTO NÍVEL II ---
            else if (nivel == 2) {
                if (vendas > 200000.0) {
                    cout << "[ALERTA] O vendedor " << nome << ", nivel II, foi promovido ao nivel III." << endl;
                } 
                else if (vendas > 120000.0) {
                    double bonus = vendas * 0.40;
                    cout << "O vendedor " << nome << ", nivel II, devera receber uma bonificacao de R$ " << bonus << "." << endl;
                } 
                else if (vendas > 90000.0) {
                    double bonus = vendas * 0.25;
                    cout << "O vendedor " << nome << ", nivel II, devera receber uma bonificacao de R$ " << bonus << "." << endl;
                } 
                else if (vendas < 50000.0) {
                    cout << "[ALERTA] O vendedor " << nome << ", nivel II, esta em risco de virar nivel I." << endl;
                }
                else {
                    cout << "O vendedor " << nome << " nao atingiu metas de bonificacao." << endl;
                }
            }
            // --- PROCESSAMENTO NÍVEL III ---
            else if (nivel == 3) {
                if (vendas > 500000.0) {
                    cout << "[ALERTA] O vendedor " << nome << ", nivel III, virou o dono da firma!" << endl;
                } 
                else if (vendas > 250000.0) {
                    double bonus = vendas * 0.45;
                    cout << "O vendedor " << nome << ", nivel III, devera receber uma bonificacao de R$ " << bonus << "." << endl;
                } 
                else if (vendas > 210000.0) {
                    double bonus = vendas * 0.30;
                    cout << "O vendedor " << nome << ", nivel III, devera receber uma bonificacao de R$ " << bonus << "." << endl;
                } 
                else if (vendas < 100000.0) {
                    cout << "[ALERTA] O vendedor " << nome << ", nivel III, esta em risco de virar nivel II." << endl;
                }
                else {
                    cout << "O vendedor " << nome << " nao atingiu metas de bonificacao." << endl;
                }
            } 
            else {
                cout << "Nivel invalido!" << endl;
            }

        } 
        else if (opcao == 2) {
            cout << "Encerrando o sistema..." << endl;
        } 
        else {
            cout << "Opcao invalida! Tente novamente." << endl;
        }
    }

    return 0;
}