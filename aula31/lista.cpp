#include <iostream>

// para trabalhar com listas, precisamos impotar a biblioteca "list"
#include <list>

int main()
{
    // declaração: chama a biblioteca ("std::list"), define o tipo de dado da stack ("<std::int>") e nomeia a stack ("aula"). pode adicionar um tamanho/quantidade de posições também... basta, após o nome, colocar um parêntese com o tamanho. ex: std::list<int> aula(50); --> tamanho 50
    // após o nome declarado desta forma (8,50), indica que terá 8 posições já com valor 50 em todas.
    std::list<int> aula;

    // inserir no meio da lista
    std::list<int>::iterator it;

    for (int i = 0; i < 10; i++)
    {
        // "push_front()": insere no início da lista
        // "push_back()": insere no final da lista
        aula.push_front(i);
    }

    // // "begin()": retorna o inicio da lista
    // it = aula.begin();

    // // "advance()": pede o iterador com o inicio da lista e uma posição desejada. o advance "avança" até ela.
    // std::advance(it, 5);

    // // "insert()": pede o iterador com posição definida e o valor que deseja inserir. com o iterator na posição desejada definidad no "advance()", usa-se o "insert()" para adicionar na posição definida.
    // aula.insert(it, 0);

    // "sort()": ordena/organiza a lista em ordem crescente
    aula.sort();

    // "reverse()": inverte a ordem da lista.
    aula.reverse();

    std::cout << "tamanho da lista: " << aula.size() << "\n";

    // "size()": retorna o tamanho.
    int tam = aula.size();
    for (int i = 0; i < tam; i++)
    {
        // "front()": retorna o elemento da frente da lista.
        // "back()": retorna o elemento do final da lista.
        std::cout << aula.front() << "\n";

        // "pop_front()": remove o elemento da frente da lista.
        // "pop_back()": remove o elemento do final da lista.
        aula.pop_front();
    }

    return 0;
}