#include <iostream>
#include "Classes2.h"

int main()
{

    Moto *v1 = new Moto();
    v1->imp();

    Carro *v2 = new Carro();
    v2->imp();

    Tanque *v3 = new Tanque();
    v3->imp();

    return 0;
}