#include <iostream>

// "extern": define a variável como externa. ou seja, esse "num" que está sendo acessado não é daqui... ele é externo.
extern int num;

void impNum()
{
    std::cout << num << std::endl;
}