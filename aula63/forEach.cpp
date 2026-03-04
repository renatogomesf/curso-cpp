#include <iostream>
#include <vector>

// para trablhar com for each, precisa desta biblioteca
#include <algorithm>

int main()
{

    std::vector<int> n{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for range é mais pratico.
    // parecido com o map. passa item por item para a função lambda definida.
    // declaração: std::for_each("início da estrutura", "fim da estrutura", []("parametro que recebe cada elemento"){});
    std::for_each(n.begin(), n.end(), [](int elemento){ 

        // as operação e mudanças só ocorrem dentro da função lambda. o vector não é alterado.
        elemento += 10;

        std::cout << elemento << "\n";
    });


    for (auto i : n)
    {
        std::cout << i << "\n";
    }

    return 0;
}