// arquivos ".h" são arquivos de cabeçalhos que podem ser importados por outros arquivos.
// este arquivo é usado para separar classes, funções, variáveis, tipos e suas lógicas de outros arquivos para melhor organizar.

// estrutura básica de um arquivo de cabeçalho.
// ifndef, #define e #endif (conhecidos como header guards ou proteções de inclusão) garantem que o conteúdo não seja inserido várias vezes no mesmo arquivo, o que geraria erros.
#include <iostream>
#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao
{

public:
    int vel = 0;
    int velMax;
    std::string tipo;

    // constructor da classe (protótipo) (sempre o mesmo nome da clase e em letra maiúscula)
    // declaração: basta usar o nome da classe e passar seu parâmetros
    Aviao(int tp);

    // metodo comum sempre com letra minúscula
    void imprimir();

private:
};

// implementando o metodo construtor
// por ser construtor, não pode tipar o retorno. tipo colocar "void"  na frente de "Aviao::Aviao(int tp)"
// declaração: nome da classe "Aviao" e o nome do prototipo de mesmo nome já que é o construtor "Aviao"
Aviao::Aviao(int tp)
{
    if (tp == 1)
    {
        // por ser o metodo construtor, não precisa usar o "this"
        velMax = 800;
        tipo = "jato";
    }
    else if (tp == 2)
    {
        velMax = 350;
        tipo = "monomotor";
    }
    else if (tp == 3)
    {
        velMax = 180;
        tipo = "planador";
    }
}

void Aviao::imprimir()
{
    std::cout << "tipo: " << this->tipo << "\n";
    std::cout << "velMax: " << this->velMax << "\n\n";
}

#endif // AVIAO_H_INCLUDED