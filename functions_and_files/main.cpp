#include "add.h"
#include <iostream>


void doPrint() {
    std::cout << "In doPrint()\n";
}

// Functions can call functions that call other functions
void doB() {
    std::cout << "In doB\n";
}
void doA() {
    std::cout << "Starting doA\n";
    doB();
    std::cout << "Ending doA()\n";
}
// 2.2 — Function return values (value-returning functions)

// void getUserValue() {
//     std::cout << "Enter an integer\n";
//     int input{};
    
//     std::cin >> input;
// }

// 2.4 — Introduction to function parameters and arguments
int getUserForm() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}
        // Function parameters and arguments
void doPrints() {
    std::cout << "In doPrints()\n";

}
void printValue(int x) {
    std::cout << x << '\n';

}
// int add(int x, int y) {
//     return x + y;
// }

//How parameters and arguments work together
void passByValue(int x, int y) {
    std::cout << x << '\n';
    std::cout << y << '\n';
}

int add(int x, int y);
int main() {

    std::cout << "Starting main() \n";
    doPrint();

    doA();
    std::cout << "Ending main\n";


    // 2.2 — Function return values (value-returning functions)
    

    // int num1{ getUserValue() };
    // std::cout << num1 << " doubled is " << num1 * 2 << '\n';

    // 2.4 — Introduction to function parameters and arguments

    int num2 { getUserForm() };
    std::cout << num2 << " doubled is: " << num2 * 2 << '\n';

            // Function parameters and arguments
    doPrints();
    printValue(6);
    // add(2,3);

    // How parameters and arguments work together
    passByValue(6, 7);


    // 2.5 — Introduction to local scope
    // Local variables
    // int addition(int a, int b) {
    //     int z{a + b};
    //     return z;
    // }

    // 2.8 — Programs with multiple code files
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';

    

    return 0;
}