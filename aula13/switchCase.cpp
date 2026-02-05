#include <iostream>

using namespace std;

int main()
{

    // Switch

    int num = 3;

    switch (num)
    {
    case 1:
        cout << "Verde";
        break;
    case 2:
        cout << "Azul";
        break;
    case 3:
        cout << "Vermelho";
        break;
    default:
        cout << "Valor inválido";
        break;
    }

    return 0;
}