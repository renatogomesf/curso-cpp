#include <iostream>

using namespace std;

// para definir uma constante, usa-se o "#define".
// declaração: "#define", nome da constante em maiúsculo "PI2" e atribuir o valor sem uso do sinal igual "=".
#define PI2 3.141516
#define TEXTO "teste"

// posso colocar comandos nas constantes
#define CANAL std::cout << "canal fessor bruno \n";

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
    cout << PI2 << "\n";
    cout << TEXTO << "\n";

    // e no caso de constantes com comandos, basta chamar a constante que ela executa o comando.
    CANAL

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