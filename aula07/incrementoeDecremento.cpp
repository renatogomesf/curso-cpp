#include <iostream>

using namespace std;

int main()
{

    int n1, n2;

    n1 = 0;
    n2 = 10;

    cout << "n1 antes de incrementar: " << n1 << "\n";

    // incremento
    n1 += 5;
    n1++; // incrementa uma unidade

    cout << "n1 depois de incrementar: " << n1 << "\n";

    cout << "-------------------------------" << "\n";

    cout << "n2 antes de decrementar: " << n2 << "\n";

    // decremento
    n2 -= 5;
    n2--; // decrementa uma unidade

    cout << "n2 depois de decrementar: " << n2 << "\n";

    // outras operações
    // n1 *= 2;
    // n1 /= 2;

    // PRÉ/PÓS INCREMENTO e DECREMENTO

    int n3 = 20;
    int n4 = 20;
    int n5 = 20;
    int n6 = 20;

    // pré-incremento (incrementa e depois exibe o valor)
    cout << ++n3 << "\n";

    // pós-incremento (mostra o valor e depois incrementa)
    cout << n4++ << "\n";

    // pré-decremento (incrementa e depois exibe o valor)
    cout << --n5 << "\n";

    // pós-decremento (mostra o valor e depois incrementa)
    cout << n6-- << "\n";

    return 0;
}