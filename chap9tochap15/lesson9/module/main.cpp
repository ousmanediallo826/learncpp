#include <iostream>


extern int g_totalCalls;
int publicFunction(int x);
// extern int s_secret;


int main()
{
    std::cout << publicFunction(1) << '\n';
    std::cout << publicFunction(2) << '\n';
    std::cout << "calls so far: " << g_totalCalls << '\n';
    // std::cout << s_secret << '\n';
    return 0;
}