#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double num;
    double maior;
    bool primeironum = true;

    cout << "Digite 10 numeros " << endl;

    for (int i = 1; i <= 10; i++)
    {
        while (true)
        {
            cout << "Numero " << i << ":";
            cin >> num;
            if (primeironum = true)
            {
                maior = num;
                primeironum = false;
            }
            else if (num > maior)
            {
                maior = num;
            }
            break;
        }
    }

    cout << "O maior numero digitado foi: " << maior;
    return 0;
}