#include <cstdint>
#include <iostream>

int main()
{
    std::int8_t age{ 65 };
    std::cout << age << '\n';
    std::cout << static_cast<int>(age) << '\n';

    char c{ 'A' };
    std::cout << c << ' ' << static_cast<int>(c) << '\n';
    std::cout << 'A' + 1 << '\n';

    bool b{ true };
    std::cout << b << ' ' << std::boolalpha << b << '\n';
    return 0;
}