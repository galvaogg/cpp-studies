#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string msg = "Estou aprendendo C++";
    int repeticao;
    cout << "Quantas vezes vocë quer repetir a mensagem: " << msg << endl;
    cin >> repeticao;

    for (int i = 0; i <= repeticao; i++) {
        cout << msg << endl;
    }
    return 0;
}