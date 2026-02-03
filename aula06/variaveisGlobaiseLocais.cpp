#include <iostream>

using namespace std;

// variáveis GLOBAIS (fora da função)
int n1, n2;

int main()
{
    int n3, n4; // variáveis LOCAIS (dentro da função)

    // operadores matemáticos
    // +, -, /, *, %

    int res, res1, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1 + n2 + n3 + n4) - 10;
    res1 = n1 / n2;
    res2 = n1 % n2;

    cout << "soma: " << res << "\n";
    cout << "divisão: " << res1 << "\n";
    cout << "resto: " << res2 << "\n";

    return 0;
}