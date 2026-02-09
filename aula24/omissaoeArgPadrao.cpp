#include <iostream>

// valores/argumentos padrão devem ser passados na prototipagem da função.
void imp(std::string txt = "bruno");

int main()
{
    // caso não seja passado um valor, ele usa o valor padrão. caso seja passado, ele usa o valor passado.
    imp("teste");

    return 0;
}

void imp(std::string txt)
{
    std::cout << txt << "\n";
}