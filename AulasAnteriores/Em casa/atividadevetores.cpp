#include <iostream>
using namespace std;

int main()
{
    int numCurrais;
    double minimoRacao;

    cout << "Informe o numero de currais: ";
    cin >> numCurrais;

    cout << "Informe o minimo de racao recomendada por curral: ";
    cin >> minimoRacao;

    double racaoCurrais[numCurrais];

    for (int i = 0; i < numCurrais; i++)
    {
        cout << "Digite a quantidade de racao no curral " << i + 1 << ": ";
        cin >> racaoCurrais[i];
    }

    cout << "\nQuantidade de racao em cada curral:\n";

    for (int i = 0; i < numCurrais; i++)
    {
        cout << "Curral " << i + 1 << ": " << racaoCurrais[i] << " kg";

        if (racaoCurrais[i] < minimoRacao)
        {
            cout << " - Abaixo do minimo recomendado";
        }
    }

    return 0;
}