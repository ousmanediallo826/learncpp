#include<iostream>
#include <cmath>

template <typename T>
T maxOf(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T absValue(T x)
{
    if(x < 0) {return -x};
    return x;

}
int main()
{
    // std::cout << maxOf(3, 7) << '\n';
    // std::cout << maxOf(2.5, 1.5) << '\n';
    // std::cout << maxOf('a', 'z') << '\n';
    //  std::cout << maxOf<double>(2.5, 1) << '\n';
    
    std::cout << absValue(-5) << '\n';
    std::cout << absValue(-2.5) << '\n';
    std::cout << absValue(3) << '\n';
    std::cout << absValue<double>(-3) << '\n';

    return 0;
}