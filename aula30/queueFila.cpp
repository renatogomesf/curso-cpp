#include <iostream>

// para trabalhar com filas, precisa importar a biblioteca "queue"
#include <queue>

int main()
{
    // Fila/Queue: estrutura de de dados onde o primeiro elemento inserido é o primeiro a sair... e o úlitmo elemento inserido é o último a sair.
    // parecido com array (e possui funções parecidas com o JS usando somente o ponto ".". "push()", "pop()")
    // declaração: chama a biblioteca ("std::queue"), define o tipo de dado da stack ("<std::string>") e nomeia a stack ("cartas")
    std::queue<std::string> cartas;

    // "push()": adiciona elemento no final da lista
    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    // "size()": retorna quantos elementos tem na pilha.
    std::cout << "tamanho da fila: " << cartas.size() << "\n";

    // "front()": mostra o primeiro elemento da fila
    std::cout << "primeiro elemento da fila: " << cartas.front() << "\n";

    // "back()": mostra o último elemento da fila
    std::cout << "ultimo elemento da fila: " << cartas.back() << "\n";

    // "pop()": em queue, remove o elemente que está na FRENTE da fila.
    cartas.pop();

    std::cout << "'pop()': primeiro elemento da fila: " << cartas.front() << "\n";

    // "empty()": verifica se a fila está vazia ou não. retorna TRUE caso esteja vazia e FALSE caso não esteja.
    if (cartas.empty())
    {
        std::cout << "pilha vazia\n";
    }
    else
    {
        std::cout << "pilha com cartas\n";
    }

    return 0;
}