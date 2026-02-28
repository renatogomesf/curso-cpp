#include <iostream>

// para trabalhar com map, precisa importar essa bibliotca.
#include <map>

int main()
{
    // MAP: assossiação chave valor NATIVAMENTE já é um container de elementos. não sendo preciso definir tamanho... naturalmente ja armazena um grupo de valores como num vetor ou vector. parecido com o PAIR, mas tem mais funcionaçidades. esse sim é mais pareciso com JSON. de forma grosseira, um map é um conjunto de pair.
    // declaração: map <"tipo","tipo"> "nome";
    std::map<int, std::string> prod;

    std::map<int, std::string>::iterator itmap;

    // adicionar valores
    // aqui o que está entre "[]" é a chave. como foi definida como int, a chave é um número... mas se tipada como char, dentro dos colchetes iria um caracter "['a']"... e nessa posição 'a', será adicionado o valor após o igual "="
    /*
        prod[0] = "mouse";
        prod[1] = "teclado";
        prod[2] = "monitor";
        prod[3] = "cx. som";
    */

    // forma mais adequada de inserie valores.
    // "insert()": recebe um "pair" (sem nome) com os valores da chave e valor (dentro do parênteses "()") a ser inserido no map.
    prod.insert(std::pair<int, std::string>(10, "mouse"));
    prod.insert(std::pair<int, std::string>(20, "teclado"));
    prod.insert(std::pair<int, std::string>(30, "monitor"));
    prod.insert(std::pair<int, std::string>(40, "cx. som"));
    prod.insert(std::pair<int, std::string>(50, "microfone"));
    prod.insert(std::pair<int, std::string>(60, "gabinete"));
    prod.insert(std::pair<int, std::string>(70, "camera"));

    // "erase()": deleta um produto de acordo com a chave passada. se a chave do map for string, char... deve ser passada a chave do mesmo tipo.
    prod.erase(70);

    // é possível apagar um intervalor com o erese. basta passar as chaves de onde começa e onde termina os valores que deseja excluir através do "find". ele inclui o inicio do intervalo, mas só deleta até o elemento antes do final do intervalo. neste caso, a chave 40 ainda vai existir.
    prod.erase(prod.find(10),prod.find(40));


    // "clear()": apaga todos os elementos do map.
    // prod.clear();

    // "find()": passa uma chave e ele faz a procura dessa chave dentro do vetor e retorna o valor assossiado.
    itmap = prod.find(40);

    if (itmap == prod.end())
    {
        std::cout << "produto não encontrado" << std::endl;
    }
    else
    {
        std::cout << "produto: " << itmap->second << std::endl;
    }

    for (std::pair<int, std::string> i : prod)
    {
        std::cout << i.first << " - " << i.second << std::endl;
    }

    return 0;
}