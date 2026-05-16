#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n = 0;
    double soma = 0;
    int nota;
    cout << "Quantas notas quer informar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Informe a " << i << " nota:" << endl;
        cin >> nota;
        soma += nota;
    }

    double media = soma / n;
    cout << "A media de notas e: " << media;

    return 0;
}