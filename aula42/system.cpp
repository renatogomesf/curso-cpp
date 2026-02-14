#include <iostream>

// para usar o "system", precisa importar essa biblioteca.
#include <stdlib.h>

int main()
{

    // system(): faz a execução de comandos do sistema operacional.

    // "dir": lista diretórios. neste caso, mostra o local desse arquivo... onde foi salvo
    system("dir");

    // "cls": limpa o terminal
    system("cls");

    // "color [valores]": muda as cores do prompt de comando

    /*
    COLOR [attr]

    attr        Especifica os atributos de cor da saída do console

    Atributos de cor são especificados por DOIS dígitos hexadecimais. O primeiro
    corresponde à cor de tela de fundo; o segundo à cor de primeiro plano. Cada
    dígito pode ter apenas um dos seguintes valores:

    0 = Preto        8 = Cinza
    1 = Azul         9 = Azul claro
    2 = Verde        A = Verde claro
    3 = Verde-água   B = Verde-água claro
    4 = Vermelho     C = Vermelho claro
    5 = Roxo         D = Lilás
    6 = Amarelo      E = Amarelo claro
    7 = Branco       F = Branco brilhante
    */

    system("color 1f");

    // "pause": cria uma pausa no cmd e fica esperando clicar alguma tecla para continuar.
    system("pause");

    return 0;
}