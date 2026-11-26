#include <iostream>
#include <string>
#include <string_view>
#include <cstdint>
#include <iomanip>


constexpr int maxPriority{ 10 };
constexpr std::uint8_t abendedFlag{ 0x80 }; 
constexpr std::uint8_t dumpedFlag{ 0x40 };
constexpr std::uint8_t traceFlag{ 0x01 };

enum class TaskState {ready, running, waiting, finished};

struct Task {
    std::string name{};
    int id{};
    int priority{};
    TaskState state{ TaskState::ready};
    std::uint8_t flags{ 0 };
};

constexpr std::string_view toString(TaskState s) {
    switch (s)
    {
    case TaskState::ready: return "READY";
    case TaskState::running: return "RUNNING";
    case TaskState::waiting: return "WAITING";
    case TaskState::finished: return "FINISHED";
    }
    return "???";
}
bool hasFlag(const Task& t, std::uint8_t mask)
{
    return  (t.flags & mask) != 0;
}
void printTask(const Task& t)
{
    std::cout << "Task " << t.id << " (" << t.name << ")"
          << " state=" << toString(t.state)
          << " priority=" << t.priority
          << " flags=X'" << std::hex << std::uppercase << std::setw(2) <<std::setfill('0') << static_cast<int>(t.flags) << std::dec << "'";
    if (hasFlag(t, abendedFlag)) {
        std::cout << " ABENDED";
    }
    if (hasFlag(t, dumpedFlag)){
        std::cout << " DUMPED";
    }
    if (hasFlag(t, traceFlag))
    {
        std::cout << " TRACED";
    }
    std::cout << '\n';

}

void raisePriority(Task& t)
{
    if (t.priority >= maxPriority)
    {
        return;
    }
    ++t.priority ;
}



void setFlag(Task& t, std::uint8_t mask)
{
    t.flags = static_cast<std::uint8_t>(t.flags | mask);
}
int main()
{
    Task backup{ "backup", 7, 2, TaskState::waiting };
    printTask(backup);

    raisePriority(backup);
    backup.state = TaskState::running;
    printTask(backup);


    setFlag(backup, abendedFlag);
    setFlag(backup, dumpedFlag);
    backup.state = TaskState::finished;
    printTask(backup);


    Task scheduler{ "scheduler", 1, 10, TaskState::running };
    raisePriority(scheduler);
    printTask(scheduler);






}