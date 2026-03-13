#include <iostream>
#include <vector>

#include <cstdlib>

int main()
{
    // funções aritméticas:
    // abs: retorna o valor absoluto de um determinado número recebido como parâmetro.
    // div: retorna o quociente (resultado) e o resto de uma determinada divisão. precisa passar o numerador e o denomidador da divisão

    // size_t: tipo especial para receber tamanhos
    // div_t: tipo especial para receber o resultado da função div.

    int n = -10;

    // "abs()": retorna o valor absoluto de um número recebido como parâmetro. ignora sinais
    std::cout << abs(n) << std::endl;

    // -------------------------------------------------------------------------------------------------------
    int num, den;

    // div_t: tipo especial para receber o resultado da função div().
    div_t res;

    num = 10;
    den = 3;

    // div: retorna o quociente (resultado) e o resto de uma determinada divisão. precisa passar o numerador e o denomidador da divisão
    res = div(num, den);

    // "res.quot": mostra o quociente (resultado)
    // "res.rem": mostra o resto da divisão
    std::cout << "quociente: " << res.quot << " - resto: " << res.rem << std::endl;

    /*
        ldiv: para long int
        llabs: para valores absolutos de long long int -> c++ 11
        lldiv: para long long int -> c++ 11
    */

    // -------------------------------------------------------------------------------------------------------

    // Constantes da biblioteca.
    // RAND_MAX: tem o valor máximo retornado pelo rand()

    // -------------------------------------------------------------------------------------------------------

    // outros tipos
    // ldiv_t: para long int
    // lldiv_t: para long long int

    // -------------------------------------------------------------------------------------------------------

    // exemplo de size_t
    std::vector<int> numVector{9, 6, 3, 8, 5, 2, 7, 4, 1, 0};

    // size_t: tipo especial para receber tamanhos
    // sempre que for armazenar o tamanho de um conjunto, usar size_t
    size_t tam;

    tam = numVector.size();

    std::cout << tam << std::endl;

    return 0;
}