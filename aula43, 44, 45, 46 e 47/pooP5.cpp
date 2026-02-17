#include <iostream>
#include "Classes3.h"

int main()
{
    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    
    obj1->impBase1();
    obj2->impBase2();
    
    CFB *obj3 = new CFB();

    obj3->impBase1();
    obj3->impBase2();

    return 0;
}