#include <iostream>

using namespace std;

int main()
{
    // While

    int num = 1;

    while (num <= 10)
    {
        cout << "valor: " << num << "\n";

        num++;
    }

    int num2 = 1;

    while (num2 <= 10)
    {
        cout << "valor: " << num2 << "\n";

        if (num2 == 5)
        {
            // "break": interrompe o loop.
            break;
        }

        num2++;
    }

    return 0;
}