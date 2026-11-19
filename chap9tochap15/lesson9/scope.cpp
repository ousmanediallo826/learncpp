#include <iostream>



int main()
{
    int apples { 5 };

    {
        int bananas{ 3 };
        std::cout << "inner: apples= " << apples << " bananas= " << bananas << '\n';

    }

    std::cout << "outer: apples= " << apples << '\n';
    std::cout << bananas;
    return 0;
}