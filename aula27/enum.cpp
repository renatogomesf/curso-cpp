#include <iostream>

int main()
{
    // cria uma lista enumerada. cada item da lista recebe um indice. a enumeração, caso não seja atribuido valor, começa em 0.
    enum armas
    {
        fuzil,
        revolver,
        rifle,
        escopeta
    };

    // enum pode ser passado como tipagem de uma variável. desta forma a variável passa a receber somente o que estiver no enum
    armas armaSel;

    // retorna o indice do valor passado.
    armaSel = escopeta;

    std::cout << armaSel << "\n";

    // caso seja atribuido valor em um item e não nos demais, a contagem parte do valor informado. o próximo item sempre se baseia no anterior
    // aqui, mesmo que tenha o valor 100, o teste003 se baseia no indice/valor de teste002 e continua a contagem a partir dali.
    enum teste
    {
        teste001 = 100,
        teste002 = 8,
        teste003,
        teste004
    };

    teste testeItem;

    // retorna o indice do valor passado.
    testeItem = teste003;

    std::cout << testeItem << "\n";

    // FORMA MAIS SIMPLES DE PEGAR O ÍNDICE DO INTEM DA LISTA.
    int num = teste::teste004;

    std::cout << num << "\n";

    return 0;
}