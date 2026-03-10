#include <iostream>

int main()
{
    // PRINCIPAIS COMANDO IOSTREAM.
    // "iostream": define o fluxo de entrada e saída padrão de dados. possui comando "cin", "cout" e "cer".

    // int idade;
    // std::string nome;

    // std::cin >> nome >> idade;

    // std::cout << nome << " - " << idade << " - " << " CFB Cursos" << std::endl;

    //----------------------------------------------------------------------------------------------------------

    // char nomeCompleto[80];

    // // "get()": diz qual variável receberá o que for digitado e delimita o tanto de caracteres que podem ser digitados. E lê caracterer por caracterer. melhor para captura de tela
    // std::cin.get(nomeCompleto, 80);

    // // "getline()": mesmo que o "get()". porém lê linha por linha. melhor para trabalhar com arquivos
    // // std::cin.getline(nomeCompleto, 80);

    // // "gcount()" com a função "get()": retorna o número de caracteres da última entrada. SEM o caracterer de final de linha "\0".
    // // "gcount()" com a função "getline()": retorna o número de caracteres da última entrada. INCLUINDO o caracterer de final de linha "\0". sempre terá um a mais.
    // std::cout << nomeCompleto << " - Tamanho: " << std::cin.gcount() << std::endl;

    //-----------------------------------------------------------------------------------------------------------

    char n, s;

    n = std::cin.get();

    // "ignore()": extrai/ignora determinado caracter da entrada de dados. recebe um int que determina até quantos caracteres quer fazer essa verificação e o que deseja ignorar (neste caso o espaço).
    std::cin.ignore(80, ' ');

    s = std::cin.get();

    std::cout << n << " - " << s << std::endl;

    system("pause");

    return 0;
}