#include <iostream>

#include <memory>

class Carro
{

    // Encapsulamento: forma de proteger propriedades e métodos de serem modificados fora da classe.
    // o ato de deixar como "privete" já é um encapsulamento. e por ser privado, não da pra acessar fora da classe.
private:
    int velMax;

public:
    int potencia;
    const char *nome;

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

    int getVelMax()
    {
        return this->velMax;
    }

    // se a propriedade ou método for privado (não quero que seja acessado), o uso do set fica opcional ou é usado como um verificador (com alguma lógica de código) pra permitir ou não a manipulação das propriedades ou métodos privados.
    void setVelMax(int velMax)
    {
        this->velMax = velMax;
    }
};

int main()
{
    Carro c1{"bruno", 300};

    std::cout << c1.nome << ": " << c1.potencia << " - " << c1.getVelMax() << std::endl;

    std::unique_ptr<Carro> c2{new Carro{"celta", 75}};

    std::cout << c2->nome << ": " << c2->potencia << " - " << c2->getVelMax() << std::endl;

    return 0;
}