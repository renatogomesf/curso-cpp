#include <iostream>

// Operações com arquivos
// para trabalhar com arquivos, usa-se a biblioteca "fstream"
#include <fstream>

int main()
{

    // ofstream "Out File Stream -> OFStram": define o arquivo como tipo siada. partindo do nosso sistema/programa e vai pro arquivo
    // ifstream "In File Stream -> IFStram": define o arquivo como tipo entrada. partindo do arquivo e vindo pro sistema/programa
    // fstream "File Stream -> FSstream": pode ser definido como entrada ou saida.

    // variável definida/tipada como entrada.
    std::ifstream arquivoE;

    // para ler o conteúdo do arquivo precisa do "while" para poder ler linha por linha e o método "getline" para obter a linha do arquivo e mostrar na tela.
    // armazena a linha lida para mostrar na tela com "cout".
    std::string linha;

    // "open()": abre o arquivo passando o nome e extenção. abre ele para poder ler o conteúdo.
    arquivoE.open("cfbcursos.txt");

    // "is_open()": verifica se o arquivo está aberto mesmo. caso esteja, retorna TRUE. caso não ou não exista, retorna FALSE
    if (arquivoE.is_open())
    {
        // "getline()": lê linha por linha dor arquivo. pede dois parâmetros... um é o arquivo que vai ser lido e a outra é onde ele vai colocar o que foi lido na linha.
        while (getline(arquivoE, linha))
        {
            std::cout << linha << "\n";
        }

        arquivoE.close();
    }
    else
    {
        std::cout << "não foi possível abrir o arquivo.\n";
    }

    return 0;
}