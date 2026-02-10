#include <iostream>

// para trabalhar com pilhas, precisa importar a biblioteca "stack"
#include <stack>

int main()
{
    // Pilha: estrutura de de dados onde o primeiro elemento inserido é o último a sair... e o úlitmo elemento inserido é o primerio a sair.

    // parecido com array (e possui funções parecidas com o JS usando somente o ponto ".". "push()", "pop()")
    // declaração: chama a biblioteca ("std::stack"), define o tipo de dado da stack ("<std::string>") e nomeia a stack ("cartas")
    std::stack<std::string> cartas;

    // "push()": adiciona elemento no final da lista
    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    // "size()": retorna quantos elementos tem na pilha.
    std::cout << "tamanho da pilha: " << cartas.size() << "\n";

    // "pop()": retira o elemento do final da lista
    cartas.pop();

    std::cout << "tamanho da pilha: " << cartas.size() << "\n";

    // "top()": retorna o elemento do topo da pilha. (o último inserido)
    std::cout << "carta do topo da pilha: " << cartas.top() << "\n";

    return 0;
}