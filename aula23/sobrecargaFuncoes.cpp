#include <iostream>

void soma(int n1, int n2);
void soma();

int main()
{
    soma(7, 6);
    soma();

    return 0;
}

// sobrecarga é quando tenho duas funções com mesmo nome e a decisão de qual vai ser chamada é feita em relação aos parâmetros passados. caso passe parâmetros, chama a primeira função. caso não tenha, chama a segunda.
void soma(int n1, int n2)
{
    int re = n1 + n2;

    std::cout << "soma: " << re << "\n";
}

void soma()
{
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;

    std::cout << "soma: " << re << "\n";
}