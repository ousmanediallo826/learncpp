#include <iostream>

int getInput()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    constexpr int secondsPerHour{ 3600 };
    constexpr int secondsPerDay { 24 * secondsPerHour };


    constexpr int userValue{ getInput() };
     std::cout << "seconds per day: " << secondsPerDay << '\n';
     std::cout << userValue << " hours = " << userValue * secondsPerHour << " seconds\n";

    //  userValue = 5;

     return 0;


}