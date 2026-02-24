#include <iostream>

// outra forma de usar variáveis externas é com arquivos de cabeçalho
#include "variaveis.h"

void impNum();

int num{10};

int main()
{
    // EXTERN: acessar variáveis de outros arquivos
    void impNum();

    std::cout << tmp << std::endl;

    return 0;
}