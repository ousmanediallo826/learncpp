#include <iostream>

int square(int x)
{
    return x * x;
}

int sumOfSquare(int a, int b)
{
    return square(a) + square(b);
}

double ratio(int a, int b)
{
    int top{ sumOfSquare(a,b) };
    int bottom{ a - b };
    return top / bottom;
}
int main()
{
    std::cout << "Enter two integers: ";
    int a{};
    int b{};
    std::cin >> a >> b;
    std::cout << "ratio = " << ratio(a, b) << '\n';
    return 0;
}