#include <iostream>

#include <memory>

class Carro
{
public:
    int velMax;
    int potencia;
    const char *nome;

    // forma moderna de declarar métodos. agora pode ser declarado dentro da classe.

    // outra forma moderna de criar método é usando lista de inicialização. em vez de inicializer as variáveis dentro do método contrutor, usa-se uma lista após os parâmetros já atribuindo os parâmetros às variáveis da classe.

    /*
        ----------ANTES----------
        Carro(const char *nome, int potencia)
        {
            this->nome = nome;
            this->potencia = potencia;
        }

        ----------MODERNO----------
        Carro(const char *nome, int potencia) : nome(nome), potencia(potencia)
        {
        }

    */

    Carro(const char *nome, int potencia) : nome(nome), potencia(potencia)
    {

        if (potencia < 100)
        {
            this->velMax = 120;
        }
        else if (potencia < 200)
        {
            this->velMax = 220;
        }
        else
        {
            this->velMax = 350;
        }
    }
};

int main()
{

    // com a lista de inicialização, se torna possível fazer inicialização uniforme da classe. ou seja, não precisa usar o "new". basta chamar a classe, dar o nome (sem ponteiro) e inicializar "{}".
    Carro c1{"bruno", 300};

    // usando inicialização uniforme, o acesso às propriedades e métodos se faz através do uso do ponto ".". seta "->" é quando tem o "new".
    std::cout << c1.nome << ": " << c1.potencia << " - " << c1.velMax << std::endl;

    // com smart pointer.
    std::unique_ptr<Carro> c2{new Carro{"celta", 75}};

    // por ter "new", precisa da seta "->" pra acessar propriedades e métodos.
    std::cout << c2->nome << ": " << c2->potencia << " - " << c2->velMax << std::endl;

    // sempre lembrar de desocupar memória com o uso do "delete" quando se instancia classe usando ponteiro e "new". ex: Carro *c1 = new Carro(). quando não tem "new", não precisa do delete.
    // delete c1;

    return 0;
}