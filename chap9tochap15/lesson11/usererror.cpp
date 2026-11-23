#include <iostream>
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getInt(int min, int max)
{
    while(true)
    {
        std::cout << "Enter a number from " << min << " to " << max << ": ";
        int x{};
        std::cin >> x;

        if(!std::cin)
        {
            if(std::cin.eof())
            {
                std::exit(1);
            }
            std::cin.clear();
            ignoreLine();

            std::cout << "That's not a number. Try again.\n";
            continue;
        }

        ignoreLine();
        if(x < min || x > max)
        {
            std::cout << "Out of range. Try again.\n";
            continue;
        }

        return x;
    }
}
int main()
{
    int age{ getInt(1, 120) };
    std::cout << "You entered " << age << '\n';
    return 0;
}