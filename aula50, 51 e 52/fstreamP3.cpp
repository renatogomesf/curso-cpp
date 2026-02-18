#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{

    // ofstream "Out File Stream -> OFStram": define o arquivo como tipo siada. partindo do nosso sistema/programa e vai pro arquivo
    // ifstream "In File Stream -> IFStram": define o arquivo como tipo entrada. partindo do arquivo e vindo pro sistema/programa
    // fstream "File Stream -> FSstream": pode ser definido como entrada ou saida.

    std::fstream arquivo;
    char opc = 's';
    std::string nome, linha;

    // "nome do arquivo","std::ios::out" (out = saída): é aqui que defino se o arquivo é de entrada ou sainda. neste caso, está definido como saida... ou seja, cria/abre um arquivo e adiciona informações.
    // "nome do arquivo","ios::app" (app = append/adicionar): sem ele o aquivo gerado tem seu conteúdo sobrescrito sempre que for adicionado algo. usando "ios::app" o conteúdo não é sobrescrito... o cursor vai pro final do conteúdo ja existen no arquivo e adiciona o novo.
    // para passar um array de opções, tipo do JS, basta separa as options por pipe "|".
    arquivo.open("cfbcursos.txt", std::ios::out | std::ios::app);

    while (opc == 's' || opc == 'S')
    {
        std::cout << "digite um nome: ";
        std::cin >> nome;

        arquivo << nome << "\n";

        std::cout << "\ndigitar um novo nome?[s/n]: ";
        std::cin >> opc;

        system("cls");
    }

    arquivo.close();

    // "nome do arquivo","std::ios::in" (in = entrada): é aqui que defino se o arquivo é de entrada ou sainda. neste caso, está definido como entrada... ou seja, abre um arquivo e lê as informações.
    arquivo.open("cfbcursos.txt", std::ios::in);

    std::cout << "nomes digitados: \n";

    if (arquivo.is_open())
    {
        while (getline(arquivo, linha))
        {
            std::cout << linha << "\n";
        }

        arquivo.close();
    }
    else
    {
        std::cout << "não foi possível abrir o arquivo \n";
    }

    return 0;
}