#ifndef PERMS_H
#define PERMS_H

#include <cstdint>
#include <string>
// owner
constexpr std::uint16_t ownerRead{ 0400 };
constexpr std::uint16_t ownerWrite{ 0200 };
constexpr std::uint16_t ownerExec{ 0100 };

// groups 
constexpr std::uint16_t groupRead{ 0040 };
constexpr std::uint16_t groupWrite{ 0020 };
constexpr std::uint16_t groupExec{ 0010 };

//others
constexpr std::uint16_t otherRead{ 0004 };
constexpr std::uint16_t otherWrite{ 0002 };
constexpr std::uint16_t otherExec{ 0001 };






bool hasPermission(std::uint16_t mode, std::uint16_t mask);
std::string toSymbolic(std::uint16_t mode);
std::uint16_t addPermission(std::uint16_t mode, std::uint16_t mask);
std::uint16_t removePermission(std::uint16_t mode, std::uint16_t mask);
void printMode(std::uint16_t mode);

#endif