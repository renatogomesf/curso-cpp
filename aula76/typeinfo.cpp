#include <iostream>

#include <typeinfo>

class CFB
{
};

int main()
{
    // retorna informações do tipo do elemento que estou pesquisando

    auto var1{10};
    auto var2{10.5};
    auto var3{'a'};
    auto var4{"violão"};

    // com classe
    CFB cfb;

    // "typeid().name()": recebe um elemento para avaliar e retorna o id do seu tipo (retorna o nome do tipo do elemento passado). ex: se for passado um int, retorna "i", se for passado um double, retorna "d"...
    std::cout << "tipo de var1: " << typeid(var1).name() << std::endl;
    std::cout << "tipo de var2: " << typeid(var2).name() << std::endl;
    std::cout << "tipo de var3: " << typeid(var3).name() << std::endl;
    std::cout << "tipo de var4: " << typeid(var4).name() << std::endl;

    // aqui ele retorna o nome da classe e a quantidades de caracteres do nome.
    std::cout << "tipo de cfb: " << typeid(cfb).name() << std::endl;

    // ---------------------------------------------------------------------------------------------------------

    // "before()": verifica a precedencias dos tipos. quem vem antes de quem.
    if (typeid(int).before(typeid(char)))
    {
        std::cout << "int vem antes de char" << std::endl;
    }
    else
    {
        std::cout << "char vem antes de int" << std::endl;
    }

    return 0;
}