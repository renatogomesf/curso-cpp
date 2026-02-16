#include <iostream>

// em poo, os objetos são criados antes da função main. isso quando a classe é criada dentro do arquivo main.
// declaração: "class" e nome da classe "Aviao"
class Aviao
{

    // deve-se agrupar o que for publico com publico e o que for privado com o que for privado
public:
    int vel = 0;
    int velMax;
    std::string tipo;

    // esse é o prototipo do método. ele é criado fora da classe.
    void init(int tp);

private:
};

// métodos de uma classe são criados fora dela.
// declaração: tipo de retorno "void", nome da classe a qual o método pertence "Aviao", nome do método que foi prototipado dentro da classe "::init(int tp)"
void Aviao::init(int tp)
{
    // tudo o que o método fizer vem aqui.
    if (tp == 1)
    {
        // para acessar as propriedades da classe que o método pertence, usa-se o "this" e a seta "->". pois em c++, para acessar uma propriedade, usa-se seta e não o ponto ".".
        this->velMax = 800;
        this->tipo = "jato";
    }
    else if (tp == 2)
    {
        this->velMax = 350;
        this->tipo = "monomotor";
    }
    else if (tp == 3)
    {
        this->velMax = 180;
        this->tipo = "planador";
    }
}

int main()
{

    // instanciar um novo objeto.
    // declaração: tipar com a classe "Aviao", nome da variável como ponteiro por não ter constructor "*av1" = "new" nome da classe "Aviao()"
    Aviao *av1 = new Aviao();
    Aviao *av2 = new Aviao();

    // para acessar uma propriedades e métodos da classe, usa-se a seta "->" e não o ponto "." com em java ou typescript.
    av1->init(3);
    av2->init(2);

    std::cout << av1->velMax << "\n";
    std::cout << av2->velMax << "\n";

    return 0;
}