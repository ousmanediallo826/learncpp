#include <iostream>
#include <string_view>
constexpr std::string_view digitToRwx(int digit)
{
    switch (digit)
    {
    case 0: return "--- ";
    case 1: return "--x ";
    case 2: return "-w- ";
    case 3: return "-wx ";
    case 4: return "r-- ";
    case 5: return "r-x ";
    case 6: return "rw- ";
    case 7: return "rwx ";
    
    default: return "???\n";
       
     
    }
}
int main()
{
    std::cout << digitToRwx(7) << digitToRwx(5) << digitToRwx(4) << '\n';
    return 0;
}