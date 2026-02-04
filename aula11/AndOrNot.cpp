#include <iostream>

using namespace std;

int main()
{

    int num = 2;

    // AND
    if (num > 4 && num < 7)
    {
        cout << "\n\nValor entre 4 e 7\n";
    }

    // OR
    if (num < 3 || num > 8)
    {
        cout << "\n\nValor menor que 3 ou maior que 8\n";
    }

    // NOT
    int teste = 1; // por ser 1, fica true.

    if (!teste) // "!" inverte para false.
    {
        cout << "\n\nEntrou no TRUE\n";
    }
    else
    {
        cout << "\n\nEntrou no FALSE\n";
    }

    return 0;
}