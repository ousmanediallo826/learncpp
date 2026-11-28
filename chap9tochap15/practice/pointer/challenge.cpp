#include <iostream>


struct Task 
{
    int id{};
    int priority{};
};

void printTask(const Task* t)
{
    if(t == nullptr)
    {
        return;
    }

    std::cout << "Task " << t->id << " priority= " << t->priority << '\n';
}


Task* higher(Task* a, Task* b)
{
    if (!a && !b) return nullptr;
    if (!a) return b;
    if (!b) return a;

    return (a->priority >= b->priority) ? a : b;



}

int main()
{
    Task a{ 1, 4 };
    Task b{ 2, 7 };




    printTask(higher(&a,&b));
    printTask(higher(&a, nullptr));
    printTask(higher(nullptr, nullptr));
}