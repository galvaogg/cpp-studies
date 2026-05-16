#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    while (idade < 0){
        cout << "Idade invalida, digite novamente: ";
        cin >> idade;
    }
    
    return 0;
}