#include <iostream>

bool isPositive(int n)
{
    std::cout << " [isPositive ( " << n << " ) was called.]\n";
    return n > 0;
}
int main()
{

    std::cout << "Test 1: false && ...\n";
    bool r1{ false && isPositive(5) };
    std::cout << "result: " << r1 << "\n\n";

    std::cout << "Test 2: true || ...\n";
    bool r2{ false || isPositive(5) };
    std::cout << "result: " << r2 << "\n\n";

    std::cout << "Test 3: true && ...\n";
    bool r3{ true && isPositive(5) };
    std::cout << "result: " << r3 << "\n\n";

    int a{ 17 };
    int b{ 0 };
    if (b != 0 && a / b > 2) 
    {
         std::cout << "big ratio\n";
    }
    else
        std::cout << "no division happened\n";

    return 0;


}