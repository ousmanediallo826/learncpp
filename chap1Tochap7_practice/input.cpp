#include <iostream>



int main() {

    std::cout << "Enter two integers: ";

    int x{};
    int y {};

    std::cin >> x >> y;

    int sum = x + y;
    int sub = x - y;
    int product = x * y;
    if(y == 0 ) {
        std::cout << "Non-zero divisibility.\n";
        return 1;
    }
    double divide{static_cast<double>(x) / y};

    int reminder = x % y;

    std::cout <<"the sum of "<< x << " + " << y << " = " << sum <<'\n';
    std::cout <<"the sub of "<< x << " - " << y << " = " << sub <<'\n';
    std::cout <<"the product of "<< x << " * " << y << " = " << product <<'\n';
    std::cout <<"the division of "<< x << " / " << y << " = " << divide <<'\n';
    std::cout <<"the reminder of "<< x << " %" << y << " = " << reminder <<'\n';


    return 0;
}