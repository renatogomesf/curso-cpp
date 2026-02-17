#include <iostream>

// para usar um arquivo de cabeçalho ".h" no arquivo ".cpp", usa-se o "#include" com o nome do arquivo e sua extenção dentro de áspas "Avião.h"
#include "Aviao.h"

int main()
{

    // instanciar um novo objeto.
    // declaração: tipar com a classe "Aviao", nome da variável como ponteiro por não ter constructor "*av1" = "new" nome da classe "Aviao()"
    Aviao *av1 = new Aviao(1);
    Aviao *av2 = new Aviao(2);
    Aviao *av3 = new Aviao(3);

    // em vez de acessar diretamente a propriedade da classe, posso chamar a função que acessa ela.
    av1->imprimir();
    av2->imprimir();
    av3->imprimir();

    return 0;
}