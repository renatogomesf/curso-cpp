#include <iostream>

// para trabalhar com vector, precisa importar essa biblioteca
#include <vector>

int main()
{
    std::vector<std::string> produtos = {"mouse", "teclado", "monitor", "gabinete", "cx.som"};

    // Iterator: serve para navegar numa coleção de dados como array/vector.
    // declaração: chama o vector com seu tipo igual ao tipo da coleção que vai ser iterada "std::vector<std::string>", chama o iterator do próprio vector "::iterator" e da um nome para esse iterador "it"
    // essa variável é um PONTEIRO.
    std::vector<std::string>::iterator it;

    // "begin()": retorna um iterator que aponta para primeiro elemento da coleção. ou seja, retorna o endereço de memória do primeiro elemento.
    it = produtos.begin();

    // "end()": aponta para o endereço de memória do final da coleção. mas o problema é que retorna o tamanho da coleção. mas queremos a posição. aqui ele retorna 5 mas a posição do último é 4. então, subtrai 1 desse iterador. ou seja, ele retorna o endereço de memória 1 a frente dos endereços da coleção
    // it = produtos.end() - 1;

    // para navegar na coleção, temos 3 funções: advance, next e prev.
    // "advance()": avança um número X dentro da coleção. recebe dois parâmetros, o iterator (com o endereço de memória do primeiro ou último elemento) e o índice/posição que deseja avançar.
    std::advance(it, 1);

    // "*it": usa o asterisco para acessar o conteúdo do endereço de memória do alocado no iterator "it".
    std::cout << *it << std::endl;

    // "next()": é uma função que já retorna o conteúdo do endereço de memória. ele não manimupa a posição do iterador como o advance. ele avança para a direita e se usa já no formato de ponteiro para retornar o conteúdo do endereço de memória. recebe os mesmo parâmetros de advance.
    std::cout << *next(it, 2) << std::endl;

    // "prev()": é uma função que já retorna o conteúdo do endereço de memória. ele não manimupa a posição do iterador como o advance. ele avança para a esquerda e se usa já no formato de ponteiro para retornar o conteúdo do endereço de memória. recebe os mesmo parâmetros de advance.
    // para usar o "prev", o iterator precisa apontar para o final da coleção.
    it = produtos.end() - 1;
    std::cout << *prev(it, 2) << std::endl;

    std::cout << "---------------------------------\n";

    // percorrer todos os elementos do vector.
    // (início do vector, verifica se o it/endereço é igual ao final do vector, incremento do it. )
    for (it = produtos.begin(); it != produtos.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "---------------------------------\n";

    // é comum a declaração do iterator ja vir dentro do for.
    for (std::vector<std::string>::iterator it = produtos.begin(); it != produtos.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}