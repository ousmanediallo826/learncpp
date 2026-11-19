#include <iostream>



int main()
{
    int apples{ 5 };

    {
        int apples{ 10 };
        std::cout << apples << '\n';
    }

    std::cout << apples;
    return 0;
}