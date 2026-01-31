// "#include": usado para fazer a inclusão de bibliotecas. logo após, entre "<>" vem o nome da biblioteca --> "<nome biblioteca>"
// "<iostream>": biblioteca para os comandos básicos de escrita, de entrada e saida de dados do c++. "io" significa entra e saida "in"/"out". CASO EXISTAM COMANDOS QUE PRECISAM DE UMA BIBLIOTECA ESPECÍFICA E A MESMA NÃO ESTIVER "INCLUSA" O COMPILADOR NÃO VAI CONSEGUIR RODAR O PROGRAMA.
#include <iostream>

// namespace: indica onde estão as bibliotecas que vou usar. ex: posso criar uma classe com várias funções e definições e indicar no namespace o uso dessa classe. "espaço de trabalho onde serão buscadas as informações". BUSCA A "iostream" NO NAMESPACE DEFINIDO. NESTE CASO, "std". posso criar bibliotecas e organizar por namespace. nada mais que uma organização de pastas.
// std: é um namespace padrão. significa standart/padrão
using namespace std;

// função: int main() {} --> "tipo de retorno" "nome da função" "conteúdo que será executado"
// função main() (principal) conterá o conteúdo principal. o que o programa irá fazer estará descrito aqui.
int main()
{
    // "c" "out" --> cout "saida": escreve/impirme na tela.
    // "<<": indica o que sairá na tela. o que será escrito.
    // "<< endl" e "\n": faz uma quebra de linha
    cout << "hello world!\nCurso C++\n";

    // cria uma pausa: mostra a mensagem "pressione qualquer tecla para continuar..." e só continua depois de teclar algo.
    system("pause");

    return 0;
}