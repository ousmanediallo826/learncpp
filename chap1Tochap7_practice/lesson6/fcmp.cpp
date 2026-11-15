#include <algorithm>
#include <cmath>
#include <iostream>

bool approximatelyEqual(double a, double b, double relEpsilon)
{
    return std::abs(a - b) <= std::max(std::abs(a), std::abs(b)) * relEpsilon;
}
int main()
{
    double x{0.1 + 0.2 };
    std::cout << std::boolalpha;
    std::cout << "x == 0.3:              " << (x == 0.3) << '\n';
    std::cout << "approximatelyEqual:    " << approximatelyEqual(x, 0.3, 1e-8) << '\n';

    int score{72};
    std::cout << "Result: " << ((score >= 60) ? "pass" : "fail") << '\n';

    int d{ 1 };
    d = d++ + ++d;
    return 0;
    
}

