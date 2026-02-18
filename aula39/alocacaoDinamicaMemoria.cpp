#include <iostream>

// necessário para usar a função "malloc()"
#include <stdlib.h>

int main()
{
    // aloca 50 espaços de memória fixos... mesmo que use somente 20, 30 ainda estarão reservados. o que gera consumo de recursos desnecessário. e declarar um valor menor (char vnome[5]) também é um problema, pois os caracteres excedentes serão alocados em locais que não deveriam estar, podendo causar um erro fatal no programa ou sistema.
    // char vnome[50];

    // para user a função malloc, precisa transformar a variáel num ponteiro.
    char *vnome;

    // "malloc()": função para alocação dinâmica de memória. precisa passar o tamanho do bloco que ela vai armazenar. ex: char = 1 byte, int = 4 bytes. e, para passar esse tamanho, usa-se a função "sizeof()" passando o tipo e somando +1, só para ter uma sobrinha por conta do caractere finalizador "\0".
    // essa função retorna "void" então precisa faze um type cast/cash e passar esse retorno de acordo com a variável assossiada. (char *): retorna um ponteiro do tipo char
    // com tudo isso, agora a variável tem tamanho dinâmico.
    vnome = (char *)malloc(sizeof(char) + 1);

    // como o "std::cin >>" considera o caracter espaço " " como terminador, ou seja, caso escreva "bruno campos", o "cin" só vai armazenar na variável "bruno". por conta do espaço ele considera que terminou e não armazena o resto.
    // para contornar isso, basta chamar o "getline()", passando a variável que receberá a entrada de dados e o tamanho dessa entrada. como não da pra saber exatamente o tamanho dessa entrada, usa-se "sizeof()" passando a entrada em si "std::cin". assim ele assume o tamanho da entrada de dados de uma forma dinâmica.
    std::cin.getline(vnome, sizeof(std::cin));

    std::cout << vnome << "\n";

    system("pause");

    return 0;
}