#include <iostream>

void printIfPositive(const int* p)
{
    if( p != nullptr && *p > 0){
        std::cout << *p << '\n';
    }
    return;
}

void swapByPointer(int* a, int* b)
{
    if (a == nullptr | b == nullptr)
    {
        return;
    }

    int temp {*a};
    *a = *b;
    *b = temp;
    std::cout << "a = " << *a << " b = " << *b << '\n';
}



int main()
{
    int p{5};
    const int *x{&p};
    printIfPositive(x);


    int z{1};
    int y{9};
    swapByPointer(&z, &y);
}