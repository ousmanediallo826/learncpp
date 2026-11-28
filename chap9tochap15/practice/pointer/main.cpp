#include <iostream>

struct Task
{
    int id{};
    int priority{};
};

void raisePriority(Task* t) 
{
    if(t == nullptr)
    {
        return;
    }

    t->priority += 1;
}

int main()
{
    Task backup{ 7, 2 };
    Task* p{ &backup };

    std::cout << (*p).priority << '\n';
    std::cout << p->priority << '\n';

    raisePriority(p);
    raisePriority(nullptr);  

    std::cout << backup.priority << '\n';
}