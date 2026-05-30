#include <iostream>
#include <vector>
using namespace std;

vector<string> LerDados(int numDados, string msgPadrao) {
    vector<string> dados;

    for (int i =0; i < numDados; i++) {
    cout << msgPadrao << " " << i + 1 << ": ";
    getline(cin, dados[i]);
    }
    
 return dados;
}

int main() {
    LerDados(5,"Digite o dado");
    return  0;
}