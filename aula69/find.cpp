#include <iostream>

// para usar o "find" precisa dessa biblioteca
#include <algorithm>

#include <vector>
#include <list>
#include <map>

int main()
{

    // ---------- COM VETOR ----------
    int vetor[]{5, 3, 1, 4, 7, 2, 6};

    // precisa de um ponteiro para armazenar o retorno do find quando se trabalha com vetor. pois ele retorna um iterator
    int *p;

    // "size_t": inteiro sem sinal. criado para armazenar tamanho de elementos.
    size_t tam = sizeof(vetor) / 4;

    // "find()": busca por um elemento numa coleção de dados.
    // precisa passar o inicio da coleção, o final e o que está procurando.
    p = std::find(vetor, vetor + tam, 16);

    if (p != vetor + tam)
    {
        std::cout << "Numero encontrado: " << *p << std::endl;
    }
    else
    {
        std::cout << "Numero NAO encontrado: " << std::endl;
    }

    std::cout << "-------------------------------------------------" << std::endl;

    // ---------- COM VECTOR ----------

    std::vector<int> num{5, 3, 1, 4, 7, 2, 6};

    auto it = std::find(num.begin(), num.end(), 3);

    if (it != num.end())
    {
        std::cout << "Numero encontrado: " << *it << std::endl;
    }
    else
    {
        std::cout << "Numero NAO encontrado: " << std::endl;
    }

    std::cout << "-------------------------------------------------" << std::endl;

    // ---------- COM LIST ----------

    std::list<int> num2{5, 3, 1, 4, 7, 2, 6};

    auto it2 = std::find(num2.begin(), num2.end(), 7);

    if (it2 != num2.end())
    {
        std::cout << "Numero encontrado: " << *it2 << std::endl;
    }
    else
    {
        std::cout << "Numero NAO encontrado: " << std::endl;
    }

    std::cout << "-------------------------------------------------" << std::endl;

    // ---------- CASO DE USO COM VECTOR ----------

    // std::vector<int> numeros;

    // std::vector<int>::iterator it3;
    // int numDigitado, qtde = 0;

    // while (qtde <= 10)
    // {
    //     std::cout << "Digite um numero: ";
    //     std::cin >> numDigitado;
    //     it3 = std::find(numeros.begin(), numeros.end(), numDigitado);

    //     if (it3 != numeros.end())
    //     {
    //         std::cout << "Numero ja existe: " << std::endl;
    //     }
    //     else
    //     {
    //         numeros.push_back(numDigitado);
    //         qtde++;
    //     }
    // }

    std::cout << "-------------------------------------------------" << std::endl;

    // ---------- COM MAP ----------

    std::map<char, int> mapa;

    mapa['a'] = 10;
    mapa['b'] = 33;
    mapa['c'] = 25;
    mapa['d'] = 5;
    mapa['e'] = 80;

    // com map, não precisa passar o inicio e o fim da coleção. como já é um método do proprio map, só precisa passar o elemento que está procurando.
    auto it4 = mapa.find('f');

    if (it4 != mapa.end())
    {
        std::cout << "chave encontrada: " << it4->first << " - " << it4->second << std::endl;
    }
    else
    {
        std::cout << "chave NAO encontrada" << std::endl;
    }

    std::cout << "-------------------------------------------------" << std::endl;

    // ---------- COM STRING ----------
    std::string texto = "CFB Cursos - Aula de C++";

    // "size_t": inteiro sem sinal. criado para armazenar tamanho de elementos (vetor, strings, vector, map).
    size_t enc = texto.find("Aula");

    // "npos": ja retorna o valor máximo/tamanho de "size_t".
    if (enc != std::string::npos)
    {
        std::cout << "palavra encontrada: " << enc << std::endl;
    }
    else
    {
        std::cout << "palavra NAO encontrada" << std::endl;
    }

    std::cout << "-------------------------------------------------" << std::endl;

    return 0;
}