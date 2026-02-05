#include <iostream>

int main()
{
    // FOR
    /*
    for(init; cond; incre/decre){
    }

    for(i = 0; i <= 10; i++){
    }
    */

    int x = 10;
    int y = 10;

    // loop FOR de forma simples.
    for (x = 0; x <= 10; x++)
    {
        std::cout << x;
    }

    // loop inicializando duas variáveis.
    // é possível inicializar, testar e incrementar mais de uma variável por vez.
    for (x = 0, y = 0; x <= 10; x++, y += 2)
    {
        std::cout << x << " - " << y << "\n";
    }

    return 0;
}