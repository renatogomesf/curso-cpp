#include <iostream>

class Veiculo
{
    // só pode ser acessado dentro desta classe. (herança e instancia não tem acesso)
private:
    int velMax;
    int potencia;

    // pode ser acessado dentro e fora da classe (herança e instancia)
public:
    int rodas;
    const char *nome;

    // pode ser acessado dentro da classe e pelas classes que herdarem essa. por meio de instancias não tem acesso.
protected:
    int portas;
    const char *cor;
};

class Carro : public Veiculo
{
public:
    void imprime()
    {
        /*
            // private... não tem acesso por herança ou instancia
            velMax = 180;
            potencia = 150;
        */

        rodas = 4;
        nome = "carro";
        portas = 4;
        cor = "vermelho";

        /*
            // private... não tem acesso por herança ou instancia
            std::cout << this->velMax << std::endl;
            std::cout << this->potencia << std::endl;
        */

        // public... acesso total
        std::cout << this->rodas << std::endl;
        std::cout << this->nome << std::endl;

        // protected... tem acesso através de herança
        std::cout << this->portas << std::endl;
        std::cout << this->cor << std::endl;
    }
};

int main()
{

    Carro c1;

    c1.imprime();

    return 0;
}