#include <iostream>

void contador(int num, int cont = 0);

int main()
{
    contador(10);
    return 0;
}

// recursividade: função que chama ela mesma até que resolva o que foi feita para resolver.
void contador(int num, int cont)
{
    std::cout << cont << "\n";

    if (num > cont)
    {
        contador(num, ++cont);
    }
}