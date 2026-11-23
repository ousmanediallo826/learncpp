#include <cassert>
#include <iostream>

int divide(int a, int b)
{
    assert(b != 0 && "divide: b must not be zero");
    return a / b;
}

constexpr std::uint16_t ownerRead{ 0400 };
constexpr std::uint16_t ownerWrite{ 0200 };
constexpr std::uint16_t ownerExec{ 0001 }; 
static_assert(sizeof(int) == 4, "this code assumes a 4-byte int");
static_assert((ownerRead & ownerExec) == 0, "masks must not overlap");
// static_assert((ownerRead | ownerWrite | ownerExec) == 0700, "owner masks must cover exactly 0700");
int main()
{
    std::cout << divide(17, 5) << '\n';
    std::cout << divide(0, 5) << '\n';
    std::cout << divide(17, 0) << '\n';
    return 0;
}


