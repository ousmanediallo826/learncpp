#include <iostream>
#include <cstdint>
#include <bitset>


int main()
{
    std::uint8_t a{ 0b1100'1010};
    std::uint8_t b{ 0b1010'0110};


    std::cout << "a       = " << std::bitset<8>{ a } << '\n';
    std::cout << "b       = " << std::bitset<8>{ b } << '\n';
    std::cout << "a & b   = " << std::bitset<8>{ static_cast<std::uint8_t>(a & b) } << "  (AND: 1 only where both are 1)\n";
    std::cout << "a | b   = " << std::bitset<8>{ static_cast<std::uint8_t>(a | b) } << "  (OR:  1 where either is 1)\n";
    std::cout << "a ^ b   = " << std::bitset<8>{ static_cast<std::uint8_t>(a ^ b) } << "  (XOR: 1 where they differ)\n";
    std::cout << "~a      = " << std::bitset<8>{ static_cast<std::uint8_t>(~a) }    << "  (NOT: flip every bit)\n";
    std::cout << "a << 2  = " << std::bitset<8>{ static_cast<std::uint8_t>(a << 2) } << "  (shift left, zeros come in)\n";
    std::cout << "a >> 3  = " << std::bitset<8>{ static_cast<std::uint8_t>(a >> 3) } << "  (shift right, zeros come in)\n";
    return 0;

}