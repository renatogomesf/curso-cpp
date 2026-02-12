#include <iostream>

// struct: parecido com o "interface" do typescript. é usado como tipagem de uma variável. e essa variável seguirá essa estrutura
// cria-se um tipo para fazer tipagem
struct Carro
{
    // declaração das variáveis da struc.
    std::string nome;
    std::string cor;
    int potencia;
    int velMax;

    // criação de método

    // atribuir valores nas variáveis da struc.
    void insere(std::string stNome, std::string stCor, int stPotencia, int stVelMax)
    {
        nome = stNome;
        cor = stCor;
        potencia = stPotencia;
        velMax = stVelMax;
    }

    // mostra os valores atribuidos.
    void mostra()
    {
        std::cout << "nome: " << nome << "\n";
        std::cout << "cor: " << cor << "\n";
        std::cout << "potencia: " << potencia << "\n";
        std::cout << "velMax: " << velMax << "\n\n";
    }
};

int main()
{
    // agora a variável "car1", tipada com "Carro", segue a estrutura do "struct Carro".
    Carro car1, car2, car3, car4, car5;

    /*
        // para atribuir valores, basta chamar a variável seguido de ponto "." e chamando o item que quer atribuir um valor.
        car1.nome = "tornado";
        car1.cor = "vermelho";
        car1.potencia = 450;
        car1.velMax = 350;

        std::cout << "nome: " << car1.nome << "\n";
        std::cout << "cor: " << car1.cor << "\n";
        std::cout << "potencia: " << car1.potencia << "\n";
        std::cout << "velMax: " << car1.velMax << "\n";

        // outra forma de atribuir e mostrar (MELHOR)
        car1.insere("celta", "branco", 76, 100);
        car1.mostra();

        car2.insere("sw4", "branco", 150, 150);
        car2.mostra();

        car3.insere("xc40", "branco", 150, 150);
        car3.mostra();
    */

    // array + struct: para trabalhar com arrays do tipo struc, precisa usar ponteiros.
    Carro *carros = new Carro[5];

    // pegando os carros criados e atribuindo a cada posição/indice do array.
    // cada posição do array possui um carro DIFERENTE. cada um com suas variáveis e métodos independentes.
    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    // acessando cada posição do array com cada carro criado e chamando o método insere de cada um.
    carros[0].insere("celta", "branco", 76, 100);
    carros[1].insere("sw4", "branco", 150, 150);
    carros[2].insere("xc40", "branco", 150, 150);
    carros[3].insere("landcruise", "branco", 200, 120);
    carros[4].insere("argo", "branco", 76, 100);

    // mostrando os valores de cada carro
    for (int i = 0; i < 5; i++)
    {
        carros[i].mostra();
    }

    return 0;
}