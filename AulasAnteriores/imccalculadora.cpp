#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main (){
    double peso;
    double altura;

    cout << "CALCULADORA DE PESO" << endl;
    cout << "-------------------" << endl;
    
    cout << "Digite seu peso (kg): " << endl;
    cin >> peso;

    cout << "Digite sua altura (m)" << endl;
    cin >> altura;

    double imc = peso / (altura * altura);

    cout << "Peso: " << peso << "kg" << endl;
    cout << "Altura: " << altura << "m" << endl;

    if (imc < 18.5) {
        cout << "Abaixo do peso" << endl;
    } else if (imc >= 25) {
        cout << "Acima do peso" << endl;
    } else {
        cout << "Peso normal" << endl;
    }

    return 0;
}