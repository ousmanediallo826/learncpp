#include <bitset>
#include <iostream>
#include <cstdint>


void show(std::int8_t value)
{
    std::cout << static_cast<int>(value) << "\t=" 
                << std::bitset<8>{ static_cast<std::uint8_t>(value) } << '\n';
}

int main()
{
    show(5);
    show(-5);
    show(1);
    show(-1);
    show(127);
    show(-128);
    show(-127);
    show(0)
    return 0;
}


