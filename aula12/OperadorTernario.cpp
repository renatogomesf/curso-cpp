#include <iostream>

using namespace std;

int main()
{

    // operador  ternário

    // (expressão/teste lógico) ? "ser true" : "se false";

    int nota = 4;
    string resposta;

    resposta = nota >= 7 ? "Aprovado" : "Reprovado";

    cout << resposta;

    return 0;
}