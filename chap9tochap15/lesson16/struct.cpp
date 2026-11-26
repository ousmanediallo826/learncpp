#include <iostream>
#include <string_view>
#include <string>


enum class TaskState{ready, running, waiting, finished};

struct Task {
    std::string name{};
    int id{};
    TaskState state{ TaskState::ready };
    int priority{};
};


int main()
{
    Task t{"backup", 7, TaskState::waiting, 2};

    std::cout << "Name: " << t.name << '\n';
    std::cout << "id: " << t.id << '\n';
    std::cout << "Task State: " << static_cast<int>(t.state) << '\n';
    std::cout << "priority: " << t.priority << '\n';


    return 0;
}