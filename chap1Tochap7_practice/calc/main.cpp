#include <iostream>
#include "calcutil.h"



int main() {

    std::cout << "Enter two integers: ";
    int a{};
    int b{};

    std::cin >> a >> b;

    std::cout << "The addition of " << a << " + " << b << " = " << add(a, b) << '\n';
    std::cout << "The substraction of " << a << " - " << b << " = " << sub(a, b) << '\n';
    std::cout << "The product of " << a << " * " << b << " = " << multiply(a, b) << '\n';

if (b == 0)
{
    std::cout << "Error: cannot divide by zero.\n";
    return 1;
}

    std::cout << "The division " << a << " / " << b << " = " << divide(a, b) << '\n';
    std::cout << "The remainder of " << a << " % " << b << " = " << remainder(a, b) << '\n';


    return 0;
}