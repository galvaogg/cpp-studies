#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main () {
    int num;
    int par = 0;
    int impar = 0;
    cout << "Digite 10 numeros." << endl;


    for (int i = 1; i <= 10; i++) {
        while (true) {
        cout << "Numero " << i << ":";
        cin >> num;
        if (num % 2 == 0) {
            par++;
        } else if (num % 2 != 0) {
            impar++;
        }
        break;
        }
    }

    cout << "Numeros impares: " << impar << endl;
    cout << "Numeros pares:" << par << endl;
    return 0;
}