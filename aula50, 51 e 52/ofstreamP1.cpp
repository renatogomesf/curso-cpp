#include <iostream>

// Operações com arquivos
// para trabalhar com arquivos, usa-se a biblioteca "fstream"
#include <fstream>

int main()
{

    // ofstream "Out File Stream -> OFStram": define o arquivo como tipo siada. partindo do nosso sistema/programa e vai pro arquivo
    // ifstream "In File Stream -> IFStram": define o arquivo como tipo entrada. partindo do arquivo e vindo pro sistema/programa
    // fstream "File Stream -> FSstream": pode ser definido como entrada ou saida.

    // variável definida/tipada como saida
    std::ofstream arquivo;

    // "open()": cria/abre o arquivo passando o nome e extenção. gera o arquivo caso não exista... e abre ele, caso já exista, para poder adicionar dados.
    // "ios::app" (app = append/adicionar): sem ele o aquivo gerado tem seu conteúdo sobrescrito sempre que for adicionado algo. usando "ios::app" o conteúdo não é sobrescrito... o cursor vai pro final do conteúdo ja existen no arquivo e adiciona o novo.
    arquivo.open("cfbcursos.txt", std::ios::app);

    // para colocar dados no arquivo basta usar a sintax do "cout << 'texto'"
    arquivo << "CFB Cursos\n";
    arquivo << "Cursos de C++\n";
    arquivo << "cfbcursos.com.br\n";
    arquivo << "youtube.com/cfbcursos\n";

    // "close()": fecha o arquivo. sempre importante fechar o arquivo depois de fazer as operações com ele para liberar memória.
    arquivo.close();

    return 0;
}