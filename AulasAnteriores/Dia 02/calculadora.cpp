#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char op; // operador
    double num1;
    double num2;

    while (true)
    {
        cout << "Digite o primeiro numero: " << endl;
        cin >> num1;

        cout << "Digite o operador que quer (+, -, *, /): " << endl;
        cin >> op;

        cout << "Digite o segundo numero:" << endl;
        cin >> num2;

        bool opValida = true;
        double resultado;

        switch (op)
        {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num1 == 0 || num2 == 0)
            {
                cout << "Nao e possivel realizar divisoes com zero" << endl;
                opValida = false;
            }
            else
            {
                resultado = num1 / num2;
            }
            break;
        }

        if (opValida == true)
        {
            cout << "Resultado: " << resultado << endl;
        }

        return 0;
    }