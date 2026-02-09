#include <iostream>

// biblioteca para trabalhar com strings
#include <string.h>

// biblioteca para usar o "system"
#include <stdlib.h>

// main(): tem dois argumentos padrões.
// "int argc": guarda a quantidade de parâmetros informados.
// "char *argv[]": ponteiro (*) para uma matriz de ponteiros de caractere. basicamente, cada elemento da matriz aponta para um argumento
//  "int argc" + "char *argv[]": um tem uma matriz com argumentos e o outro diz a quantidade de argumentos existentes.
// por padrão, o primeiro parâmetro/argumento, mesmo que não seja informado um parâmetro/argumento, é o nome do programa (que é o nome do proprio arquivo ".exe").

int main(int argc, char *argv[])
{

    // quando executo o arquivo ".exe" basta dar um espaço e digitar o parâmetro que ele será colocado na função main. ex:  .\argumentos.exe canal (caminho do executável + parâmetro).
    // o que for informado como argumento será arganizado a partir do indice "1". cada novo espaço + argumento será alocado no próximo indice do array.
    // ex: youtube canal bruno... youtube = indice 1, canal = indice 2, bruno = indice 3.

    // std::cout << argv[1] << "\n\n"; // mostra "youtube"
    // std::cout << argv[2] << "\n\n"; // mostra "canal"
    // std::cout << argv[3] << "\n\n"; // mostra "bruno"

    // std::cout << argc << "\n\n"; // mostra a quantidade de parâmetros. lembrando que o indice 0 é sempre o nome do programa/arquivo

    if (argc > 1)
    {

        // "strcmp()": se as strings passadas forem iguais, retorna 0 (que é FALSE). caso sejam diferentes, retorna um valor diferente de 0. retorna 1 quando a primeira string for maior que a segunda e -1 quando a primeira string dor menor que a segunda.
        if (!strcmp(argv[1], "sol"))
        {
            std::cout << "vou ao clube. \n";
        }
        else if (!strcmp(argv[1], "nublado"))
        {
            std::cout << "vou ao cinema. \n";
        }
        else
        {
            std::cout << "vou ficar em casa;";
        }
    }

    system("pause");

    return 0;
}