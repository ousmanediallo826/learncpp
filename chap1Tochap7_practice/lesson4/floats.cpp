#include <iomanip>
#include <iostream>


int main()
{
    std::cout << std::setprecision(20);

    float f{0.1f};
    double d{0.1};

    std::cout << "0.1 as float:  " << f << '\n';
    std::cout << "0.1 as double: " << d << '\n';


    float double{  16777216.0f };
    std::cout << "16777216 + 1 as float: " << big + 1.0f << '\n';

    double zero{ 0.0 };
    std::cout << "1.0 / 0.0 = " << 1.0 / zero << '\n';
    std::cout << "0.0 / 0.0 = " << zero / zero << '\n';

    return 0;
}
