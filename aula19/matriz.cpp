#include <iostream>

int main()
{
    // Matriz: vetor de vetores... array de arrays.
    // int matriz[3][4]; como se fosse uma tabela de 3 linhas e 4 colunas.

    // criação sem inicializar.
    int matriz[3][4];

    // atribuição mais complexa.
    matriz[0][0] = 0;
    matriz[0][1] = 0;
    matriz[0][2] = 0;
    matriz[0][3] = 0;

    matriz[1][0] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;

    matriz[2][0] = 2;
    matriz[2][1] = 2;
    matriz[2][2] = 2;
    matriz[2][3] = 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matriz[i][j] << " ";
        }

        std::cout << "\n";
    }

    // atribuição direta.
    int matriz2[3][4] = {{7, 7, 7, 7}, {8, 8, 8, 8}, {9, 9, 9, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matriz2[i][j] << " ";
        }

        std::cout << "\n";
    }

    return 0;
}