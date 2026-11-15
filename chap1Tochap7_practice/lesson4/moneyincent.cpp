#include <iostream>
#include <iomanip>


int main() 
{
    int64_t price_a{};
    int64_t price_b{};
    int64_t price_c{};


    std::cin >> price_a;
    std::cout << '\n';
    std::cin >> price_b;
    std::cout << '\n';
    std::cin >> price_c;

    std::cout << '$' << (price_a / 100) << '.' 
              << std::setw(2) << std::setfill('0') << (price_a % 100) << '\n';
    
    std::cout << '$' << (price_b / 100) << '.' 
              << std::setw(2) << std::setfill('0') << (price_b % 100) << '\n';
    
    std::cout << '$' << (price_c / 100) << '.' 
              << std::setw(2) << std::setfill('0') << (price_c % 100) << '\n';

    return 0;
}


