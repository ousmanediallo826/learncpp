#include <iostream>
int five () {
    return 5;
}
int main() {
    // Introduction to objects and variables
    // Data and values

    std::cout << 5;
    std::cout << -6.7;
    std::cout << 'H';
    std::cout << "Hello";


    // Objects and variables
    // int x;
    // int a;
    // int b;

    // Variable assignment and initialization
    // Variable assignment

    int width;
    width = 5;

    std::cout << width;

    width = 7;

    std::cout << width;

    int b = 5;
    int c (6);

    int d {7};
    int e {};

    int f {0};
    std::cout << f;


    //  Introduction to iostream: cout, cin, and endl

    int y {5};
    std::cout << y << std::endl;
    

    std::cout << "Hi" << std::endl;
    std::cout << "My name is Ousmane Diallo." << std::endl;

    int z {5};
    std::cout << "x is equal to: " << z << '\n';

    std::cout << "Enter a number\n";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << "\n";

    // Ask the user to enter three values. The program should then print these values. Add an appropriate comment above function main().

    //The program should match the following output (when run with input values 4, 5, and 6):


    std::cout << "Enter three numbers: ";
    int num1 {}, num2 {}, num3 {};
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    std::cout << "You entered " << num1 << ", " << num2 << ", " << num3 << ".";




    //  Introduction to expressions

    int as{2};
    int bs{ 2 + 3};
    int cs{ (2 * 3) + 4};
    int ds{b};
    int es{five()};






    



    return 0;
}