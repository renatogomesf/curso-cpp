#include <iostream>

using namespace std;

int main()
{

    int num1 = 10;
    int num2 = 50;

    // operadores lógicos
    // >, <, >=, <=, ==, !=

    if (num1 >= 10)
    {
        cout << "valor de num1 MAIOR ou IGUAL que 10" << "\n";
    }

    if (num1 < num2)
    {
        cout << "valor de num1 MENOR que num2" << "\n";
    }
    else
    {
        cout << "valor de num1 MAIOR que num2" << "\n";
    }

    // como true retorna 1 e false retorna 0, quando atribuo 1 ou 0 a uma vriável, já possível realizar teste lógico com "if else". se a variável possui "1", cai dentro do bloco TRUE (if) se a variável tem "0", cai dentro bloco FALSE (else).
    int sol = 1;

    if (sol)
    {
        cout << "clube" << "\n";
    }
    else
    {
        cout << "cinema" << "\n";
    }

    int nota1, nota2, res;
    char opc;

inicio:

    system("cls");

    cout << "Digite a nota 1: ";
    cin >> nota1;
    cout << "Digite a nota 2: ";
    cin >> nota2;

    res = (nota1 + nota2) / 2;

    if (res >= 7)
    {
        cout << "APROVADO" << "\n";
    }
    else if (res >= 5 && res < 7)
    {
        cout << "RECUPERACAO" << "\n";
    }
    else
    {
        cout << "REPROVADO" << "\n";
    }

    cout << "Digite outra nota?[s/n]: ";
    cin >> opc;

    if (opc == 's' || opc == 'S')
    {
        goto inicio;
    }

    return 0;
}