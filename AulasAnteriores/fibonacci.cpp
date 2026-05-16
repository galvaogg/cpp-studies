#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cout << "Digite o numero de termos: ";
    cin >> n;

    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int proximo = a + b;
        a = b;
        b = proximo;
    }
    return 0;
}
