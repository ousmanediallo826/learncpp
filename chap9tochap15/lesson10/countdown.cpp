#include <iostream>

int sumTo(int n)
{
    int total{0};
    for(int i{1}; i <= n; ++i)
    {
        total += i;
        
    }
    return total;
}

int main()
{
    int count{5};
    while(count > 0)
    {
        std::cout << count << ' ';
        --count;
    }

    std::cout << "liftoff!\n";


    int total{ 0 };
    for(int i{ 1 }; i < 10; ++i)
    {
        total += i;
    }
     std::cout << "sum of 1..10 = " << total << '\n';


     for(int i{ 1 }; i <= 10; ++i)
     {
        if(i % 3 == 0) continue;
        if (i == 8) break;

        std::cout << i << ' ';
     }
     std::cout << '\n';

//      for (unsigned int i{ 3 }; i >= 0; --i)
// {
//     std::cout << i << ' ';
// }

     std::cout << sumTo(10) << '\n';
     std::cout << sumTo(1) << '\n';
     std::cout << sumTo(0) << '\n';
    return 0;
}