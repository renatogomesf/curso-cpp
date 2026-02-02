#include <iostream>

using namespace std;

int main()
{
    // VARIÁVEIS
    // tipo, nome e valor (quando for o necessário inicializar)

    int vidas = 0;          // 10, 20, -15, -3
    char letra = 'b';       // 'a', '1', '#', ' ' --> um caractere e usar apostrofo: ''
    double decimal = 5.222; // 2.4999999999
    float decimal2 = 5.2;   // 2.5 precisão menor que o double.
    bool vivo = true;       // true ou false (no console mostra 0 ou 1... 0 = false e 1 = true)
    string nome = "Bruno";  // "bruno", "teste", "20 dias" recebe um texto maior. diferente do "char"

    // "<<": (SAÍDA) DE DADOS. escreve/mostra na tela/console o que vem logo após.
    cout << "digite o numero de vidas: ";

    // ">>": (ENTRADA) DE DADOS. capta entrada de dados via teclado e atribui à variável logo após.
    // neste caso, pega o que for escrito no teclado e atribui à variável "vidas"
    cin >> vidas;

    // outro exemplo:
    cout << "digite uma letra: ";
    cin >> letra;

    nome = "TEXXTE";

    cout << "vidas: " << vidas << "\n";
    cout << "letra: " << letra << "\n";
    cout << "decimal: " << decimal << "\n";
    cout << "decimal2: " << decimal2 << "\n";
    cout << "vivo: " << vivo << "\n";
    cout << "nome: " << nome << "\n";

    system("pause");

    return 0;
}