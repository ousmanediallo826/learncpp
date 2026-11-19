#include <iostream>
#include "idgen.h"
int main()
{

    std::cout << getNextID();
    std::cout << getNextID();
    resetIDs();
    std::cout <<'\n' << getNextID() << '\n';

    return 0;
}