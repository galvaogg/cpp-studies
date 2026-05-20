#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    while (idade < 0)
    {
        cout << "Idade invalida, digite novamente: ";
        cin >> idade;
    }

    return 0;
}