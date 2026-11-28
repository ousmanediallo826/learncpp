#include <iostream>


void doubleInt(int& n) { n *= 2;}

void swapValues(int& a, int& b)
{
    int temp{};
    temp = a;
    a = b;
    b = temp;
    std::cout << "p=" << a << " q=" << b << '\n';
}

struct Task { int id{};int priority{};};
void printTask(const Task& t)
{
    std::cout << "Task " << t.id << " priority=" << t.priority << '\n';
}
Task& higherPriority(Task& a, Task& b)
{
    return (a.priority >= b.priority) ? a : b;
}
int main()
{
    int x{4};
    doubleInt(x);
    std::cout << x << '\n';

    int p{1};
    int q{9};
    swapValues(p,q);


    Task a{ 1, 4 };
    Task b{ 2, 7 };

    
    printTask(higherPriority(a,b));


}