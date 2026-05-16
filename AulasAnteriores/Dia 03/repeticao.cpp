#include <iostream>
using namespace std;

int main() {
    double senha;
    cout << "Digite a sua senha: ";
    cin >> senha;

    while(senha != 1234){
        cout << "Senha errada, tente novamente." << endl;
        cout << "Digite sua senha: ";
        cin >> senha;
    }

    cout << "Acesso liberado!";

    int opcao;
    do {
        cout << "1. Pesquisar Produto 2. Sair" << endl;
        cin >> opcao;
    } while(opcao != 2);


    for (int i = 0; i <= 10; i++) {
    cout << i << endl;
    }
    return 0;
} 