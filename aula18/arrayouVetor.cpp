#include <iostream>

int main()
{
    // Array
    // tipo, nome, tamanho (com valor entre colchetes)
    // ex: int num[3]; (array de tamanho 3)

    int vetor[5];

    // atribuindo valor na posição "0" do array.
    vetor[0] = 10;

    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    std::cout << vetor[3] << "\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << vetor[i] << "\n";
    }

    // outra forma de criar e atribuir valores
    int vetor2[5] = {1, 2, 3, 4, 5};

    // pegar o tamanho de forma dinâmica
    // "sizeof()": retorna o tamanho, em bytes, do tipo do array. como o tipo do array é "int" e int tem o tamanho de 4 bytes, ele multiplica o tamanho do tipo (4 bytes) pelo tamanho do array. então, no total, o "sizeof()" retorna o produto do tamanho do array pelo tamanho do tipo. neste caso, 4 bytes (tamanho do tipo do elemento) X 5 tamanho (array) = 20
    // usar simplesmente o retorno do "sizeof()" é errado no FOR. então, divide-se o tamanho total pelo tamanho do tipo de um dos elementos do array. ficará 20 / 4, resultando 5, que é o tamanho do array.
    for (int i = 0; i < sizeof(vetor2) / sizeof(vetor2[0]); i++)
    {
        std::cout << vetor2[i] << "\n";
    }

    return 0;
}