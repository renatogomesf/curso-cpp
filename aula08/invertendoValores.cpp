#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    cout << num1 << "\n";

    // primeira forma de inverter valor (multiplicando por -1)
    num1 = num1 * -1;
    cout << num1 << "\n";

    // segunda forma de inverter (simplesmente colocando um "negativo" na frente... mas desta forma o valor inicial da variável ainda é positivo)
    cout << -num2 << "\n";
    cout << num2 << "\n"; // mostrando que o valor inicial ainda é positivo e a mudança foi momentanea.

    // maneira mais simplificada de inverter. (a inversão neste caso é relamente definitiva)
    num3 = -num3;
    cout << num3 << "\n";

    return 0;
}