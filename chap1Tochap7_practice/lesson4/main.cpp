#include <iostream>
#include <limits>


int main() 
{
    std::cout << "bool:        " << sizeof(bool) << " bytes\n";
    std::cout << "char:        " << sizeof(char) << " bytes\n";
    std::cout << "int:        " << sizeof(int) << " bytes\n";
    std::cout << "short:        " << sizeof(short) << " bytes\n";
    std::cout << "float:        " << sizeof(float) << " bytes\n";
    std::cout << "long:        " << sizeof(long) << " bytes\n";
    std::cout << "log long:        " << sizeof(long long) << " bytes\n";
    std::cout << "double:        " << sizeof(double) << " bytes\n";



    std::cout << "\n int range:"
              << std::numeric_limits<int>::min() << " to "
              << std::numeric_limits<int>::max() << '\n';
    std::cout << "\n unsigned int range:"
              << std::numeric_limits<unsigned int>::min() << " to "
              << std::numeric_limits<unsigned int>::max() << '\n';
    return 0;
}