#include <iostream>

void describe(int temp)
{
    if (temp < 0) std::cout << temp << ": freezing\n";
    else if (temp < 15) std::cout << temp << ": cold\n";
    else if (temp < 25)  std::cout << temp << ": comfortable\n";
    else std::cout << temp << ": hot\n";

}

int main()
{
    describe(-5);
    describe(10);
    describe(15);
    describe(30);
    return 0;
}