#include <bitset>
#include "perms.h"
#include <iostream>
#include <string>



 bool hasPermission( std::uint16_t mode, std::uint16_t mask)
{
    
    return (mode & mask) != 0;
}

std::string toSymbolic( std::uint16_t mode) 
{
    std::string results{};
    //Owner
    results += hasPermission(mode, ownerRead) ? "r" : "-";
    results += hasPermission(mode, ownerWrite) ? "w" : "-";
    results += hasPermission(mode, ownerExec) ? "x" : "-";

    //Groups
    results += hasPermission(mode, groupRead) ? "r" : "-";
    results += hasPermission(mode, groupWrite) ? "w" : "-";
    results += hasPermission(mode, groupExec) ? "x" : "-";

    //Others
    results += hasPermission(mode, otherRead) ? "r" : "-";
    results += hasPermission(mode, otherWrite) ? "w" : "-";
    results += hasPermission(mode, otherExec) ? "x" : "-";


    return results;
}

std::uint16_t addPermission( std::uint16_t mode,  std::uint16_t mask)
{
   return static_cast<std::uint16_t>(mode | mask);
}

std::uint16_t removePermission( std::uint16_t mode,  std::uint16_t mask)
{
    return static_cast<std::uint16_t>(  mode   & ~mask   );
}

void printMode( std::uint16_t mode)
{
    std::string bits{std::bitset<9>{ mode }.to_string()};
    std::cout << std::oct << mode <<" " << std::dec << "  ";
    std::cout << bits.substr(0, 3) << ' ' 
              << bits.substr(3, 3) << ' '
              << bits.substr(6, 3) << "  ";
    std::cout << toSymbolic(mode) << '\n';
}