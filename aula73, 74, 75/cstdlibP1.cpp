#include <iostream>

#include <cstdlib>

int main()
{
    // conversão, geração de números aleatórios e alocação/gerenciamento dinâmico de memória.

    // --------------------------------- CONVERSÃO ---------------------------------
    double num;
    char numero[80] = "121.3";

    // "atof()" (a to f -> alpha to float): converte para float. pode ser usado para float e double.
    num = atof(numero);

    std::cout << num << std::endl;

    /*
        existem:
        atof(): converte para float
        atoi(): converte para inteiro
        atol(): converte para long int
        atoll(): converte para long long int (c++ 11)
        ...

        astrtod(): converte string para double
        astrtof(): converte string para float
        astrtol(): converte string para long
        astrtoll(): converte string para long long
        ...

    */

    // --------------------------------- GERAÇÃO DE NÚMEROS ALEATÓRIOS ---------------------------------

    // como o rand, depois que gera os primeiros números, usa uma mesma base/semente de geração, ele acaba repetindo os números. para contornar isso, usa-se o "srand", que, a cada nova execução/chamada do programa, ele gera uma nova base/semente de geração. e passa o "time(NULL)" para realizar isso.
    // srand(time(NULL));

    // for (int i = 0; i < 10; i++)
    // {
    //     // "rand()%intervalo": gera um número aleatório. "%intervalo": define até qual valor pode assumir. neste caso, ele vai gerar um número entre 0 e 100. se fosse de 0 a 10, %10. se fosse de 0 a 50, %50.
    //     std::cout << rand() % 100 << std::endl;
    // }

    // --------------------------------- GERENCIAMENTO DINÂMICO DE MEMÓRIA ---------------------------------

    // calloc malloc: alocação de memória
    // free: libera a memória alocada
    // realloc: aumenta ou diminui o tamanho da memória alocada

    int tam = 10;
    int *vetor;

    // "calloc()": recebe o tamanho/quantidade a ser alocado e o tamanho do tipo que será alocado
    // vetor = (int *)calloc(tam, sizeof(int));

    // "malloc()": recebe o amanho do tipo que será alocado e retorna o ponteiro do primeiro elemento.
    vetor = (int *)malloc(sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 100;
        std::cout << vetor[i] << std::endl;
    }

    // "free()": libera a memória alocada
    free(vetor);

    return 0;
}