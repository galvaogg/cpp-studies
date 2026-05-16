#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main() {
    double num;
    int soma = 0;
    cout << "Digite um numero que voce quer somar: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        soma += i;  // soma = soma + i
    }
    cout << "Soma: " << soma << endl; 
    return 0;
}