#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double num;
    double x;
    cout << "Diga um numero para saber sua tabuada" << endl;
    cin >> num;
    cout << "Voce quer a tabuada do 1 ate quanto: " << endl;
    cin >> x;

    for (int i = x; 1 <= i; i--)
    {
        double tabuada = num * i;
        cout << "Multiplicando por " << i << " Temos: " << tabuada << endl;
    }

    return 0;
}