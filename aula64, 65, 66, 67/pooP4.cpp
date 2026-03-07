#include <iostream>

class Veiculo
{
private:
    const char *nome;
    const char *cor;

public:
    int velMax;
    int rodas;

    // Virtual: permite que o método seja sobrescrito pela classe que herdar essa classe.
    virtual void imp()
    {
        std::cout << "Nome......." << this->nome << std::endl;
        std::cout << "Cor........" << this->cor << std::endl;
        std::cout << "Rodas......" << this->rodas << std::endl;
        std::cout << "Vel.Max...." << this->velMax << std::endl << std::endl;
    }

    const char *getNome()
    {
        return this->nome;
    }

    void setNome(const char *nome)
    {
        this->nome = nome;
    }

    const char *getCor()
    {
        return this->cor;
    }

    void setCor(const char *cor)
    {
        this->cor = cor;
    }
};

// Herança
class Carro : public Veiculo
{
public:
    Carro()
    {
        velMax = 160;
        rodas = 4;
        setNome("Carro");
        setCor("Brancos");
    }
};

class Moto : public Veiculo
{
public:
    Moto()
    {
        velMax = 200;
        rodas = 2;
        setNome("Moto");
        setCor("Preto");
    }
};

class Militar : public Veiculo
{
public:
    int monicao;
    bool armamento;

    Militar(bool armamento, int monicao) : armamento(armamento), monicao(monicao)
    {
        velMax = 150;
        rodas = 6;
        setNome("Tanque");
        setCor("Verde");

        if (armamento)
        {
            this->monicao = monicao;
        }
        else
        {
            this->monicao = 0;
        }
    }

    // override: define que o método está sendo sobreescrito
    void imp() override
    {
        std::cout << "Nome......." << this->getNome() << std::endl;
        std::cout << "Cor........" << this->getCor() << std::endl;
        std::cout << "Rodas......" << this->rodas << std::endl;
        std::cout << "Vel.Max...." << this->velMax << std::endl;
        std::cout << "Armamento.." << this->armamento << std::endl;
        std::cout << "Monicao...." << this->monicao << std::endl << std::endl;
    }
};

int main()
{
    Carro v1;
    v1.imp();

    Moto v2;
    v2.imp();

    Militar v3{false, 200};
    v3.imp();

    Militar v4{true, 100};
    v4.imp();

    return 0;
}