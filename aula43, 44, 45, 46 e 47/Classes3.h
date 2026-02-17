#include <iostream>
#ifndef CLASSES3_H_INCLUDED
#define CLASSES3_H_INCLUDED

class Base1
{
public:
    void impBase1();
};

void Base1::impBase1()
{
    std::cout << "imp classe base1 \n";
}

class Base2
{
public:
    void impBase2();
};

void Base2::impBase2()
{
    std::cout << "imp classe base2 \n";
}

// herança multipla é quando uma classe herda mais de uma classe.
// declaração: classe, nome da classe "CFB", dois pontos ":", se a classe herdada é publica ou privada "public" (para todas as classes) e os nomes das classes que deseja herdar separando elas por vírgula "," "public Base1, public Base2".
// basicamente o que indica herança múltipla é o uso da vírgula "," separando as classes herdadas.
class CFB : public Base1, public Base2
{
};

#endif // CLASSES3_H_INCLUDED