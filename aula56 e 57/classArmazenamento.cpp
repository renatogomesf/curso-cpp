#include <iostream>
#include <vector>

int soma1(int n1, int n2)
{
    return n1 + n2;
}

// é possível usar auto em funções também. após os parênteses, pode-se definir o retorno. mas é opicional.
auto soma2(int n1, int n2) -> int
{
    return n1 + n2;
}

std::string canal()
{
    return "cfb cursos";
}

void somador()
{
    // sem o static, a cada chamada da função, é criada uma nova variável "i" numa posição diferente da memória.
    // "static": torna a variável estatica e, em vez de criar uma variável nova em posições diferentes na memória a cada chamada da função, cria somente uma vez e em uma única posição e a função sempre acessa a mesma e faz suas operações.
    // sem o static imprime 1, 1, 1, 1... com o static, e por incrementar sempre a mesma variável, imprime 1, 2, 3, 4, 5, 6.
    int i1 = 0;
    i1++;
    std::cout << i1 << std::endl;

    static int i2 = 0;
    i2++;
    std::cout << "static: " << i2 << std::endl;
}

int main()
{

    // CLASSES DE ARMAZENAMENTO
    // auto, register e static

    // "auto": tipagem que permite a variável assumir qualquer tipo. mas o tipo será determinado na inicialização da variável. se eu inicializar com number e depois tentar atribuir uma string, da erro.
    // ex: tentar fazer essa atribuição -> num = "bruno"; gera erro.
    // a variável não pode ser inicializada depois. deve ser inicializada na criação dela.
    auto num = 10;

    auto res1 = soma1(10, 5);

    auto res2 = soma1(10, 10);

    auto res3 = canal();

    std::cout << res1 << "\n";

    std::cout << res2 << "\n";

    // ex: com vector.
    std::vector<int> v{10, 20, 30, 40, 50, 60, 70};

    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << "--" << *it << std::endl;
    }

    // com o auto, não precisar tipar o iterator "it" com o "std::vector<int>::iterator". ele assume esse tipo quando atribuido algo ao "it"
    for (auto it = v.begin(); it != v.end(); it++)
    {
        std::cout << "--" << *it << "--" << std::endl;
    }

    // REGISTER

    // "register": você pede ao sistema para armazenar a variável num registrador e não na memória ram. mas a decisão final de onde será armazenado é do sistema. a variável tem que respeitar o tamanho de um registrador.
    // é usado quando as variável precisam acesso rápido ou uso repetido. e tem esse acesso rápido porque o registrador está no processador.
    // ex: uma variável de contagem.
    // register int count; // NÃO EXISTE MAIS O USO DE "REGISTER". O COMPILADOR JA OTIMIZA ISSO.

    // STATIC
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();

    return 0;
}