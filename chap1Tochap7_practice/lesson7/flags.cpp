#include <bitset>
#include <cstdint>
#include <iostream>


constexpr std::uint8_t isRead{ 1 << 0 };
constexpr std::uint8_t isWrite{ 1 << 1 };
// constexpr std::uint8_t isExecute{ 1 << 2 };
constexpr std::uint8_t isHidden{ 1 << 7 };

void show(const char* label, std::uint8_t flags)
{
    std::cout << label << std::bitset<8>{ flags } << '\n';
}

int main()
{
    std::uint8_t perms{ 0 };
    show("Start:             ", perms);

    perms |= isRead;                        
    perms |= isWrite;

    show("set read+write: ", perms);

    perms &= static_cast<std::uint8_t>(~isWrite);

    show("clear write:    ", perms);

    perms ^= isHidden; 
    show("toggle hidden:  ", perms);
    perms ^= isHidden;
    show("toggle again:   ", perms);

    std::cout << std::boolalpha; 
    std::cout << "can read?    " << ((perms & isRead) != 0) << '\n';
    std::cout << "can write?   " << ((perms & isWrite) != 0) << '\n';
    return 0;
}
