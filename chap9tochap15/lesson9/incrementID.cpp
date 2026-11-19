#include <iostream>


int getNextID()
{
    static int id{ 0 };
    ++id;
    return id;
}

int main()
{
    std::cout <<getNextID() << ' ';
    std::cout <<getNextID() << ' ';
    std::cout <<getNextID() << ' ';

    return 0;
}