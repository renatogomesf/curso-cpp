#include <iostream>

void somar(float *var, float valor);
void initArray(float *vetor);

int main()
{
    // utilizando ponteiros para mudar/manipular uma variável pelo endereço dela.
    float num = 0;
    float vetor[5];

    // em vez de passar a somente a variável, passo o endereço usando "&" na frente da variável.
    somar(&num, 15);

    // quando é vetor, não precisa usar "&" de endereço
    initArray(vetor);

    std::cout << num << "\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << vetor[i] << "\n";
    }

    return 0;
}

// o "var" sem ponteiro, é um parâmetro de escopo diferente que não modifica a variável passada.
// mudando para ponteiro "*var", agora é possível modificar a variável pois é acessado seu endereço de memória.
void somar(float *var, float valor)
{
    // acesso o valor do endereço e somo ele mais o valor passado e coloco no endereço de "num"
    *var += valor;
}

void initArray(float *vetor)
{
    vetor[0] = 0;
    vetor[1] = 0;
    vetor[2] = 0;
    vetor[3] = 0;
    vetor[4] = 0;
}