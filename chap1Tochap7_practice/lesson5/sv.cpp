#include <iostream>
#include <string>
#include <string_view>

void printBanner(std::string_view text)
{
    std::cout << "*** " << text << " (" << text.length() << " chars) ***\n";
}

int main()
{
    std::string course { " System Programming "};
    printBanner(course);
    printBanner("IBM Z");
    std::string_view word{ course };
    word.remove_prefix(8);
    printBanner(word);

    return 0;

}