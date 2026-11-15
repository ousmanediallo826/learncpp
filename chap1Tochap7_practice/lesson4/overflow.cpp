#include <iostream>
#include <limits>


int main()
{
    unsigned int u { std::numeric_limits<unsigned int>::max() };
    std::cout << "unsigned max:       " << u << '\n';
    u = u + 1;
    std::cout << "unsigned max + 1:       " << u << '\n';



    int s{ std::numeric_limits<int>::min() };
    std::cout << "int min:       " << s << '\n';
    s = s - 1;
    std::cout << "int min:       " << s << '\n';


    return 0;


}