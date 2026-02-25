#include <iostream>
#include <vector>

int main()
{
    // FUNÇÃO LAMBDA: função que não tem nome (função anonima) e podem ser atribuidas a variáveis ou funções, dentro da função main. parecido com arrow function do js. Não precisa de protótipo. pode ser declarada em qualquer parte do código e pode ser usa a partir de la. posso passar uma lista de variáveis externas que quero operar dentro da função.

    // função lambda: "variável" = ["captura de variáveis"]("parâmetros")->"tipo do retorno"{"bloco de código"}
    auto maior = [](int n1, int n2) -> int
    {
        return (n1 > n2) ? n1 : n2;
    };

    std::cout << maior(2, 6) << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    // funções também podem receber um array/coleção de valores ou parâmetros com o uso do vector.
    auto maior2 = [](std::vector<int> n) -> int
    {
        auto m = 0;
        for (int x : n)
        {
            m = (m > x) ? m : x;
        }

        return m;
    };

    // e para passar a coleção de valores, basta usar a inicialização uniforme.
    std::cout << maior2({9, 8, 2, 10, 45, 20, 5, 34, 12, 7, 100}) << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    // agora com a captura de variáveis
    int x1, x2, x3, x4;
    x1 = 10;
    x2 = 5;
    x3 = 2;
    x4 = 12;

    // basta passar as variáveis que deseja operar dentro da função na área de captura. se não for passada as variáveis, não da para usar dentro da função, gerando erro.
    auto soma = [x1, x2, x3, x4]() -> int
    {
        return x1 + x2 + x3 + x4;
    };

    std::cout << soma() << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    // mas caso tenha muitas variáveis no escopo, para não ter que passar todas, basta usar o igual "=". desta forma, ele assume que deve usar todas as variáveis disponíveis no escopo.
    auto soma2 = [=]() -> int
    {
        return x1 + x2 + x3 + x4;
    };

    std::cout << soma2() << std::endl;

    std::cout << "-------------------------------------------" << std::endl;

    // e pode-se usar tudo junto... parâmetros e captura de variáveis.
    auto maior3 = [=](std::vector<int> n) -> int
    {
        auto m = 0;
        for (int x : n)
        {
            m = (m > x) ? m : x;
        }

        return m + x1 + x2 + x3 + x4;
    };

    std::cout << maior3({9, 8, 2, 10, 45, 20, 5, 34, 12, 7, 100}) << std::endl;

    return 0;
}