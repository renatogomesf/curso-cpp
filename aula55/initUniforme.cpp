#include <iostream>
#include <vector>
#include <map>

struct Pessoa
{
    std::string nome;
    int idade;
};

// da para inicializar classes também, tornando não nescessário o uso de construtor
class Veiculo
{
public:
    int tipo;
    std::string nome;
};

int main()
{
    // Inicialização uniforme: tecnica que facilita/padroniza as inicializações.

    // EXEMPLO: AMBOS ATRIBUEM "10" À VARIÁVEL.
    // antes
    // int num = 10;

    // novo: troca a atribuição através do "=" para "{}".
    int num{10};

    int vetor[]{1, 2, 3, 4, 5};

    std::string nome{"bruno"};

    std::vector<int> valores{1, 2, 3, 4, 5};

    std::map<std::string, std::string> capitais{{"MG", "Belo Horizonte"}};

    // aqui a sequência de atribuição deve seguir a sequencia de declaração que foi feita no struct.
    Pessoa p1{"Bruno", 38};
    Pessoa p2{"Nome", 100};

    Veiculo v1{1, "carango"};

    return 0;
}