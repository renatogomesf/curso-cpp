#include <iostream>

class Carro
{
private:
    int velMax;
    const char *nome;

public:
    int potencia;

    // Sobrecarga de métodos. métodos com mesmo nome, mas o que define qual será chamado serão os parâmetros.
    Carro()
    {
        velMax = 120;
        potencia = 85;
        nome = "popular";
    }

    Carro(int potencia, const char *nome) : potencia(potencia), nome(nome)
    {
        if (potencia < 100)
        {
            velMax = 120;
        }
        else if (potencia < 200)
        {
            velMax = 240;
        }
        else
        {
            velMax = 360;
        }
    }

    int getVelMax()
    {
        return this->velMax;
    }

    const char *getNome()
    {
        return this->nome;
    }
};

int main()
{
    Carro c1;
    std::cout << c1.getNome() << ": " << c1.potencia << " - " << c1.getVelMax() << std::endl;

    Carro c2{180, "luxo"};
    std::cout << c2.getNome() << ": " << c2.potencia << " - " << c2.getVelMax() << std::endl;

    Carro c3{300, "esportivo"};
    std::cout << c3.getNome() << ": " << c3.potencia << " - " << c3.getVelMax() << std::endl;

    return 0;
}