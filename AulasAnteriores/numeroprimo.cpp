#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    bool primo = true;
    if (n <= 0) {
        primo = false;
    } 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = false;
            break;
        }
        primo = true;
    }
    if (primo){
    cout << "O numero " << n << " e primo";
    } else if (not primo) {
        cout << "O numero " << n << " nao e primo";
    }
  
    return 0;
}
