#include <iostream>


int main()
{
    int a{ 5 };
    std::cout << a << '\n';
    int b { ++a };
    std::cout << "a=" << a << " b=" << b << '\n';

    int c{ 5 };
    std::cout << c << '\n';
    int d{ c++ };
    std::cout << "c=" << c << " d=" << d << '\n';

    return 0;
}