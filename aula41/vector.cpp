#include <iostream>

// para trabalhar com vector, precisa importar essa biblioteca
#include <vector>

int main()
{
    // como se fosse um array mais moderno. melhor de se trabalhar.
    // declaração: chama a biblioteca "vector", o tipo "<int>" e o nome "num". caso deseje pode passar o tamanho "(5)", mas é opicional. sem passar tamanho, a alocação de memória é dinâmico
    std::vector<int> num1;
    std::vector<int> num2;
    int tam1, tam2;

    // "push_back()": adiciona elemento no final do vector.
    // como o vector está com tamanho dinâmico, não consigo selecionar uma posição e atribuir um valor. ex: num[5] = 4.
    // mas, caso a posição tenha cido preenchida antes, ai sim posso usar "num[posição ja preenchida] = 4" passando a posição preenchida.
    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    // "front()": mostro o primeiro elemento do vector
    std::cout << "primeiro valor de num1: " << num1.front() << std::endl;

    // "back()": mostra o último elemento do vector
    std::cout << "ultimo valor de num1: " << num1.back() << std::endl;

    // "at()": permite selecionar uma posição existente e mostrar o valor existente.
    std::cout << "valor selecionado de num1: " << num1.at(1) << std::endl;

    // "insert()": precisa passar um iterator e o valor que deseja inserir. aqui não está sendo passado o iterator... somente o início do vector e atribuindo um valor a partir do inicio. caso eu deseja outra posição, basta somar um valor que caia na posição desejada.
    num2.insert(num2.begin() + 2, 888);

    // "insert()": precisa passar um iterator e o valor que deseja inserir. aqui não está sendo passado o iterator... somente o final do vector e atribuindo um valor a partir do final. caso eu deseja outra posição, basta subtrair um valor que caia na posição desejada.
    num2.insert(num2.end() - 1, 888);

    // "erase()": precisa passar um iterator com a posição que deseja excluir. aqui não está sendo passado o iterator... somente o final do vector e excluindo um valor a partir do final. caso eu deseja outra posição, basta subtrair um valor que caia na posição desejada.
    num1.erase(num1.end() - 1);

    // "swap()": troca os valores de dois vectors. neste caso pega os valores de num1 e troca pelos do num2... e pega os valores de num2 e troca pelos do num1
    // num1.swap(num2);

    // "pop_back()": remove o ultimo elemento.
    num2.pop_back();

    // "size()": retorna o tamanho do vector.
    tam1 = num1.size();
    tam2 = num2.size();

    std::cout << "tamanho do vector1: " << tam1 << std::endl;

    for (int i = 0; i < tam1; i++)
    {
        std::cout << num1[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < tam2; i++)
    {
        std::cout << num2[i] << " ";
    }

    // "clear()": limpa totalmente o vector.
    num1.clear();

    return 0;
}