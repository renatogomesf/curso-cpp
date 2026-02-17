#include <iostream>
#include "Classes.h"

int main()
{
    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);

    v1->setLigado(1);
    v2->setLigado(1);

    // como "velMax" está privada, usa-se o metodo get para ler o valor
    std::cout << v1->getVelMax() << "\n";
    std::cout << v2->getVelMax() << "\n";
    std::cout << v3->getVelMax() << "\n";

    if (v1->getLigado())
    {
        std::cout << "v1 ligado \n";
    }
    else
    {
        std::cout << "v1 desligado \n";
    }

    if (v2->getLigado())
    {
        std::cout << "v2 ligado \n";
    }
    else
    {
        std::cout << "v2 desligado \n";
    }

    if (v3->getLigado())
    {
        std::cout << "v3 ligado \n";
    }
    else
    {
        std::cout << "v3 desligado \n";
    }

    return 0;
}