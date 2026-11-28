#include <iostream>

struct Task 
{
    int id{};
    int priority{};

};

int& priorityOf(Task& t)
{
    return t.priority;
}

int main()
{
    int x{ 5 };
    int y{ 7 };
    int& r{ x };
    
    
    r = y;

    y = 100;

    r =y;

    std::cout << "x=" << x << " y=" << y << " r=" << r << '\n';


    Task t{7, 2};
    priorityOf(t) = 9;
    std::cout << t.priority << '\n';


    int a{ 1 };
    int b{ 2 };
    int& s{ a };
    s = 10;
    s = b;
    b = 50;
    int c{ s };
    c = 99;
    std::cout << a << ' ' << b << ' ' << s << ' ' << c << '\n';
}