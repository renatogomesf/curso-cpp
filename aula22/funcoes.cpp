#include <iostream>

using namespace std;

// quando declaramos funções após a função main, precisamos prototipar essas funções. caso contrário, dará erro.
// prototipar uma função significa "apresentar" a função ao programa. deixar o programa/main tomar conhecimento da existência da função criada.
void texto();                  // função prototipada/apresentada ao programa. agora ele sabe que existe essa função.
void soma(int num1, int num2); // quando a função tiver parâmetros, basta informa-los na prototipagem.
int soma2(int num1, int num2);
void tr(string tra[4]);

// o código base já é uma função. função main que retorna um inteiro, 0. quem faz a chamada da função main é o sistema.
int main()
{
    int res;
    string transp[4] = {"carro", "moto", "barco", "aviao"};

    texto();

    soma(2, -6);

    res = soma2(7, 8);

    std::cout << "soma 2: " << res << "\n";

    tr(transp);

    return 0;
}

// funções.
void texto()
{
    std::cout << "Canal Fessor Bruno\n";
}

void soma(int num1, int num2)
{
    std::cout << "Resultado: " << num1 + num2 << "\n";
}

int soma2(int num1, int num2)
{
    return num1 + num2;
}

void tr(string tra[4])
{
    for (int i = 0; i < 4; i++)
    {
        std::cout << tra[i] << "\n";
    }
}