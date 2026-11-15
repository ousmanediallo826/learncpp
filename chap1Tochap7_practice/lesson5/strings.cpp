#include <iostream>
#include <string>


int main()
{
    std::string name{};
    std::cout << "Enter your full name: ";
    std::cin >>  name;

    std::cout << "Hello, " << name << "!\n";
    std::cout << "Your name has " << name.length() << " characters\n";

    std::string greeting{ "Hi " + name};
    greeting += "!";
    std::cout << greeting << '\n';

    return 0;

}