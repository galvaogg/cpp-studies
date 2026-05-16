#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int num;
    long long fatorial = 1; 

    cout << "Digite um numero: ";
    cin >> num;

    for (int i = num; i > 1; i--) {
        fatorial *= i;
    }

    cout << "O fatorial de " << num << " e: " << fatorial << endl;
    return 0;
}
