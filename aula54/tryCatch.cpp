#include <iostream>
#include <vector>

double divide(double n1, double n2);

int main()
{
    std::vector<int> num(5);

    double n1 = 12, n2 = 10;

    // Try Catch: tratamento de erros.
    // dentro do try é onde o código roda e, caso haja erro, ele cai no catch para ser tratado.
    try
    {
        // "at()": "na posição/índice informada" atribui "10"
        num.at(4) = 10;
        std::cout << num[4] << "\n";

    } // "std::exception &e": variável "e" tipada como exception. erro é alocado no endereço de memória da variável.
    catch (std::exception &e)
    {
        // "what()": diz qual é o erro. a variável "e" não pode ser usada sozinha.
        std::cout << "ERRO: " << e.what() << "\n";
    }

    try
    {
        std::cout << divide(n1, n2) << "\n";

    } // a função lança um erro feito por mim. a forma de capturar esse erro muda. agora deve ser uma constante do tipo char e como ponteiro... pra apontar pra cada carcter da mensagem.
    catch (const char *msg)
    {
        std::cerr << msg << '\n';
    }

    return 0;
}

double divide(double n1, double n2)
{
    // o catch não captura o erro de divisão por zero. então é preciso lançar esse erro.
    if (n2 == 0)
    {
        // "throw": "lançar"... lança um erro com a mensagem que foi escrita.
        throw "Erro de divisão por zero";
    }

    if (n1 >= 10)
    {
        throw "n1 precisa ser menor igual a 10";
    }

    return n1 / n2;
}