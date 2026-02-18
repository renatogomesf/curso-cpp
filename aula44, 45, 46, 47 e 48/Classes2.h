#include <iostream>
#ifndef CLASSES2_H_INCLUDED
#define CLASSES2_H_INCLUDED

class Veiculo
{
public:
    int vel;
    int blind;
    int rodas;

    // para permitir que as classes filhas manipulem o elementos privados, precisa dos GET e SET.
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);

    void imp();

    // mesmo sendo uma classe herdada por outras classes, a manipulação de propriedades e métodos privados só pode ser feita dentro da própria classe pai.
private:
    int tipo;
    int velMax;
    bool arma;
};

void Veiculo::setTipo(int tp)
{
    this->tipo = tp;
}

void Veiculo::setVelMax(int vm)
{
    this->velMax = vm;
}

void Veiculo::setArma(bool ar)
{
    this->arma = ar;
}

void Veiculo::imp()
{
    std::cout << "tipo: " << this->tipo << "\n";
    std::cout << "velMax: " << this->velMax << "\n";
    std::cout << "qtd rodas: " << this->rodas << "\n";
    std::cout << "blindagem: " << this->blind << "\n";
    std::cout << "armamento: " << this->arma << "\n";
    std::cout << "---------------------------------------------------- \n";
}

// herança é quando uma classe herda propriedades e métodos de outra classe
// declaração: classe, nome da classe "Moto", dois pontos ":", se a classe herdada é publica ou privada "public" e o nome da classe que deseja herdar os elementos "Veiculo"
// basicamente o que indica  herança é o uso dos dois pontos ":" seguidos do nome da classe que está herdando
class Moto : public Veiculo
{
public:
    Moto();
};

Moto::Moto()
{
    vel = 0;
    blind = 0;
    rodas = 2;

    setTipo(1);
    setVelMax(120);
    setArma(false);
}

class Carro : public Veiculo
{
public:
    Carro();
};

Carro::Carro()
{
    vel = 0;
    blind = 0;
    rodas = 4;

    setTipo(2);
    setVelMax(180);
    setArma(false);
}

class Tanque : public Veiculo
{
public:
    Tanque();
};

Tanque::Tanque()
{
    vel = 0;
    blind = 1;
    rodas = 8;

    setTipo(4);
    setVelMax(200);
    setArma(true);
}

#endif // CLASSES2_H_INCLUDED