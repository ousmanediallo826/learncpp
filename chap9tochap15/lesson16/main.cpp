#include <iostream>
#include <string_view>
enum class TaskState 
{
    ready,
    running,
    waiting,
    finished,
    blocked,
};

struct Task 
{
    int id{};
    TaskState state{ TaskState::ready };
    int priority{};

};

struct Tasks
{
    std::string name{};
    int id{};
    TaskState state{TaskState::waiting};
    int priority{};
};

// constexpr std::string_view toString(TaskState s)
// {
//     switch (s)
//     {
//     case TaskState::ready: return "READY";
//     case TaskState::running: return "RUNNING";
//     case TaskState::waiting: return "WAITING";
//     case TaskState::finished: return "FINISHED";
    
   
//     }
//      return "???";
// }
int main()
{
    TaskState state{TaskState::finished};

    if(state == TaskState::running)
    {
         std::cout << "the task is running\n";
    }
    std::cout << "stored as: " << static_cast<int>(state) << '\n';
    std::cout << "size: " << sizeof(state) << " bytes\n";


    // std::cout << toString(TaskState::waiting) << '\n';

    Task t{ 42, TaskState::running, 5 };
    std::cout << "id: " << t.id << '\n';
    std::cout << "priority: " << t.priority << '\n';

    t.priority = 9;

    std::cout << "new priority: " << t.priority << '\n';
    std::cout << "size of a Task: " << sizeof(Task) << " bytes\n";


    Tasks task{"backup", 7, TaskState::waiting, 2};

    std::cout << task.id << '\n';
    std::cout << task.name << '\n';
    std::cout << task.priority << '\n';
    

}