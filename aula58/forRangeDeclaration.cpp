#include <iostream>
#include <vector>

int main()
{

    int x[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    std::vector<int> n{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

    // for mais trabalhoso.
    // for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    // {
    //     std::cout << x[i] << std::endl;
    // }

    std::cout << "--------------------------------------------" << std::endl;

    // forma mais simples de iterar coleções. aqui só é preciso criar uma variável do mesmo tipo da coleção "int i", usar dois pontos ":" e simplesmente atribuir a coleção à essa variável. parecido com o for do Java.
    // os elementos da coleção vão sendo passados 1 a 1 para variável.
    for (int i : x)
    {
        std::cout << i << std::endl;
    }

    std::cout << "--------------------------------------------" << std::endl;

    // é possível o usar o "auto" para tipar a variável de acordo com a coleção passada.
    for (auto i : n)
    {
        std::cout << i << std::endl;
    }

    std::cout << "--------------------------------------------" << std::endl;

    // forma mais moderna/atual de declarar strings. cria uma "coleção de caracteres (char)" (não possui os métodos begin() e end()) e usa o ponteiro para apontar para cada caracter. por mais que seja "const", é possível atribuir valores.
    // antigo: std::string nome = "bruno"; // tecnicamente não tem tamanho de string.
    const char *nome = "brunotesteTESTE"; // tem limite do tamanho da string.

    // para percorrer algo que não seja iterado/coleção (não possui os métodos begin() e end() para criar um iterator), usa-se o for tradicional. como no javascript da pra percorrer um texto caracter por caracter, aqui também, mas com o for tradicional.
    for (int i = 0; i <= sizeof(nome); i++)
    {
        std::cout << nome[i] << std::endl;
    }

    return 0;
}