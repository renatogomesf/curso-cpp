#include <iostream>

// para usar o "pair", precisa dessa biblioteca.
#include <utility>

#include <vector>

int main()
{
    // Pair: armazenamento em pares. tipo chave valor / JSON
    // declaração: pair <"tipo","tipo"> "nome" -> inicializar("valor do primeiro tipo", "valor do segundo tipo");
    // desta forma não é um vector.
    std::pair<int, std::string> par(10, "bruno");

    // outra forma de inicializar
    // par.first = 100;
    // par.second = "cfb cursos";

    // para acessar os valores, usa-se "first" para acessar a chave e "second" o valor.
    std::cout << par.first << " - " << par.second << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    // usadno pair como VETOR. basta usar a notação "[]" na frente do nome passando o tamanho.
    const int tam = 3;
    std::pair<int, std::string> parVetor[tam];

    // e, para atribuir os valores, funcioan como vetor... passa o indice da chave e do valor.
    /*
    parVetor[0].first = 100;
    parVetor[0].second = "cfb cursos";
    parVetor[1].first = 200;
    parVetor[1].second = "cfb cursos";
    parVetor[2].first = 300;
    parVetor[2].second = "cfb cursos";
    */

    // mas tem uma forma beem mais simples de atribuir valor... usando o "std::make_pair" (construir o par). passa o indice e atribui usando o make_pair. assim não precisa usar o first ou second.
    parVetor[0] = std::make_pair(10, "bruno");
    parVetor[1] = std::make_pair(20, "curso de c++");
    parVetor[2] = std::make_pair(30, "cfb cursos");

    for (std::pair<int, std::string> i : parVetor)
    {
        std::cout << i.first << " - " << i.second << std::endl;
    }

    std::cout << "--------------------------------------------------" << std::endl;

    // também é possível usar um pair dentro do outro. basta subistituir um dos tipo do pair por outro pair e seus tipos.
    std::pair<int, std::pair<std::string, double>> parVetor2[tam];

    // e, para atribuir, usa-se um "make_pair" dentro do outro no lugar do valor onde é o novo pair.
    parVetor2[0] = std::make_pair(10, std::make_pair("mouse", 10.55));
    parVetor2[1] = std::make_pair(20, std::make_pair("teclado", 50.49));
    parVetor2[2] = std::make_pair(30, std::make_pair("monitor", 399.98));

    for (std::pair<int, std::pair<std::string, double>> i : parVetor2)
    {
        std::cout << i.first << " - " << i.second.first << " - " << i.second.second << std::endl;
    }

    std::cout << "--------------------------------------------------" << std::endl;

    // usando pair com VECTOR. cria o vector e tipa ele como pair.
    std::vector<std::pair<int, std::string>> prod;

    // para atribuir, usa-se os métodos do vector junto do "make_pair"
    prod.push_back(std::make_pair(10, "mouse"));
    prod.push_back(std::make_pair(20, "teclado"));
    prod.push_back(std::make_pair(30, "monitor"));

    for (std::pair<int, std::string> i : prod)
    {
        std::cout << i.first << " - " << i.second << std::endl;
    }

    return 0;
}