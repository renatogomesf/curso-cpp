#include <iostream>

using namespace std;

int main()
{

    // MULTIPLAS VARIÁVEIS ----------
    // em vez de declarar varias variáveis de mesmo tipo, pega essas de mesmo tipo e coloca em uma só linha.
    /*
    ex de multiplas variáveis do mesmo tipo que podem ser colocadas numa mesma linha tipando somente uma vez:
    int vidas;
    int tiros;
    int life;

    vira isso -->  int vidas, tiros, life;
    */

    // ex ja inicializando as variáveis.
    int vidas = 3, tiros = 500, life = 100;

    // CONSTANTES ----------

    // para escrever uma variável que não vai mudar o valor, ou seja, será constante, basta escrever "const" na frente.
    // por convenção, constantes são escritaas em MAIÚSCULO.
    const double PI = 3.14159;
    double raio = 10;
    double circunferencia = 2 * PI * raio;

    cout << circunferencia << "\n";

    // outros exemplos
    const int velocidadeDaLuz = 299792458;
    const int largura = 1920;
    const int latura = 1080;

    return 0;
}