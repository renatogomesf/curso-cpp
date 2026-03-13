#include <iostream>

#include <cstdlib>

void fim()
{
    std::cout << "CFB Cursos" << std::endl;
}

int comparacao(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
    // retorna 0: a = b
    // retorna valor > 0: a > b
    // retorna valor < 0: a < b
}

int main()
{
    // funções de controle de ambiente.

    // "atexit()" ("quando sair"): chama uma função/procedimento na saida do programa. quando finaliza. basta passar a função.
    // atexit(fim);

    at_quick_exit(fim); // c++ 11. mesmo que "atexit()"

    // ------------------------------------------------------------------------------------------------------------------

    // for (int i = 0; i < 10; i++)
    // {
    //     if (i < 5)
    //     {
    //         std::cout << i << std::endl;
    //     }
    //     else
    //     {
    //         // funções de finalização: abort() e exit()

    //         // "exit()": finaliza o programa no meio. recebe um int como parâmetro. 1 = EXIT_FAILURE ele para e retorna/gera falha / 0 = EXIT_SUCCESS ele para e retorna/gera sucesso. posso passar o proprio valor ou as constantes EXIT_SUCCESS e EXIT_FAILURE.
    //         // exit(EXIT_SUCCESS);

    //         // quick_exit(EXIT_SUCCESS); // c++ 11. mesmo que "exit()"; // COMENTADO PORQUE PARA A EXECUÇÃO AQUI. NÃO EXECUTA O RESTO DAS LINHAS.
    //         std::cout << i << std::endl;
    //     }
    // }

    // ------------------------------------------------------------------------------------------------------------------

    // "getenv()": obtem o valor de uma variável de ambiente do sistema operacional. qualquer variável de ambiente do sistema. basta dizer qual variável deseja.

    // const char *p;

    // p = getenv("PATH");

    // std::cout << p << std::endl;

    // ------------------------------------------------------------------------------------------------------------------

    // "system()": roda um comando do sistema operacional. basta passar o comando.

    // const char *canal = "CFB Cursos 2222222222222222222";

    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout << i << std::endl;
    // }

    // _Exit(EXIT_SUCCESS); // c++ 11. mesmo que "exit()";

    // system("cls");
    // system("dir");
    // std::cout << canal << std::endl;
    // system("pause");

    // ------------------------------------------------------------------------------------------------------------------
    int vetor[]{9, 1, 8, 2, 7, 3, 6, 4, 5, 0};

    int pesquisar = 7;

    int *posicao;

    // "qsort()": ordena array. recebe array que vai ordenar, tamanho do array, tamanho do elemento do array, função que faz comparação para conseguir ordernar o array.
    qsort(vetor, 10, sizeof(int), comparacao);

    for (int i = 0; i < 10; i++)
    {
        std::cout << vetor[i] << std::endl;
    }

    // "bsearch()": faz uma pesquisa no array e informa a posição do elemento. recebe elemento a ser pesquisado (endereço), array onde será pesquisado, tamanho do array, tamanho do elemento do array e função de comparação.
    posicao = (int *)bsearch(&pesquisar, vetor, 10, sizeof(int), comparacao);

    std::cout << "posição:  " << *posicao << std::endl;

    return 0;
}