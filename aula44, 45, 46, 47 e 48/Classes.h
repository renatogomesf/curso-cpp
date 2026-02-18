#include <iostream>
#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo
{
public:
    int vel;
    int tipo;

    Veiculo(int tp);

    // métodos GET e SET (usados para manipular propriedades e metodos privados)
    int getVelMax();
    bool getLigado();
    void setLigado(int l);

    // propriedades e métodos privados só podem ser manipulados pela própria classe.
private:
    std::string nome;
    int velMax;
    bool ligado;

    // métodos GET e SET (usados para manipular propriedades e metodos privados)
    void setVelMax(int vm);
};

Veiculo::Veiculo(int tp)
{
    tipo = tp;

    setLigado(0);

    if (tp == 1)
    {
        nome = "carro";
        setVelMax(200);
    }
    else if (tp == 2)
    {
        nome = "aviao";
        setVelMax(800);
    }
    else if (tp == 3)
    {
        nome = "navio";
        setVelMax(120);
    }
}

int Veiculo::getVelMax()
{
    return this->velMax;
}

void Veiculo::setVelMax(int vm)
{
    this->velMax = vm;
}

bool Veiculo::getLigado()
{
    return this->ligado;
}

void Veiculo::setLigado(int l)
{
    if (l == 1)
    {
        this->ligado = true;
    }
    else if (l == 0)
    {
        this->ligado = false;
    }
}

#endif // CLASSES_H_INCLUDED