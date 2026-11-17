#include "perms.h"
#include <iostream>



int main()
{
    std::cout << toSymbolic(0754) << '\n';
    std::cout << toSymbolic(0644) << '\n';
    std::cout << toSymbolic(0000) << '\n';
    std::cout << toSymbolic(0777) << '\n';

    printMode(0754);
    printMode(addPermission(0644, ownerExec));
    printMode(removePermission(0644, otherRead));

    printMode(removePermission(addPermission(0644, ownerExec), otherRead));
    return 0;
}

