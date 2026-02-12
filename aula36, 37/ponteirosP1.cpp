#include <iostream>

int main()
{
    std::string veiculo = "carro";

    // ponteiro: variável que armazena o endereço (NÃO É O VALOR) de memória de uma outra variável para qual ele está apontando.
    // o ponteiro precisa ser do mesmo tipo da variável a qual ele está apontando.
    // para definir como ponteiro, usa-se o asterisco "*".
    // declaração: tipo, asterisco, nome;
    std::string *pv;

    // para acessar o endereço de memória de uma variável, basta colocar o "&" na frente dela.
    // para atribuir o endereço de uma variável ao ponterio, usa-se o "&" comercial.
    // declaraão: ponteiro = &(relacionado a endereço), nome da variável
    // ponteiro "pv" recebe o endereço de memória da variável veículo.
    // acessando o endereço, eu posso manipular aquela variável onde quer que ela esteja... seja de dentro de uma função, classe, ou qualquer outra coisa.
    pv = &veiculo;

    // mostra o endereço (duas formas)
    std::cout << pv << " / " << &veiculo << "\n";

    // usando o asterisco junto, mostra o valor da variável que está apontando. (duas formas)
    std::cout << *pv << " / " << veiculo << "\n";

    // manipular e modificar a variável.
    // declaração: asterisco, nome do ponteiro = valor que deseja atribuir
    // "no endereço apontado pelo ponteiro '*pv' adicione o valor moto"
    *pv = "moto";
    std::cout << *pv << " / " << veiculo << "\n";

    return 0;
}