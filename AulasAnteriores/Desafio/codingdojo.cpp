#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void exibirMenu() {
    cout << "\n=== SISTEMA DE RECURSOS HUMANOS ===" << endl;
    cout << "1 - Calcular Bonificacao" << endl;
    cout << "2 - Sair" << endl;
    cout << "Escolha uma opcao: ";
}

void lerDadosVendedor(string &nome, int &nivel, double &vendas) {
    cout << "\nDigite o nome do vendedor: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Digite o nivel do vendedor (1, 2 ou 3): ";
    cin >> nivel;

    cout << "Digite o valor total de vendas: R$ ";
    cin >> vendas;
}

void exibirBonificacao(string nome, int nivel, double vendas, double percentual) {
    double bonus = vendas * percentual;

    cout << fixed << setprecision(2);
    cout << "O vendedor " << nome 
         << ", nivel " << nivel 
         << ", devera receber uma bonificacao de R$ " 
         << bonus << "." << endl;
}

void processarNivel1(string nome, double vendas) {
    if (vendas > 80000.0) {
        cout << "[ALERTA] O vendedor " << nome << ", nivel I foi promovido ao nivel II." << endl;
    } 
    else if (vendas > 50000.0) {
        exibirBonificacao(nome, 1, vendas, 0.35);
    } 
    else if (vendas > 20000.0) {
        exibirBonificacao(nome, 1, vendas, 0.20);
    } 
    else if (vendas < 5000.0) {
        cout << "[ALERTA] O vendedor " << nome << ", nivel I, esta em risco de demissao." << endl;
    } 
    else {
        cout << "O vendedor " << nome << " nao atingiu metas de bonificacao, mas esta seguro." << endl;
    }
}

void processarNivel2(string nome, double vendas) {
    if (vendas > 200000.0) {
        cout << "[ALERTA] O vendedor " << nome << ", nivel II, foi promovido ao nivel III." << endl;
    } 
    else if (vendas > 120000.0) {
        exibirBonificacao(nome, 2, vendas, 0.40);
    } 
    else if (vendas > 90000.0) {
        exibirBonificacao(nome, 2, vendas, 0.25);
    } 
    else if (vendas < 50000.0) {
        cout << "[ALERTA] O vendedor " << nome << ", nivel II, esta em risco de virar nivel I." << endl;
    } 
    else {
        cout << "O vendedor " << nome << " nao atingiu metas de bonificacao." << endl;
    }
}

void processarNivel3(string nome, double vendas) {
    if (vendas > 500000.0) {
        cout << "[ALERTA] O vendedor " << nome << ", nivel III, virou o dono da firma!" << endl;
    } 
    else if (vendas > 250000.0) {
        exibirBonificacao(nome, 3, vendas, 0.45);
    } 
    else if (vendas > 210000.0) {
        exibirBonificacao(nome, 3, vendas, 0.30);
    } 
    else if (vendas < 100000.0) {
        cout << "[ALERTA] O vendedor " << nome << ", nivel III, esta em risco de virar nivel II." << endl;
    } 
    else {
        cout << "O vendedor " << nome << " nao atingiu metas de bonificacao." << endl;
    }
}

void calcularBonificacao() {
    string nome;
    int nivel;
    double vendas;

    lerDadosVendedor(nome, nivel, vendas);

    if (nivel == 1) {
        processarNivel1(nome, vendas);
    } 
    else if (nivel == 2) {
        processarNivel2(nome, vendas);
    } 
    else if (nivel == 3) {
        processarNivel3(nome, vendas);
    } 
    else {
        cout << "Nivel invalido!" << endl;
    }
}

int main() {
    int opcao = 0;

    while (opcao != 2) {
        exibirMenu();
        cin >> opcao;

        if (opcao == 1) {
            calcularBonificacao();
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