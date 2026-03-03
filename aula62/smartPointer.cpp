#include <iostream>

#include <memory> // para usar smart pointers

class Carro
{

public:
    int vel = 0;
    int getVel()
    {
        return vel;
    };

    void setVel(int v)
    {
        this->vel = v;
    }
};

int main()
{
    // samrt pointer: funciona como um ponteiro normal, mas tem a vantagem de liberar a memória automaticamente quando o objeto não é mais necessário.

    int *pnum = new int();

    *pnum = 10;

    // relembrando.
    // *pnum: mostra o valor armazenado no endereço de memória apontado por pnum.
    // pnum: montra o endereço de memória onde o valor está armazenado.

    std::cout << *pnum << " - " << pnum << std::endl;

    std::cout << "----------------------------------" << std::endl;

    delete pnum; // libera a memória alocada para o ponteiro

    //----------------------------------------------------------------------------

    // MAIS USADO (unique_ptr)
    // "unique_ptr": diz que esse ponteiro é único. somente esse ponteiro pode acessar/modificar o valor armazenado. quando o ponteiro for destruído, a memória alocada para ele será liberada automaticamente.
    // declaração: std::unique_ptr<Tipo> nome_ptr(new Tipo());
    std::unique_ptr<int> pnum2(new int());
    // std::unique_ptr<int> pnum3 = pnum2; <- gera erro.

    *pnum2 = 20;

    std::cout << *pnum2 << " - " << &pnum2 << std::endl;
    std::cout << "----------------------------------" << std::endl;

    //----------------------------------------------------------------------------

    // "shared_ptr": diz que esse ponteiro é compartilhado. outros ponteiros podem acessar/modificar o valor armazenado (modifica para todos os ponteiros que apontarem para o valor). quando o ponteiro for destruído, a memória alocada para ele será liberada automaticamente.
    // declaração: std::unique_ptr<Tipo> nome_ptr(new Tipo());
    std::shared_ptr<int> pnum3(new int());
    std::shared_ptr<int> pnum4 = pnum3;

    *pnum3 = 30;

    std::cout << *pnum3 << " - " << &pnum3 << std::endl;
    std::cout << "----------------------------------" << std::endl;

    //----------------------------------------------------------------------------

    // com string
    std::string *str = new std::string("CFB Cursos");
    std::cout << *str << " - " << str->size() << std::endl;

    std::unique_ptr<std::string> str2(new std::string("CFB Cursos"));

    std::cout << *str2 << " - " << str2->size() << std::endl;
    std::cout << "----------------------------------" << std::endl;

    //----------------------------------------------------------------------------

    // com classes

    // Carro *c1 = new Carro();

    // c1->getVel();
    // std::cout << c1->getVel() << std::endl;
    // delete c1;

    // unique cria instancias unicas e diferentes. se um valor for alterado em um não modificará no outro.
    std::unique_ptr<Carro> c1(new Carro);
    std::unique_ptr<Carro> c2(new Carro);

    c1->setVel(20);
    c2->setVel(40);

    std::cout << c1->getVel() << std::endl;
    std::cout << c2->getVel() << std::endl;
    std::cout << "----------------------------------" << std::endl;

    // com sharade, se um ponteiro mudar o valor, esse volor será alterado para todos os outros que apontarem para o mesmo endereço. para a criação de instâncias diferentes, não funciona.
    std::shared_ptr<Carro> c3(new Carro);
    std::shared_ptr<Carro> c4 = c3;

    c3->setVel(10);
    c4->setVel(5);

    std::cout << c3->getVel() << std::endl;
    std::cout << c4->getVel() << std::endl;
    std::cout << "----------------------------------" << std::endl;

    return 0;
}