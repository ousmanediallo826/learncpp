#include <iostream>

void normalCounter() 
{
    int count{ 0 };
    ++count;
    std::cout << "normal: " << count << '\n';
}

void staticCounter()
{
    static int count{ 0 };
    ++count;
    std::cout << "Static normal: " << count << '\n';
}
int main()
{
    normalCounter();
    normalCounter();
    normalCounter();
    staticCounter();
    staticCounter();
    staticCounter();

    return 0;
}