#include <iostream>

int main()
{
    int *p;
    int vetor[10];

    // manipular arrays pelo ponteiro

    // recebe o endereço do PRIMEIRO elemento do vetor.
    // os endereços de um array são subsequentes (uma sequência). como "int" tem 4 bytes, os edereços de memória diferem em 4 (hexadecimal).
    p = &vetor[0]; // mesmo que --> pv = vetor;
    std::cout << p << "\n";

    p = &vetor[1];
    std::cout << p << "\n";

    p = &vetor[2];
    std::cout << p << "\n";

    p = &vetor[3];
    std::cout << p << "\n\n";

    // incrementando o ponteiro. mostra o próximo endereço de memória (já considerando o tipo do ponteiro e vetor que é 4 bytes) partindo da primeira atribuição ao ponteiro "p"
    *(p += 1);
    std::cout << p << "\n";

    *(p += 1);
    std::cout << p << "\n";

    *(p += 1);
    std::cout << p << "\n";

    // atribuir valores no vetor a partir do ponteiro
    // chama a posição/endereço e depois atribui.
    p = &vetor[0];
    *p = 10;
    std::cout << vetor[0] << "\n";

    // incrementa para ir para a próxima posição/endenreço e depois atribui.
    *(p += 1);
    *p = 20;
    std::cout << vetor[1] << "\n";

    return 0;
}